import QtQuick 2.0
import Sailfish.Silica 1.0
import VocalisCore 1.0

Page {
    objectName: "mainPage"
    allowedOrientations: Orientation.All

    SilicaFlickable {
        id: idSilicaFlickable
        anchors.fill: parent
        contentHeight: parent.height

        VerticalScrollDecorator {}

        VStack {
            modifier: LayoutModifier {
                fillMaxWidth: true
                fillMaxHeight: true
                spacing: 160
                paddingTop: Theme.paddingLarge
                paddingBottom: 160
                paddingHorizontal: Theme.paddingLarge
            }

            Rectangle {
                width: parent.width
                height: 111
                color: "black"
                radius: 10

                Label {
                    text: qsTr("Vocalis")
                    color: 'white'
                    anchors.right: parent.right
                    anchors.verticalCenter: parent.verticalCenter
                    padding: Theme.paddingLarge
                }
            }

            VStack {
                id: idVStackChild
                modifier: LayoutModifier {
                    fillMaxWidth: true
                    fillMaxHeight: true
                    spacing: Theme.paddingMedium
                    paddingHorizontal: Theme.paddingLarge
//                    arrangement: LayoutModifier.SpaceBetween
                }

                Rectangle {
                    width: parent.width
                    height: 111
                    color: "darkblue"
                    radius: 10
                }

                Rectangle {
                    width: parent.width
                    height: 200
                    color: "darkgreen"
                    radius: 10
                }

//                Rectangle {
//                    width: parent.width
//                    height: 500
//                    color: "darkorchid"
//                    radius: 10
//                }

                Rectangle {
                    width: parent.width
                    height: 80
                    color: "darkslategray"
                    radius: 10
                }

                Rectangle {
                    width: parent.width
                    height: 150
                    color: "midnightblue"
                    radius: 10
                }
            }


            onRenderingDone: {
                idSilicaFlickable.contentHeight = height
                idVStackChild.contentHeight = height
            }
        }
    }
}
