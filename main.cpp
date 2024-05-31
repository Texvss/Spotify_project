#include "mainwindow.h"
#include "login.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Login login;
    MainWindow w;

    QObject::connect(&login, &Login::loginSuccess, [&w, &login](){
        QString username = login.showUsername();
        login.hide();
        w.show();
        w.showUsername(username); // передаем имя пользователя
    });

    QObject::connect(&login, &Login::signUpSuccess, [&w, &login](){
        QString username = login.showUsername();
        login.hide();
        w.show();
        w.showUsername(username); // передаем имя пользователя
    });

    login.show();

    return a.exec();
}
