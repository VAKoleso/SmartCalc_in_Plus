#include <QApplication>

#include "ConsoleView/ConsoleViewCalc.h"
#include "ExampleModel/ExampleModelCalc.h"

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  s21::ExampleModel calc;
  s21::ExampleModelCredit credit;
  s21::ExampleControllerCalc controller(&calc, &credit);
  s21::consoleView view_calc(&controller);
  view_calc.show();
  return a.exec();
}
