#include <Qwidget>
#include <QPixmap>


class ColorfulCircle : public QWidget {
QPixmap mCurrentCircle;
QPixmap mYellowCircle;
QPixmap mGreenCircle;
QPixmap mRedCircle;
public:

    ColorfulCircle (QWidget *parent);
    void setYellow ();
    void setGreen();
    void setRed();
};