#include "liked.h"
#include "ui_liked.h"
#include <QHeaderView>

Liked::Liked(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Liked)
    , tableWidget(new QTableWidget(this))
{
    ui->setupUi(this);
    tableWidget -> setFixedSize(300, 500);
    tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    tableWidget -> setColumnCount(2);
    QStringList columnNames = {"Artist", "Track"};
    tableWidget->setHorizontalHeaderLabels(columnNames);
    tableWidget->setSelectionMode(QAbstractItemView::SingleSelection);
    tableWidget->setSelectionBehavior(QAbstractItemView::SelectRows);

}

Liked::~Liked()
{
    delete ui;
}
void Liked::addTrack(const QString &track, const QString &artist)
{
    int row = tableWidget->rowCount();
    tableWidget->insertRow(row);
    tableWidget->setItem(row, 0, new QTableWidgetItem(track));
    tableWidget->setItem(row, 1, new QTableWidgetItem(artist));
}

// как правильно прописать конструктор для liked
// как указать относительные пути
// парсер для треков в названии которых несколько слов
