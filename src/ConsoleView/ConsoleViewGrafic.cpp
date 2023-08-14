#include "ConsoleViewGrafic.h"

#include <iostream>

#include "ui_ConsoleViewGrafic.h"

namespace s21 {

Grafic::Grafic(ExampleControllerCalc *controller, QWidget *parent)
    : QWidget(parent), ui(new Ui::Grafic), controller_(controller) {
  ui->setupUi(this);
}

Grafic::~Grafic() { delete ui; }

void Grafic::slot(QString strochka_msg) {
  ui->label->setText(strochka_msg);
  x.clear();
  y.clear();
  ui->widget->addGraph();
  ui->widget->graph(0)->setData(x, y);
  ui->widget->xAxis->setLabel("x");
  ui->widget->yAxis->setLabel("y");
  ui->widget->xAxis->setRange(0, 5);
  ui->widget->yAxis->setRange(0, 5);
  ui->widget->replot();
}

void Grafic::on_pushButton_clicked() {
  x.clear();
  y.clear();
  ui->widget->setInteraction(QCP::iRangeDrag, 1);
  ui->widget->setInteraction(QCP::iRangeZoom, 1);
  bool ok1, ok2;
  xBegin = ui->doubleSpin->text().toDouble(&ok1);
  xEnd = ui->doubleSpin_2->text().toDouble(&ok2);
  double h = (xEnd - xBegin) / step;
  if (ok1 && ok2 && xBegin < xEnd) {
    char double_y[256] = "\0";
    char *priemnyi;
    std::string tmp_string_y = ui->label->text().toUtf8().data();
    strcpy(double_y, tmp_string_y.c_str());

    for (X = xBegin; X <= xEnd; X += h) {
      char double_x[256] = "\0";
      snprintf(double_x, sizeof(double_x), "%.10f", X);
      x.push_back(X);
      setlocale(LC_NUMERIC, "C");
      double Y = strtod(controller_->GetResult(double_y, double_x), &priemnyi);

      y.push_back(Y);
    }
    ui->widget->addGraph();
    ui->widget->graph(0)->setData(x, y);
    ui->widget->xAxis->setLabel("x");
    ui->widget->yAxis->setLabel("y");
    ui->widget->xAxis->setRange(xBegin, xEnd);
    ui->widget->yAxis->setRange(xBegin / 10, xEnd / 10);
    ui->widget->replot();
  }
}
}  // namespace s21
