#include "core-plugin.h"
#include "counter.h"
#include <qqml.h>

void CorePlugin::registerTypes(const char* uri) {
    qmlRegisterType<Counter>(uri, 1, 0, "Counter");
}
