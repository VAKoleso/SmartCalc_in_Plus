#include "ExampleModelCredit.h"

#include <cmath>
namespace s21 {

int ExampleModelCredit::LoanTermInMonths(int year, int month) {
  return year * 12 + month;
}

double ExampleModelCredit::RatePerMonth(double interest_rate) {
  return interest_rate / 100 / 12;
}

double ExampleModelCredit::CreditFormulaAnnuityOne(double credit_amount,
                                                   double rate_per_month,
                                                   int number_of_months) {
  return credit_amount *
         (rate_per_month +
          (rate_per_month / (pow((1 + rate_per_month), number_of_months) - 1)));
}

double ExampleModelCredit::TotalLoanAmount(double first_formula,
                                           int number_of_months) {
  return first_formula * number_of_months;
}

double ExampleModelCredit::Overpayment(double total_amount,
                                       double credit_amount) {
  return total_amount - credit_amount;
}
double ExampleModelCredit::EqualShare(double credit_amount,
                                      int number_of_months) {
  return credit_amount / number_of_months;
}

double ExampleModelCredit::CreditFormulaDifferentiatedOne(double credit_amount,
                                                          double rate_per_month,
                                                          double equal_share) {
  return credit_amount * rate_per_month + equal_share;
}

double ExampleModelCredit::CreditAmountDifferentiated(double overpayment,
                                                      double amount_credit) {
  return overpayment + amount_credit;
}

void ExampleModelCredit::OverpaymentAndBalance(
    int number_of_months, double *tmp_two, double *remainder,
    double monthly_rate, double *overpayment, double equal_share) {
  for (int i = number_of_months; i > 0; i--) {
    if (i == 1) {
      *tmp_two = *remainder * monthly_rate + equal_share;
    }
    *overpayment += *remainder * monthly_rate;
    *remainder -= equal_share;
  }
}
}  // namespace s21
