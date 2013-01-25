#pragma once
#include <QWidget>
#include <QButtonGroup>
#include <QPushButton>

class Widget : public QWidget
{
    Q_OBJECT
public:
    explicit Widget(QWidget *parent = 0);

private:
    QButtonGroup *buttonGroup;
    QPushButton *buttonImage;
private slots:
    void loadImage();
};

