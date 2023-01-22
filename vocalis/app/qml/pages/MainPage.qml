import QtQuick 2.0
import Sailfish.Silica 1.0
import VocalisCore 1.0

Page {
    objectName: "mainPage"
    allowedOrientations: Orientation.All

    VStack {
        modifier: LayoutModifier {
            fillMaxWidth: true
            fillMaxHeight: true
        }

        PageHeader {
            id: idPageHeader
            objectName: "pageHeader"
            title: qsTr("Vocalis")
        }

        VStack {
            modifier: LayoutModifier {
                fillMaxWidth: true
                fillMaxHeight: true
                spacing: Theme.paddingLarge
                padding: Theme.paddingLarge
                arrangement: LayoutModifier.SpaceBetween
            }

            Rectangle {
                id: rectangle1
                width: parent.width
                height: 200
                color: "blue"
                radius: 10
            }

            Rectangle {
                id: rectangle2
                width: parent.width
                height: 300
                color: "red"
                radius: 10
            }

            Rectangle {
                id: rectangle3
                width: parent.width
                height: 200
                color: "green"
                radius: 10
            }
        }
    }
}
