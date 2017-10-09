#ifndef EULERSMETHOD_H
#define EULERSMETHOD_H
#include <QObject>
#include <QMap>

class EulersMethod : public QObject
{
Q_OBJECT
private:
    double            h, a , b ;
    const float       g = 9.81,  //ускорение свободного падения
                      k = 0.083; //коеффициент лобового сопротивления
    double            S,   //площадь сечения тела
                      r,   // радиус парашюта
                      m;   //масса
    QMap<double,double> solve;//массив для хранения состояния модели в отдельныe моменты времени
public:
    EulersMethod();
    void differentiation();
    QMap<double,double> getSolve();
    void setBeginConditions(double, double, double, double);
    void setModelParameters(double, double);
};

#endif // EULERSMETHOD_H
