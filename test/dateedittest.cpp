#include "dateedittest.h"
#include <qdateeditex.h>
#include <QFormLayout>
#include <QLineEdit>

DateEditTest::DateEditTest(QWidget *parent) :
    QWidget(parent)
{
    QFormLayout *layout = new QFormLayout(this);
    QDateEditEx *edit = new QDateEditEx(this);
    edit->setCalendarPopup(true);
    edit->setNullable(true);
    edit->setDate(QDate(2014, 12, 31));
    layout->addRow("Nullable date edit widget", edit);

    edit = new QDateEditEx(this);
    edit->setCalendarPopup(true);
    edit->setDate(QDate::currentDate());
    layout->addRow("Date edit widget", edit);
}

DateEditTest::~DateEditTest()
{
}
