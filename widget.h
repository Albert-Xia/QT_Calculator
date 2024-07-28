#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "calculator.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    QString getLineEditContent();   //从lineEdit获取text

    void on_pushButton_clear_clicked();

    void on_pushButton_1_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_0_clicked();

    void on_pushButton_point_clicked();

    void on_pushButton_leftBracket_clicked();

    void on_pushButton_RBracket_clicked();

    void on_pushButton_back_clicked();

    void on_pushButton_equal_clicked();

    void on_pushButton_division_clicked();

    void on_pushButton_mult_clicked();

    void on_pushButton_subd_clicked();

    void on_pushButton_plus_clicked();

private:
    Ui::Widget *ui;

    Calculator m_Cal;
};
#endif // WIDGET_H
