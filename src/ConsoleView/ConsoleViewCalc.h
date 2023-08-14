#ifndef SRC_CONSOLEVIEW_CONSOLEVIEWCALC_H_
#define SRC_CONSOLEVIEW_CONSOLEVIEWCALC_H_

#include <ConsoleView/ConsoleViewCredit.h>
#include <ConsoleView/ConsoleViewGrafic.h>
#include <ExampleModel/ExampleModelCalc.h>

#include <QMainWindow>
#include <QString>
#include <QtWidgets>
#include <cstring>

#include "ExampleController/ExampleControllerCalc.h"
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class consoleView;
}
QT_END_NAMESPACE

namespace s21 {

class consoleView : public QMainWindow {
  Q_OBJECT

 public:
  explicit consoleView(s21::ExampleControllerCalc *controller,
                       QWidget *parent = nullptr);
  ~consoleView();

 private slots:
  void digits_numbers();
  void on_pushButton_ac_clicked();
  void on_pushButton_c_2_clicked();
  void on_pushButton_c_clicked();
  void on_pushButton_rav_clicked();
  void on_pushButton_cred_clicked();

 private:
  Ui::consoleView *ui;
  s21::ExampleControllerCalc *controller_;
  s21::Grafic *grafic;
  s21::Credit *credit;
  
 signals:
  void signal(QString);
};

}  // namespace s21
#endif  // SRC_CONSOLEVIEW_CONSOLEVIEWCALC_H_
