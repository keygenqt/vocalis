import QtQuick 2.0

Rectangle {
    signal customButtonClicked(string newColor)

    id: rectangle
    width: parent.width
    height: 80
    color: "blue"
    radius: 10

    Text {
        text: "Lib button colors"
        anchors.centerIn: parent
        color: 'white'
    }

    MouseArea {
        id: mouseArea
        anchors.fill: parent
    }

    Component.onCompleted: mouseArea.clicked.connect(mouseAreaClickedHandler)

    function mouseAreaClickedHandler(mouse) {
        rectangle.color = Qt.rgba(Math.random(), Math.random(), Math.random(), 1);
        rectangle.customButtonClicked(color)
    }
}
