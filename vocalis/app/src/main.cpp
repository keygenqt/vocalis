#include <auroraapp.h>
#include <QtQuick>

int main(int argc, char *argv[])
{
    QScopedPointer<QGuiApplication> application(Aurora::Application::application(argc, argv));
    application->setOrganizationName(QStringLiteral("com.keygenqt"));
    application->setApplicationName(QStringLiteral("vocalis"));

    QScopedPointer<QQuickView> view(Aurora::Application::createView());

    /// Vocalis
    view->engine()->addImportPath("/usr/lib/com.keygenqt.vocalis/");
    ///////////

    view->setSource(Aurora::Application::pathTo(QStringLiteral("qml/vocalis.qml")));
    view->show();

    return application->exec();
}
