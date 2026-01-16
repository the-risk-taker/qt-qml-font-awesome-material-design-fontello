cmake_minimum_required(VERSION 3.20)

project(qml_fonts VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(Qt6 REQUIRED COMPONENTS Quick)

qt_standard_project_setup(REQUIRES 6.8)

qt_add_executable(appqml_fonts
    main.cpp
)

qt_add_resources(appqml_fonts "qrc_fonts"
    PREFIX "/"
    FILES
        fonts/Fontello-Font-Awesome.ttf
        fonts/MaterialIcons-Regular.ttf
        fonts/MaterialIconsOutlined-Regular.otf
        fonts/MaterialIconsRound-Regular.otf
        fonts/MaterialIconsSharp-Regular.otf
        fonts/MaterialIconsTwoTone-Regular.otf
)

qt_add_qml_module(appqml_fonts
    URI qml_fonts
    QML_FILES
        Main.qml
)

target_link_libraries(appqml_fonts
    PRIVATE Qt6::Quick
)
