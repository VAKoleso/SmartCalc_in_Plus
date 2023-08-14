#ifndef SRC_EXAMPLEMODEL_EXAMPLEMODELCREDIT_H_
#define SRC_EXAMPLEMODEL_EXAMPLEMODELCREDIT_H_

namespace s21 {

class ExampleModelCredit {
 public:
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
};
}  // namespace s21
#endif  // SRC_EXAMPLEMODEL_EXAMPLEMODELCREDIT_H_
