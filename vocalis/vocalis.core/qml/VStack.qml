import QtQuick 2.0
import VocalisCore 1.0

Rectangle {
    id: idMain
    objectName: "VStack"
    width: _width - modifier.padding * 2
    height: _height - modifier.padding * 2
    anchors.horizontalCenter: parent.horizontalCenter
    color: 'transparent'

    property LayoutModifier modifier: LayoutModifier {}

    readonly property int _width: modifier.fillMaxWidth ? parent.width : modifier.width
    readonly property int _height: modifier.fillMaxHeight ? parent.height : modifier.height

    Component.onCompleted: {
        var spacing = modifier.spacing
        if (modifier.arrangement === LayoutModifier.SpaceBetween && idMain.children.length !== 1) {
            var h = 0
            for(var j = 0; j < parent.children.length; ++j) {
                // @todo it need fix
                if (parent.children[j].objectName !== "VStack") {
                    h += parent.children[j].height - spacing
                }
            }
            for(j = 0; j < idMain.children.length; ++j) {
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
