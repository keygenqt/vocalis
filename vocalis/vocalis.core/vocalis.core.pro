TEMPLATE = lib

TARGET = vocaliscore

CONFIG += qt plugin c++11

QML_IMPORT_NAME = VocalisCore
QML_IMPORT_MAJOR_VERSION = 1

QT += qml\
    quick\

HEADERS += \
    core-plugin.h \
    layoutmodifier.h \
    sizemodifier.h

SOURCES += \
    core-plugin.cpp \
    layoutmodifier.cpp \
    sizemodifier.cpp

DISTFILES += qmldir

uri = $$QML_IMPORT_NAME

qmldir.files = qmldir qml/VStack.qml
installPath = /usr/lib/com.keygenqt.vocalis/$$replace(uri, \\., /)
qmldir.path = $$installPath
target.path = $$installPath
INSTALLS += target qmldir
