#include <QFontDatabase>
#include <QGuiApplication>
#include <QQmlApplicationEngine>

int main(int argc, char* argv[])
{
    QGuiApplication app(argc, argv);

    QList<QString> fonts = {
        ":/fonts/Fontello-Font-Awesome.ttf",
        ":/fonts/MaterialIconsOutlined-Regular.otf",
        ":/fonts/MaterialIconsRound-Regular.otf",
        ":/fonts/MaterialIconsSharp-Regular.otf",
        ":/fonts/MaterialIconsTwoTone-Regular.otf",
    };

    for (const auto& font : fonts)
    {
        if (QFontDatabase::addApplicationFont(font) == -1)
        {
            qDebug() << "Failed to load font: " << font;
            return 1;
        }
    }

    for (const auto& family : QFontDatabase::families())
    {
        if (family.contains("fontello") || family.contains("Material"))
        {
            qDebug() << "Font name to use in application: " << family;
        }
    }

    QQmlApplicationEngine engine;
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreationFailed, &app, []() { QCoreApplication::exit(-1); }, Qt::QueuedConnection);
    engine.loadFromModule("qml_fonts", "Main");

    return app.exec();
}
