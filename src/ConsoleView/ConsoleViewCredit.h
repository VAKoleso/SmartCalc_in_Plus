#ifndef SRC_CONSOLEVIEW_CONSOLEVIEWCREDIT_H_
#define SRC_CONSOLEVIEW_CONSOLEVIEWCREDIT_H_
#include <QWidget>

#include "ExampleController/ExampleControllerCalc.h"

namespace Ui {
class Credit;
}
namespace s21 {

class Credit : public QWidget {
  Q_OBJECT

 public:
  explicit Credit(s21::ExampleControllerCalc *controller,
                  QWidget *parent = nullptr);
  ~Credit();

 private slots:
  void on_pushButton_clicked();

 private:
  Ui::Credit *ui;
  s21::ExampleControllerCalc *controller_;
};
}  // namespace s21
#endif  // SRC_CONSOLEVIEW_CONSOLEVIEWCREDIT_H_
