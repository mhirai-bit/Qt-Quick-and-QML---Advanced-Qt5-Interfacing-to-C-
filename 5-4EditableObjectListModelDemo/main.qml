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
        model: myModel
//        model: mModelId

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
                    onEditingFinished: {
                        Wrapper.setNames(index, text);
                    }
                }
                SpinBox {
                    editable: true
                    value: age
                    Layout.fillWidth: true
                    onValueChanged: {
                        if(value === model.age)
                        {

                        }else
                        {
                            Wrapper.setAge(index, value);
                        }
                    }
                }
                Rectangle {
                    width: 50
                    height: 50
                    color: favoriteColor
                }
            }
        }
    }

    Button {
        id: mButton
        anchors.bottom: parent.bottom;
        width: parent.width
        height: 50
        text: "Add Person"
        onClicked: {
            Wrapper.addPerson();
        }
    }
}
