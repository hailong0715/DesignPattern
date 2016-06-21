#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cashalgorithm.h"
#include <QString>
#include "cashalgfactory.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_CashButton_clicked()
{
    double total = 0;
    CashAlgFactory caFac(ui->comboBox->currentIndex());
    total = ui->price_lineEdit->text().toDouble()* ui->num_lineEdit->text().toInt();
   total = caFac.getResult(total);
   ui->label_TotalPrice->setText(QString("商品总价：%1").arg(total));
    ui->listWidget->addItem(QString("商品单价：%1").arg(ui->price_lineEdit->text().toDouble())+" "+QString("商品数量：%1").arg(ui->num_lineEdit->text().toInt()));
}

void MainWindow::on_ZeroButton_clicked()
{
    ui->price_lineEdit->clear();
    ui->num_lineEdit->clear();
}
