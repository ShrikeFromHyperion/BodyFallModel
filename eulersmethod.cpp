#include "eulersmethod.h"
#include<QDebug>

EulersMethod::EulersMethod()
{
 h = 0; a = 0, b = 0, m = 0, S = 0, r = 0;
 solve.clear();
}

void EulersMethod::setBeginConditions(double initSpeed, double initTime, double endTime, double step)
{
   a = initTime;
   b = endTime;
   h = step;
   solve[a] = initSpeed;
}

void EulersMethod::setModelParameters(double radius, double mass)
{
    m = mass;
    r = radius;
    S = r*r*3.14159265;
}

void EulersMethod::differentiation()
{
    int stepCount = (b / h) + 1;
    double currentTime = a + h;



    double V, V_prev;
    V_prev = solve[a];

    for(int i = 0;i < stepCount;i++)
    {
        V = V_prev + h*(g - (k*S*V_prev*V_prev)/m);

        solve[currentTime] = V;

        V_prev = V;
        currentTime += h;
    }

}

QMap<double, double> EulersMethod::getSolve()
{
    return solve;
}
