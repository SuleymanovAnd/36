#include <QApplication>
#include <QPushButton>
#include <QVBoxLayout>
#include "colorfulCircle.h"
#include "QSlider"

int main(int argc, char *argv[]) {
    QApplication app(argc,argv);
    QWidget *window = new QWidget();
    window->setFixedSize(200,250);

    ColorfulCircle *circle = new ColorfulCircle(window);
    QSlider * slider = new QSlider(Qt::Horizontal,window);
    slider ->setMinimum(0);
    slider ->setMaximum(100);

    auto *layout = new QVBoxLayout (window);

    layout ->addWidget(circle);
    layout ->addWidget(slider);
    window->setLayout(layout);

    QObject::connect (slider, &QSlider::valueChanged,[&slider,&circle](int newValue){
        if (newValue >=0 && newValue <33) {circle->setGreen();}
        else if (newValue >= 33 && newValue <66) {circle->setYellow();}
        else if (newValue >=66  && newValue <=100) {circle->setRed();}

    });
    window->show();
    slider->show();
    circle->show();
   return app.exec();
}
