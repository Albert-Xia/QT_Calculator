#include <QString>


#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

}

Widget::~Widget()
{
    delete ui;
}

QString Widget::getLineEditContent()
{
    return ui->lineEdit_display->text();
}


void Widget::on_pushButton_clear_clicked()
{
    ui->lineEdit_display->clear();
}


void Widget::on_pushButton_1_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("1"));
}


void Widget::on_pushButton_2_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("2"));
}


void Widget::on_pushButton_3_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("3"));
}

void Widget::on_pushButton_4_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("4"));
}


void Widget::on_pushButton_5_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("5"));
}


void Widget::on_pushButton_6_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("6"));
}


void Widget::on_pushButton_7_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("7"));
}


void Widget::on_pushButton_8_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("8"));
}


void Widget::on_pushButton_9_clicked()
{
    QString lineText = getLineEditContent();

    ui->lineEdit_display->setText(lineText.append("9"));
}


void Widget::on_pushButton_0_clicked()
{
    QString lineText = getLineEditContent();

    if(!lineText.isEmpty())
    {
        ui->lineEdit_display->setText(lineText.append("0"));
    }
}


void Widget::on_pushButton_point_clicked()
{
    QString lineText = getLineEditContent();

    if(lineText.indexOf('.') != -1)
    {
        return;
    }

    if(!lineText.isEmpty())
    {
        ui->lineEdit_display->setText(lineText.append("."));
    }
    else
    {
        ui->lineEdit_display->setText(lineText.append("0."));
    }
}

