#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include <QtSql>
#include <QtDebug>
#include <QSqlDatabase>
#include <liked.h>


namespace Ui {
class Login;
}

class Login : public QWidget
{
    Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);
    ~Login();
    QString showUsername();

signals:
    void loginSuccess();
    void signUpSuccess();

private slots:
    void on_loginButton_clicked();

    void on_signupButton_clicked();

private:
    Ui::Login *ui;
    QSqlDatabase database;
    Liked *likedTracks;
    QString username;
};

#endif // LOGIN_H
