#include <Qwidget>
#include <QPixmap>
#include <QPaintEvent>
#include <QPainter>

class ColorfulCircle : public QWidget {
    Q_OBJECT

public:
    ColorfulCircle() = default;
    ColorfulCircle (QWidget *parent);

    void paintEvent (QPaintEvent *e) override;
    QSize minimumSizeHint () const override;
public slots:
    void setYellow ();
    void setGreen();
    void setRed();

private :
    QPixmap mCurrentCircle;
    QPixmap mYellowCircle;
    QPixmap mGreenCircle;
    QPixmap mRedCircle;
};
