import QtQuick 2.0
import Sailfish.Silica 1.0
import Core 1.0

Page {
    objectName: "mainPage"
    allowedOrientations: Orientation.All

    Counter { id: counter }

    Column {
        spacing: 20
        width: parent.width
        height: parent.height

        PageHeader {
            objectName: "pageHeader"
            title: qsTr("Vocalis")
            extraContent.children: [
                IconButton {
                    objectName: "aboutButton"
                    icon.source: "image://theme/icon-m-about"
                    anchors.verticalCenter: parent.verticalCenter

                    onClicked: pageStack.push(Qt.resolvedUrl("AboutPage.qml"))
                }
            ]
        }

        Column {
            spacing: 20
            width: parent.width - Theme.paddingLarge * 2
            anchors.horizontalCenter: parent.horizontalCenter

            Text {
                objectName: "countText"
                width: parent.width
                text: "Lib counter: " + counter.count
                color: "red"
                font.pointSize: 50
                horizontalAlignment: Text.AlignHCenter
            }

            Button {
                objectName: "addButton"
                width: parent.width
                text: "add"
                onClicked: counter.incrementCount()
            }

            CustomButton {
                onCustomButtonClicked: {
                    console.log('Click')
                }
            }
        }
    }
}
