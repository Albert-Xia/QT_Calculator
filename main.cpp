﻿#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.setWindowTitle("计算器");
    // w.setStyleSheet("background-color: white;");


    w.show();
    return a.exec();
}
