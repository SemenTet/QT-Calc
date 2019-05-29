#include "window.h"
#include "ui_mainwindow.h"
#include "xml.h"

#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->Button, &QPushButton::released, this, &MainWindow::dobut);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dobut() {
    QString filePir = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                   "/home/test", tr("*.xml *.txt"));
    Calculator *abcr = Calculator::getConstructorByPir(filePir);
    abcr->write(QFileDialog::getSaveFileName(this, tr("Save File"), "/home/test",
                                             tr("*.xml *.txt")), abcr->parse(filePir));

}
