TEMPLATE = lib

TARGET = core

CONFIG += qt plugin c++11

QML_IMPORT_NAME = Core
QML_IMPORT_MAJOR_VERSION = 1

QT += qml\
    quick\

HEADERS += \
    counter.h \
    core-plugin.h

SOURCES += \
    counter.cpp \
    core-plugin.cpp

DISTFILES += qmldir

uri = $$QML_IMPORT_NAME

qmldir.files = qmldir qml/CustomButton.qml
installPath = /usr/lib/com.keygenqt.vocalis/$$replace(uri, \\., /)
qmldir.path = $$installPath
target.path = $$installPath
INSTALLS += target qmldir
