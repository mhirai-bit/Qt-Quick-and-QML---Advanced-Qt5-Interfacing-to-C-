import QtQuick 2.12
import QtQuick.Window 2.12
import com.blikoon.logos 1.0

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Logo{
        id: mLogo1
        text: "Learn QT"
        bgColor: "blue"
        textColor: "yellow"
    }
    Logo{
        id: mLogo2
        anchors.top: mLogo1.bottom
        anchors.topMargin: 20
        text: "Go Fluid"
        bgColor: "beige"
        textColor: "black"
        topic: Logo.QTQUICK
    }
}
