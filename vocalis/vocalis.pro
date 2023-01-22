TEMPLATE = subdirs

OTHER_FILES += $$files(rpm/*)

SUBDIRS += \
    app \
    vocalis.core \

app.depends = vocalis.core \
