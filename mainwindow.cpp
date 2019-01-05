#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::MainWindow) {
    ui->setupUi(this);
    ui->listWidget->addItem(new QListWidgetItem());

    setAttribute(Qt::WA_TranslucentBackground, true);
}

MainWindow::~MainWindow() {
    delete ui;
}
