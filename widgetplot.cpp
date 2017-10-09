#include "widgetplot.h"



WidgetPlot::WidgetPlot(QWidget *parent)
    :QWidget(parent)
{
    chart   = new QChart();
    chartView   = new QChartView(chart, this);
    chartView->setRenderHint(QPainter::Antialiasing);

    QHBoxLayout *pHBLayout = new QHBoxLayout(this);
    pHBLayout->addWidget(chartView);
    this->setLayout(pHBLayout);

    chart->createDefaultAxes();
    chart->setAnimationOptions(QChart::SeriesAnimations);
    chart->setAnimationDuration(3000);
}

void WidgetPlot::draw(const QMap<double,double> answer)
{
    if (!chart->series().isEmpty())
        chart->removeAllSeries();


    dependence = new QSplineSeries();
    dependence->setName("Зависимость скорости от времени падения");

    foreach(double key, answer.keys())
    {
       dependence->append(key,answer.value(key));
    }



    chart->addSeries(dependence);
    chart->createDefaultAxes();

}

