#include "nonthreaddialog.h"
#include "ui_nonthreaddialog.h"
#include <stdlib.h>
#include <QThread>

NonThreadDialog::NonThreadDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NonThreadDialog)
{
    ui->setupUi(this);
}

NonThreadDialog::~NonThreadDialog()
{
    delete ui;
}


void NonThreadDialog::on_pushButtonA_clicked()
{
    while (true)
    {
        qDebug("A");
       QThread::msleep(1);
    }
}


void NonThreadDialog::on_pushButtonB_clicked()
{
    while (true)
    {
       qDebug("B");
       QThread::msleep(1);
    }
}

