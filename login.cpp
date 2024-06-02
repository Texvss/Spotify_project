#include "login.h"
#include <QCryptographicHash>
#include <QMessageBox>
#include "ui_login.h"
#include "liked.h"
#include "mainwindow.h"

Login::Login(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Login)
// , trackView(new TrackView(this))
{
    ui->setupUi(this);
    ui->loginButton->setStyleSheet("QPushButton:!hover{border: 1px solid black;border-radius: "
                                   "5px;background-color: #717072;color:white;}"
                                   "QPushButton:hover{border: 1px solid black;border-radius: "
                                   "5px;background-color: #33322e;color:#c0c0c0;}");
    ui->signupButton->setStyleSheet("QPushButton:!hover{border: 1px solid black;border-radius: "
                                    "5px;background-color: #717072;color:white;}"
                                    "QPushButton:hover{border: 1px solid black;border-radius: "
                                    "5px;background-color: #33322e;color:#c0c0c0;}");

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("/Users/mansur/Desktop/anotherDraft.db");

    if (!database.open()) {
        ui->CheBu->setStyleSheet(
            "background-color:#b83030;border: 1px solid black;border-radius: 10px;");
    } else {
        ui->CheBu->setStyleSheet(
            "background-color:#016e0e;border: 1px solid black;border-radius: 10px;");
    }
}


Login::~Login()
{
    delete ui;
}

void Login::on_loginButton_clicked()
{
    QString username = ui->usernameLine->text();
    QString password = ui->passwordLine->text();
    password = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Blake2b_256).toHex());

    if (!database.isOpen()) {
        qDebug() << "Failed to open the database";
        return;
    }

    QSqlQuery qry;
    qry.prepare("SELECT * FROM users WHERE username = :username AND password = :password");
    qry.bindValue(":username", username);
    qry.bindValue(":password", password);

    QSqlQuery query;
    query.prepare("SELECT id FROM users WHERE username = :username AND password = :password");
    query.bindValue(":username", username);
    query.bindValue(":password", password);

    if (query.exec() && query.next()) {
        int userId = query.value(0).toInt();
        MainWindow *mainWindow = new MainWindow();
        mainWindow->showUsername(username);
        mainWindow->show();
        close();
    } else {
        QMessageBox::critical(this, "Login Failed", "Wrong password or username");
    }
}

void Login::on_signupButton_clicked()
{
    QString username = ui->usernameLine->text();
    QString password = ui->passwordLine->text();
    QString hashedPassword = QString(QCryptographicHash::hash(password.toUtf8(), QCryptographicHash::Blake2b_256).toHex());

    if (!database.isOpen()) {
        qDebug() << "Failed to open the database";
        QMessageBox::critical(this, "Error", "Failed to open the database");
        return;
    }

    QSqlQuery qry;
    qry.prepare("INSERT INTO users (username, password) VALUES (:username, :password)");
    qry.bindValue(":username", username);
    qry.bindValue(":password", hashedPassword);

    if (qry.exec()) {
        ui->label->setText("Sign up successful!");
        emit signUpSuccess();
    } else {
        ui->label->setText("Sign up failed.");
        qDebug() << "Sign up failed: " << qry.lastError().text();
        QMessageBox::critical(this, "Error", "Sign up failed! Username already exists!");
    }
}

QString Login::showUsername()
{
    QString username;
    username = ui->usernameLine->text();
    return username;
}
