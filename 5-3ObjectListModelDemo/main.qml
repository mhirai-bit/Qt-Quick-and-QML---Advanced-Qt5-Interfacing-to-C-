import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.4
import QtQuick.Layouts 1.3

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Object List Model Demo")

    ListView {
        id: mListView
        anchors.fill: parent
//        model: personModel
        model: mModelId

        delegate: Rectangle{
            height: 90
            radius: 10
            color: "gray"
            border.color: "cyan"
            width: parent.width
            RowLayout {
                anchors.fill: parent
                anchors.margins: 20
                TextField {
                    text: names
                    Layout.fillWidth: true
                }
                SpinBox {
                    editable: true
                    value: age
                    Layout.fillWidth: true
                }
                Rectangle {
                    width: 50
                    height: 50
                    color: favoriteColor
                }
            }
        }
    }

    ListModel {
        id: mModelId
        ListElement{
            names: "Daniel Sten"; favoriteColor: "blue"; age: 10
        }
        ListElement{
            names: "Stevie Wongers"; favoriteColor: "cyan"; age: 23
        }
        ListElement{
            names: "Nicholai Ven"; favoriteColor: "red"; age: 33
        }
        ListElement{
            names: "William Glen"; favoriteColor: "yellowgreen"; age: 45
        }
    }
}
