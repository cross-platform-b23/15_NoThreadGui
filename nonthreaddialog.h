#ifndef NONTHREADDIALOG_H
#define NONTHREADDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class NonThreadDialog; }
QT_END_NAMESPACE

class NonThreadDialog : public QDialog
{
    Q_OBJECT

public:
    NonThreadDialog(QWidget *parent = nullptr);
    ~NonThreadDialog();

private slots:
    void on_pushButtonA_clicked();
    void on_pushButtonB_clicked();

private:
    Ui::NonThreadDialog *ui;
};
#endif // NONTHREADDIALOG_H
