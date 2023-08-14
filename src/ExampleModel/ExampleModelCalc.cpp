#include "ExampleModelCalc.h"

namespace s21 {

bool ExampleModel::unarny_minus_or_plus(char i) {
  return (!i || i == '(' || i == '+' || i == '-' || i == '*' || i == '/' ||
          i == '^' || i == '%');
}

int ExampleModel::Prior(char a) {
  int tmp = 0;
  switch (a) {
    case '1':  // cos
    case '2':  // sin
    case '3':  // tan
    case '4':  // acos
    case '5':  // asin
    case '6':  // atan
    case '7':  // sqrt
    case '8':  // ln
    case '9':  // log
    case 'a':  // -cos
    case 'b':  // -sin
    case 'c':  // -tan
    case 'd':  // -acos
    case 'e':  // -asin
    case 'f':  // -atan
    case 'g':  // -sqrt
    case 'h':  // -ln
    case 'i':  // -log
    case '^':
      tmp = 4;
      break;
    case '*':
    case '/':
    case '%':
      tmp = 3;
      break;
    case '-':
    case '+':
      tmp = 2;
      break;
    case '(':
      tmp = 1;
      break;
  }
  return tmp;
}

void ExampleModel::operation(std::stack<double> *double_double,
                             std::stack<char> *char_char, int flag_function) {
  double one = 0;
  char func_or_operator = char_char->top();
  char_char->pop();
  double two = double_double->top();
  double_double->pop();
  if (flag_function == 0) {
    one = double_double->top();
    double_double->pop();
  }
  double result;
  switch (func_or_operator) {
    case '+':
      result = one + two;
      break;
    case '-':
      result = one - two;
      break;
    case '*':
      result = one * two;
      break;
    case '/':
      result = one / two;
      break;
    case '^':
      result = pow(one, two);
      break;
    case '%':
      result = fmod(one, two);
      break;
    case '1':
      result = cos(two);
      break;
    case '2':
      result = sin(two);
      break;
    case '3':
      result = tan(two);
      break;
    case '4':
      result = acos(two);
      break;
    case '5':
      result = asin(two);
      break;
    case '6':
      result = atan(two);
      break;
    case '7':
      result = sqrt(two);
      break;
    case '8':
      result = log(two);
      break;
    case '9':
      result = log10(two);
      break;
    case 'a':
      result = cos(two) * (-1);
      break;
    case 'b':
      result = sin(two) * (-1);
      break;
    case 'c':
      result = tan(two) * (-1);
      break;
    case 'd':
      result = acos(two) * (-1);
      break;
    case 'e':
      result = asin(two) * (-1);
      break;
    case 'f':
      result = atan(two) * (-1);
      break;
    case 'g':
      result = sqrt(two) * (-1);
      break;
    case 'h':
      result = log(two) * (-1);
      break;
    case 'i':
      result = log10(two) * (-1);
      break;
  }
  double_double->push(result);
}

char *ExampleModel::s21_calc(char *i, char *j) {
  if (checking_error(i)) {
    static char error[6] = "error";
    return error;
  }

  static char result[256];
  char *priemnii;
  int k = 0, flag_function = 0;
  int sign = 0;

  while (i[k] != '\0') {
    char tmp_tmp[256] = "\0";
    if ((i[k] == '-' || i[k] == '+') && unarny_minus_or_plus(i[k - 1])) {
      strncat(tmp_tmp, i + k, 1);
      k++;
    }
    if ((i[k] >= '0' && i[k] <= '9') || i[k] == '.') {
      while ((i[k] >= '0' && i[k] <= '9') || i[k] == '.') {
        strncat(tmp_tmp, i + k, 1);
        k++;
      }
      double tmp1 = strtod(tmp_tmp, &priemnii);
      head_double_.push(tmp1);
      k--;
    } else if (i[k] == '+' || i[k] == '-' || i[k] == '*' || i[k] == '/' ||
               i[k] == '%' || i[k] == '^') {
      while (!head_char_.empty() && Prior(i[k]) <= Prior(head_char_.top()) &&
             i[k] != '^') {
        operation(&head_double_, &head_char_, flag_function);
      }
      head_char_.push(i[k]);

    } else if (i[k] == '(') {
      head_char_.push(i[k]);
    } else if (i[k] == ')') {
      while (head_char_.top() != '(') {
        operation(&head_double_, &head_char_, flag_function);
      }
      head_char_.pop();
      if ((!head_char_.empty() && head_char_.top() >= '1' &&
           head_char_.top() <= '9') ||
          (!head_char_.empty() && head_char_.top() >= 'a' &&
           head_char_.top() <= 'i')) {
        flag_function = 1;
        operation(&head_double_, &head_char_, flag_function);
        flag_function = 0;
      }
    } else if (i[k] == 'c' || i[k] == 's' || i[k] == 't' || i[k] == 'a' ||
               i[k] == 'l') {
      if (i[k - 1] == '-' && unarny_minus_or_plus(i[k - 2])) {
        sign = 1;
      }
      if (i[k] == 'c' && i[k + 1] == 'o' && i[k + 2] == 's') {
        if (sign == 1) {
          head_char_.push('a');
        } else {
          head_char_.push('1');
        }
        k += 2;
      } else if (i[k] == 's' && i[k + 1] == 'i' && i[k + 2] == 'n') {
        if (sign == 1) {
          head_char_.push('b');
        } else {
          head_char_.push('2');
        }
        k += 2;
      } else if (i[k] == 't' && i[k + 1] == 'a' && i[k + 2] == 'n') {
        if (sign == 1) {
          head_char_.push('c');
        } else {
          head_char_.push('3');
        }
        k += 2;
      } else if (i[k] == 'a' && i[k + 1] == 'c' && i[k + 2] == 'o' &&
                 i[k + 3] == 's') {
        if (sign == 1) {
          head_char_.push('d');
        } else {
          head_char_.push('4');
        }
        k += 3;
      } else if (i[k] == 'a' && i[k + 1] == 's' && i[k + 2] == 'i' &&
                 i[k + 3] == 'n') {
        k += 3;
        if (sign == 1) {
          head_char_.push('e');
        } else {
          head_char_.push('5');
        }
      } else if (i[k] == 'a' && i[k + 1] == 't' && i[k + 2] == 'a' &&
                 i[k + 3] == 'n') {
        k += 3;
        if (sign == 1) {
          head_char_.push('f');
        } else {
          head_char_.push('6');
        }
      } else if (i[k] == 's' && i[k + 1] == 'q' && i[k + 2] == 'r' &&
                 i[k + 3] == 't') {
        if (sign == 1) {
          head_char_.push('g');
        } else {
          head_char_.push('7');
        }
        k += 3;
      } else if (i[k] == 'l' && i[k + 1] == 'n') {
        if (sign == 1) {
          head_char_.push('h');
        } else {
          head_char_.push('8');
        }
        k += 1;
      } else if (i[k] == 'l' && i[k + 1] == 'o' && i[k + 2] == 'g') {
        if (sign == 1) {
          head_char_.push('i');
        } else {
          head_char_.push('9');
        }
        k += 2;
      } else {
      }
    } else if (i[k] == 'x') {
      double tmp = strtod(j, &priemnii);
      if (i[k - 1] == '-' && unarny_minus_or_plus(i[k - 2])) {
        tmp *= -1;
      }
      head_double_.push(tmp);
    }
    sign = 0;
    k++;
  }
  result[0] = '\0';
  while (!head_char_.empty()) {
    operation(&head_double_, &head_char_, flag_function);
  }
  snprintf(result, sizeof(result), "%.8f", head_double_.top());
  head_double_.pop();
  return result;
}

int ExampleModel::checking_error(char *i) {
  bool flag_unary = false;
  bool flag_error = 0;
  int parenthesis_equality = 0;
  int k = 0;
  while (i[k] != '\0') {
    if ((i[k] == '-' || i[k] == '+') && unarny_minus_or_plus(i[k - 1]) &&
        flag_unary == false) {
      flag_unary = true;
    } else if ((i[k] >= '0' && i[k] <= '9') || i[k] == '.') {
      int dot = 0;
      while (((i[k] >= '0' && i[k] <= '9') || i[k] == '.') && dot < 2) {
        if (i[k] == '.') {
          dot++;
        }
        k++;
      }
      if (dot > 1) {
        flag_error = 1;
        break;
      }
      flag_unary = false;
      k--;
    } else if (i[k] == '+' || i[k] == '-' || i[k] == '*' || i[k] == '/' ||
               i[k] == '%' || i[k] == '^') {
      if (i[k - 1] == '+' || i[k - 1] == '-' || i[k - 1] == '*' ||
          i[k - 1] == '/' || i[k - 1] == '%' || i[k - 1] == '^' ||
          i[k + 1] == '\0' || (i[k + 1] == ')' && i[k - 1] == '(') || k == 0) {
        flag_error = 1;
        break;
      }
      flag_unary = false;
    } else if (i[k] == '(') {
      parenthesis_equality++;
      if ((i[k - 1] >= '0' && i[k - 1] <= '9') || i[k - 1] == 'x') {
        flag_error = 1;
        break;
      }
      flag_unary = false;
    } else if (i[k] == ')') {
      parenthesis_equality--;
      if (i[k + 1] != '+' && i[k + 1] != '-' && i[k + 1] != '*' &&
          i[k + 1] != '/' && i[k + 1] != '%' && i[k + 1] != '^' &&
          i[k + 1] != '\0' && i[k + 1] != ')') {
        flag_error = 1;
        break;
      }

      if (parenthesis_equality < 0) {
        flag_error = 1;
        break;
      }
      flag_unary = false;
    } else if (!head_char_.empty()) {
      flag_error = 1;
    } else if (i[k] == 'x') {
      if ((i[k - 1] >= '0' && i[k - 1] <= '9') ||
          (i[k + 1] >= '0' && i[k + 1] <= '9') || i[k + 1] == 'x') {
        flag_error = 1;
        break;
      }
      flag_unary = false;
    } else if (i[k] == 'c' || i[k] == 's' || i[k] == 't' || i[k] == 'a' ||
               i[k] == 'l') {
      if (((i[k - 1] && (i[k - 1] >= '0' && i[k - 1] <= '9')) ||
           i[k - 1] == 'x')) {
        flag_error = 1;
        break;
      }
      flag_unary = false;
    } else {
      flag_unary = false;
    }

    k++;
  }
  if (parenthesis_equality != 0) {
    flag_error = 1;
  }
  return flag_error;
}
}  // namespace s21
