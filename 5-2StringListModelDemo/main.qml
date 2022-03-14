import QtQuick 2.12
import QtQuick.Window 2.12

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("StringList Model Demo")

    ListView {
        id:mListView
        anchors.fill:parent

        model:continentModel
        delegate: Rectangle{
            height: 50
            radius: 10
            color: "dodgerblue"
            width: parent.width
            Text {
                text: modelData
                font.pointSize: 20
                anchors.centerIn: parent
                anchors.horizontalCenter: parent.horizontalCenter
            }
        }
    }
}
