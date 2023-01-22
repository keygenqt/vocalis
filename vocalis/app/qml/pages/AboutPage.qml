import QtQuick 2.0
import Sailfish.Silica 1.0
import Modifier 1.0
import Arrangement 1.0

Page {
    objectName: "aboutPage"
    allowedOrientations: Orientation.All

    VColumn {
        modifier: Modifier {
            fillMaxWidth: true
            fillMaxHeight: true
            padding: Theme.paddingLarge
            arrangement: Arrangement.SpaceBetween
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
