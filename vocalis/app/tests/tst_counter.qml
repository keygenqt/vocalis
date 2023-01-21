import QtQuick 2.0
import "../qml"

CounterCppApplication {
    SailfishTestCase {
        name: "Counter tests"
        when: windowShown

        function test_counterAdd() {
            var button = findElementWithObjectName(pageStack.currentPage, "addButton");
            clickElement(button);
            clickElement(button);
            compare(findElementWithObjectName(pageStack.currentPage, "countText").text, "2");
        }

        function test_counterReset() {
            var button = findElementWithObjectName(pageStack.currentPage, "addButton");
            clickElement(button);
            clickElement(button);
            clickPullDownElement(pageStack.currentPage, "resetItem");
            compare(findElementWithObjectName(pageStack.currentPage, "countText").text, "0");
        }

        function cleanup() {
            clickPullDownElement(pageStack.currentPage, "resetItem");
        }
    }
}
