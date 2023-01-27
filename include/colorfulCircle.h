#include <Qwidget>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>

class ColorfulCircle : public QWidget {
    Q_OBJECT
QPixmap mCurrentCircle;
QPixmap mYellowCircle;
QPixmap mGreenCircle;
QPixmap mRedCircle;
public:

    ColorfulCircle (QWidget *parent);
    void setYellow ();
    void setGreen();
    void setRed();
    void paintEvent (QPaintEvent *e);
    QSize minimumSizeHint () const override;


};
