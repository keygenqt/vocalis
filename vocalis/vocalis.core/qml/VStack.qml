import QtQuick 2.0
import VocalisCore 1.0

Rectangle {
    id: idMain
    objectName: "VStack"
    width: parent.width
    color: 'transparent'

    anchors.left: parent.left
    anchors.right: parent.right

    anchors.topMargin: modifier.paddingTop
    anchors.leftMargin: modifier.paddingLeft
    anchors.rightMargin: modifier.paddingRight
    anchors.bottomMargin: modifier.paddingBottom

    property LayoutModifier modifier: LayoutModifier {}
    property int contentHeight: 0

    signal renderingDone(int height)

    onContentHeightChanged: {
        idMain.height = heightCalculation()
        anchorsСalculation()
        renderingDone(idMain.height)
    }

    function checkHeightScroll() {
        var parentH = parent.height - parentChildrenHeightCalculation() - modifier.paddingTop - modifier.paddingBottom
        var stackH = childrenHeightCalculation() + (modifier.spacing * (idMain.children.length - 1))
        return parentH < stackH
    }

    function childrenHeightCalculation() {
        var i = 0;
        var h = 0;
        for(i = 0; i < idMain.children.length; i++) {
            h += idMain.children[i].height
        }
        return h
    }

    function parentChildrenHeightCalculation() {
        var i = 0;
        var h = 0;
        for(i = 0; i < parent.children.length; i++) {
            if (parent.children[i]['modifier'] === undefined
                    || parent.children[i].modifier.uniqueID !== idMain.modifier.uniqueID) {
                h += parent.children[i].height
            }
        }
        return h
    }

    function heightCalculation() {
        var i = 0;
        var h = 0;
        var isScroll = checkHeightScroll()

        if (!isScroll && modifier.fillMaxHeight) {
            var s = 0
            if (parent.objectName === 'VStack') {
                s += parent.modifier.spacing
            }
            return parent.height - parentChildrenHeightCalculation() - modifier.paddingTop - modifier.paddingBottom - s
        }

        h += childrenHeightCalculation()

        if (isScroll) {
            h += (modifier.spacing * (idMain.children.length - 1)) + modifier.paddingTop
        }

        return h
    }

    function anchorsСalculation() {
        var i = 0;
        var spacing = spacingСalculation()
        var isScroll = checkHeightScroll()

        for(i = 0; i < parent.children.length; i++) {
            if (parent.children[i]['modifier'] !== undefined
                    && parent.children[i].modifier.uniqueID === idMain.modifier.uniqueID) {
                if (modifier.paddingTop !== 0) {
                    if (parent.children.length === 1) {
                        idMain.anchors.top = parent.top
                    } else {
                        parent.children[i].anchors.top = parent.children[i-1].bottom
                    }
                }
                if (modifier.paddingBottom !== 0) {
                    if (i + 1 < parent.children.length) {
                        parent.children[i].anchors.bottom = parent.children[i+1].top
                    }
                }
                break;
            }
        }

        for(i = 0; i < idMain.children.length; ++i) {
            if (i !== 0) {
                idMain.children[i].anchors.top = idMain.children[i-1].bottom
            }
            if (spacing !== 0) {
                idMain.children[i].anchors.topMargin = spacing
            }
        }
    }

    function spacingСalculation() {
        var isScroll = checkHeightScroll()
        if (!isScroll
                && modifier.fillMaxHeight
                && modifier.arrangement === LayoutModifier.SpaceBetween
                && idMain.children.length !== 1) {
            return (heightCalculation() - childrenHeightCalculation()) / (idMain.children.length - 1)
        } else {
            return modifier.spacing
        }
    }

    Component.onCompleted: {
        idMain.height = heightCalculation()
        anchorsСalculation()
        renderingDone(idMain.height + modifier.paddingBottom)
    }
}
