#include "ExampleControllerCalc.h"
namespace s21 {

char *ExampleControllerCalc::GetResult(char *str, char *x) {
  return calc_->s21_calc(str, x);
}

int ExampleControllerCalc::LoanTermInMonths(int year, int month) {
  return credit_->LoanTermInMonths(year, month);
}

double ExampleControllerCalc::RatePerMonth(double interest_rate) {
  return credit_->RatePerMonth(interest_rate);
}

double ExampleControllerCalc::CreditFormulaAnnuityOne(double credit_amount,
                                                      double rate_per_month,
                                                      int number_of_months) {
  return credit_->CreditFormulaAnnuityOne(credit_amount, rate_per_month,
                                          number_of_months);
}

double ExampleControllerCalc::TotalLoanAmount(double first_formula,
                                              int number_of_months) {
  return credit_->TotalLoanAmount(first_formula, number_of_months);
}

double ExampleControllerCalc::Overpayment(double total_amount,
                                          double credit_amount) {
  return credit_->Overpayment(total_amount, credit_amount);
}

double ExampleControllerCalc::EqualShare(double credit_amount,
                                         int number_of_months) {
  return credit_->EqualShare(credit_amount, number_of_months);
}

double ExampleControllerCalc::CreditFormulaDifferentiatedOne(
    double credit_amount, double rate_per_month, double equal_share) {
  return credit_->CreditFormulaDifferentiatedOne(credit_amount, rate_per_month,
                                                 equal_share);
}

double ExampleControllerCalc::CreditAmountDifferentiated(double overpayment,
                                                         double amount_credit) {
  return credit_->CreditAmountDifferentiated(overpayment, amount_credit);
}

void ExampleControllerCalc::OverpaymentAndBalance(
    int number_of_months, double *tmp_two, double *remainder,
    double monthly_rate, double *overpayment, double equal_share) {
  return credit_->OverpaymentAndBalance(number_of_months, tmp_two, remainder,
                                        monthly_rate, overpayment, equal_share);
}

}  // namespace s21
