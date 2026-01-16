import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    id: root
    visible: true
    width: 480
    height: 900
    title: "Fonts in QML"

    RowLayout {
        anchors.fill: parent
        anchors.margins: 20
        spacing: 20

        ToolButton  {
            text: "\uf0d1"
            font.family: "Material Icons Outlined"
            font.pointSize: 40
        }

        ToolButton  {
            text: "\ue32a"
            font.family: "Material Icons Round"
            font.pointSize: 40
        }

        ToolButton  {
            text: "\ue174"
            font.family: "Material Icons Sharp"
            font.pointSize: 40
        }

        Text {
            font.family: "Material Icons Two Tone"
            text: "\ue88a"
            font.pixelSize: 48
            color: "#2196F3"
        }

        Button {
            contentItem: Row {
                spacing: 10
                Text {
                    font.family: "fontello"
                    text: "\ue82a"
                    font.pixelSize: 24
                    color: "white"
                }
                Text {
                    text: "Home"
                    color: "white"
                    verticalAlignment: Text.AlignVCenter
                }
            }
            background: Rectangle {
                color: "#4CAF50"
                radius: 5
            }
        }
    }
}
