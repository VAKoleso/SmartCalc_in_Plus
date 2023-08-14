#ifndef SRC_EXAMPLECONTROLLER_EXAMPLECONTROLLERCALC_H_
#define SRC_EXAMPLECONTROLLER_EXAMPLECONTROLLERCALC_H_
#include "ExampleModel/ExampleModelCalc.h"
#include "ExampleModel/ExampleModelCredit.h"
namespace s21 {

class ExampleControllerCalc {
 public:
  ExampleControllerCalc(s21::ExampleModel *calc,
                        s21::ExampleModelCredit *credit)
      : calc_(calc), credit_(credit) {}
  ~ExampleControllerCalc() {}
  char *GetResult(char *str, char *x);
  int LoanTermInMonths(int year, int month);
  double RatePerMonth(double interest_rate);
  double CreditFormulaAnnuityOne(double credit_amount, double rate_per_month,
                                 int number_of_months);
  double TotalLoanAmount(double first_formula, int number_of_months);
  double Overpayment(double total_amount, double credit_amount);
  double EqualShare(double credit_amount, int number_of_months);
  double CreditFormulaDifferentiatedOne(double credit_amount,
                                        double rate_per_month,
                                        double equal_share);
  double CreditAmountDifferentiated(double overpayment, double amount_credit);
  void OverpaymentAndBalance(int number_of_months, double *tmp_two,
                             double *remainder, double monthly_rate,
                             double *overpayment, double equal_share);

 private:
  s21::ExampleModel *calc_;
  s21::ExampleModelCredit *credit_;
};
}  // namespace s21
#endif  // SRC_EXAMPLECONTROLLER_EXAMPLECONTROLLERCALC_H_
