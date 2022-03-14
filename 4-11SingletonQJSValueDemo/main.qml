import QtQuick 2.12
import QtQuick.Window 2.12
import QtQuick.Controls 2.4
import com.blikoon.singletondata 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Singleton QJSValue Demo")

    Button{
        id: mButton
        text: "Click Me"
        onClicked: {
            console.log(MyApi.someProperty);
//            console.log(MyApi.mArray[3])
            MyApi.mArray.forEach(function(element){
                console.log(element)
            })
        }
    }
}
