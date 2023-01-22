TARGET = com.keygenqt.vocalis

CONFIG += \
    auroraapp \
    auroraapp_i18n \
    c++11 \

PKGCONFIG += \

SOURCES += \
    arrangement.cpp \
    modifier.cpp \
    src/main.cpp \

HEADERS += \
    arrangement.h \
    modifier.h

OTHER_FILES += qml/vocalis.qml \
    qml/cover/DefaultCoverPage.qml \
    translations/*.ts \
    com.keygenqt.vocalis.desktop

AURORAAPP_ICONS = 86x86 108x108 128x128 172x172

DISTFILES += \
    tests/tst_counter.qml \
    tests/SailfishTestCase.qml \

TRANSLATIONS += \
    translations/com.keygenqt.vocalis.ts \
    translations/com.keygenqt.vocalis-ru.ts \
    
tests.files = tests/*
tests.path = /usr/share/com.keygenqt.vocalis/tests
INSTALLS += tests
    
## Imports info
QML_IMPORT_PATH += $$PWD/../core/imports
