#ifndef SRC_EXAMPLEMODEL_EXAMPLEMODELCALC_H_
#define SRC_EXAMPLEMODEL_EXAMPLEMODELCALC_H_

#include <math.h>
#include <stdio.h>
#include <string.h>

#include <iostream>
#include <stack>

namespace s21 {

class ExampleModel {
 public:
  // Парсинг, Проверка на ошибки.
  char *s21_calc(char *i, char *j);
  
 private:
  std::stack<double> head_double_;
  std::stack<char> head_char_;

  // Проверка на унарный минус.
  bool unarny_minus_or_plus(char i);

  // Приоритет знаков.
  int Prior(char a);

  // Осуществление операций.
  void operation(std::stack<double> *double_double, std::stack<char> *char_char,
                 int flag_function);

  //Проверка на ошибки.
  int checking_error(char *i);



  
};
}  // namespace s21
#endif  // SRC_EXAMPLEMODEL_EXAMPLEMODELCALC_H_
