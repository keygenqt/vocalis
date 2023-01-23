#include "coremodifier.h"
#include <QVariant>

CoreModifier::CoreModifier(QObject *parent) : QObject(parent) {

}

QString CoreModifier::uniqueID() {
    return "VStack-" + QVariant(reinterpret_cast<uint32_t>(this)).toString();
}
