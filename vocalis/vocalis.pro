TEMPLATE = subdirs

OTHER_FILES += $$files(rpm/*)

SUBDIRS += \
    app \
    core \

app.depends = core \

DISTFILES += \
    app/qml/pages/VColumn.qml
