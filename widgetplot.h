#ifndef WIDGETPLOT_H
#define WIDGETPLOT_H

#include <QWidget>
#include <QChartView>
#include <QChart>
#include <QSplineSeries>
#include <QHBoxLayout>

#include "eulersmethod.h"

using namespace QtCharts;


class WidgetPlot:public QWidget
{
    Q_OBJECT
public:
    explicit WidgetPlot(QWidget *parent = nullptr);
    void draw(QMap<double,double> answer);
private:
    QChartView *chartView;
    QChart *chart;
    QSplineSeries *dependence;

};

#endif // WIDGETPLOT_H
