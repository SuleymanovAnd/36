#include "colorfulCircle.h"

ColorfulCircle::ColorfulCircle(QWidget *parent) {
    setParent (parent);

    mYellowCircle = QPixmap("/YELLOW.png");
    setGeometry(mYellowCircle.rect());
    mGreenCircle = QPixmap ("/GREEN.png");
    setGeometry(mGreenCircle.rect());
    mRedCircle = QPixmap ("/RED.png");
    setGeometry(mRedCircle.rect());
    mCurrentCircle = mGreenCircle;


};

void ColorfulCircle::setYellow() {
    mCurrentCircle = mYellowCircle;
    update();
}

void ColorfulCircle::setGreen(){
    mCurrentCircle = mGreenCircle;
    update();
}

void ColorfulCircle::setRed(){
    mCurrentCircle = mRedCircle;
    update();
}