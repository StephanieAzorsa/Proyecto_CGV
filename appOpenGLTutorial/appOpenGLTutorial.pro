QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cone.cpp \
    cube.cpp \
    main.cpp \
    modelimporter.cpp \
    pyramid.cpp \
    scene.cpp \
    sphere.cpp \
    triangle.cpp \
    utils.cpp \
    torus.cpp \
    widget.cpp

HEADERS += \
    cone.h \
    cube.h \
    modelimporter.h \
    pyramid.h \
    scene.h \
    sphere.h \
    triangle.h \
    utils.h \
    torus.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    shaders.qrc

DISTFILES += \
    shapes/cylinder.obj \
    shapes/pyramid.obj
