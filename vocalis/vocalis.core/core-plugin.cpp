#include "core-plugin.h"
#include <qqml.h>
#include "layoutmodifier.h"

void CorePlugin::registerTypes(const char* uri) {
    qmlRegisterType<LayoutModifier>(uri, 1, 0, "LayoutModifier");
}
