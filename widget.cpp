#include <QFileDialog>
#include <QDebug>
#include "widget.h"
#include "convert.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent)
{
    buttonGroup = new QButtonGroup(this);
    buttonImage = new QPushButton("Image",this);
    connect(buttonImage,SIGNAL(clicked()),this,SLOT(loadImage()));
    buttonGroup->addButton(buttonImage);
}

void Widget::loadImage()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                    ".",
                                                    tr("Images (*.png *.xpm *.jpg)"));
    if (!fileName.isEmpty()) {
        QImage image(fileName);

    }

}

