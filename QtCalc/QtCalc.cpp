#include "QtCalc.hpp"

QtCalc::QtCalc(QWidget *parent):
    ui(new Ui::QtCalcClass),
    calc(new View::Calc),
    QMainWindow(parent)
{
    ui->setupUi(this);
    auto commands{ calc->getOperations() };
    for (auto &command : commands) {
        ui->toolBar->addWidget(new QRadioButton(QString(command.c_str())));
    }
    //������ �� ������ ������
    //������� ������ ��� �������
    //ui.verticalLayout->addItem();
    //������� ������ � ��������� view
}

QtCalc::~QtCalc() {}
