#include <QApplication>
#include "login.h"
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login login;
    MainWindow w;

    QObject::connect(&login, &Login::loginSuccess, [&w, &login]() {
        QString username = login.showUsername();
        login.hide();
        w.show();
        w.showUsername(username);
    });

    QObject::connect(&login, &Login::signUpSuccess, [&w, &login]() {
        QString username = login.showUsername();
        login.hide();
        w.show();
        w.showUsername(username);
    });

    login.show();

    return a.exec();
}
