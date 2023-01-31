#include "colorfulCircle.h"
#include <QtCore>
#include <QtGui>

ColorfulCircle::ColorfulCircle(QWidget *parent){
    Q_INIT_RESOURCE(qtres);
    setParent (parent);

    setSizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
    mYellowCircle = QPixmap("://YELLOW.png");

    mGreenCircle = QPixmap ("://GREEN.png");

    mRedCircle = QPixmap ("://RED.png");

    mCurrentCircle = &mGreenCircle;
    setGeometry(mCurrentCircle->rect());
};




void ColorfulCircle::setYellow() {
    mCurrentCircle = &mYellowCircle;
    update();
}

void ColorfulCircle::setGreen(){
    mCurrentCircle = &mGreenCircle;
    update();
}

void ColorfulCircle::setRed(){
    mCurrentCircle = &mRedCircle;
    update();
}

void ColorfulCircle::paintEvent(QPaintEvent *e) {
    QPainter p (this);
    p.drawPixmap(e->rect(),*mCurrentCircle);
}
QSize ColorfulCircle::minimumSizeHint () const {
    return QSize(100,100);
}