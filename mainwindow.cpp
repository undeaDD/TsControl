#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    setAttribute(Qt::WA_TranslucentBackground, true);

    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/icon/teamspeak"), "1"));
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/icon/teamspeak"), "2"));
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/icon/teamspeak"), "3"));
    ui->listWidget->addItem(new QListWidgetItem(QIcon(":/icon/teamspeak"), "4"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
