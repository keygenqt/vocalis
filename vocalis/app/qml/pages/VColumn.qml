import QtQuick 2.0
import Sailfish.Silica 1.0
import Modifier 1.0
import Arrangement 1.0

Rectangle {
    id: idMain
    width: _width - modifier.padding * 2
    height: _height - modifier.padding * 2
    anchors.verticalCenter: parent.verticalCenter
    anchors.horizontalCenter: parent.horizontalCenter
    color: 'transparent'

    property Modifier modifier: Modifier {}

    readonly property int _width: modifier.fillMaxWidth ? parent.width : modifier.width
    readonly property int _height: modifier.fillMaxHeight ? parent.height : modifier.height

    Component.onCompleted: {
        var spacing = modifier.spacing
        if (modifier.arrangement === Arrangement.SpaceBetween && idMain.children.length !== 1) {
            var h = 0
            for(var j = 0; j < idMain.children.length; ++j) {
                h += idMain.children[j].height
            }
            if (idMain.height > h + (spacing * idMain.children.length)) {
                spacing = (idMain.height - h) / (idMain.children.length - 1)
            }
        }

        for(var i = 0; i < idMain.children.length; ++i) {
            if (i !== 0) {
                idMain.children[i].anchors.top = idMain.children[i-1].bottom
                idMain.children[i].anchors.topMargin = spacing
            }
        }
    }
}
