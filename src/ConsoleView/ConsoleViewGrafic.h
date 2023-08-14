#ifndef SRC_CONSOLEVIEW_CONSOLEVIEWGRAFIC_H_
#define SRC_CONSOLEVIEW_CONSOLEVIEWGRAFIC_H_

#include <QVector>
#include <QWidget>

#include "ExampleController/ExampleControllerCalc.h"
#include "qcustomplot.h"

constexpr double step = 100000;

namespace Ui {
class Grafic;
}
namespace s21 {
class Grafic : public QWidget {
  Q_OBJECT

 public:
  explicit Grafic(s21::ExampleControllerCalc *controller,
                  QWidget *parent = nullptr);
  ~Grafic();

 private:
  Ui::Grafic *ui;
  double xBegin, xEnd, X;
  QVector<double> x, y;
  s21::ExampleControllerCalc *controller_;

 public slots:
  void slot(QString strochka_msg);
 private slots:
  void on_pushButton_clicked();
};
}  // namespace s21
#endif  // SRC_CONSOLEVIEW_CONSOLEVIEWGRAFIC_H_
