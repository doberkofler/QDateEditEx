#include "dateedittest.h"
#include <qdateeditex.h>
#include <QVBoxLayout>
#include <QLineEdit>

DateEditTest::DateEditTest(QWidget *parent) :
    QMainWindow(parent)
{
    QWidget *wid = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(wid);
    QDateEditEx *edit = new QDateEditEx(wid);
    edit->setCalendarPopup(true);
    edit->setNullable(true);
    layout->addWidget(edit);
    edit = new QDateEditEx(wid);
    edit->setCalendarPopup(true);
    layout->addWidget(edit);
    QLineEdit *ledit = new QLineEdit(wid);
    layout->addWidget(ledit);

    wid->setLayout(layout);


    setCentralWidget(wid);
}

DateEditTest::~DateEditTest()
{
}
