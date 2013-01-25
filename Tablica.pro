QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
TARGET = Tablica

CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    widget.cpp

INCLUDEPATH += . \
    c:/opencv/build/include

CONFIG(release,debug|release){
    LIBS += -Lc:/opencv/builds_with_Qt/lib/Release \
    -lopencv_core243 \
    -lopencv_highgui243 \
    -lopencv_imgproc243 \
    -lopencv_features2d243 \
    -lopencv_calib3d243
}

CONFIG(debug,debug|release){
    LIBS += -Lc:/opencv/builds_with_Qt/lib/Debug \
    -lopencv_core243d \
    -lopencv_highgui243d \
    -lopencv_imgproc243d \
    -lopencv_features2d243d \
    -lopencv_calib3d243d
}

HEADERS += \
    widget.h \
    convert.h
