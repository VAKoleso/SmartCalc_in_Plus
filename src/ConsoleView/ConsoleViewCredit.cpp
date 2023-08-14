#include "ConsoleViewCredit.h"

#include <QDoubleValidator>
#include <QLineEdit>
#include <QMessageBox>
#include <QValidator>
#include <iostream>

#include "ui_ConsoleVievlCredit.h"

namespace s21 {
Credit::Credit(s21::ExampleControllerCalc *controller, QWidget *parent)
    : QWidget(parent), ui(new Ui::Credit), controller_(controller) {
  ui->setupUi(this);
  ui->lineEdit_summ->setValidator(new QDoubleValidator(0, 100, 2, this));
  ui->lineEdit_god->setValidator(new QDoubleValidator(0, 100, 0, this));
  ui->lineEdit_mes->setValidator(new QDoubleValidator(0, 100, 0, this));
  ui->lineEdit_staf->setValidator(new QDoubleValidator(0, 100, 2, this));
  ui->lineEdit_one->setEnabled(false);
  ui->lineEdit_two->setEnabled(false);
  ui->lineEdit_pere->setEnabled(false);
  ui->lineEdit_res->setEnabled(false);
}

Credit::~Credit() { delete ui; }

void Credit::on_pushButton_clicked() {
  bool ok1, ok2 = false, ok3, ok4;
  int number_of_months = 0;
  //  double interest_rate = ui->lineEdit_staf->text().toDouble(&ok2);
  double tmp_summ = ui->lineEdit_summ->text().toDouble(&ok1);
  int god = ui->lineEdit_god->text().toInt(&ok3);
  int mes = ui->lineEdit_mes->text().toInt(&ok4);
  std::string tmp_input_str = ui->lineEdit_staf->text().toStdString();
  char input_str[256] = "\0";
  strcpy(input_str, tmp_input_str.c_str());
  if (!ui->lineEdit_staf->text().isEmpty()) {
    ok2 = true;
  }
  if (ok1 && ok2 && (ok3 || ok4)) {
    int j = 0;
    while (input_str[j] != '\0') {
      if (input_str[j] == ',') {
        input_str[j] = '.';
      }
      j++;
    }
    double interest_rate = std::stod(input_str);
    if (ui->radioButton->isChecked()) {
      if (ui->lineEdit_god->text().isEmpty()) {
        god = 0;
      }
      if (ui->lineEdit_mes->text().isEmpty()) {
        mes = 0;
      }
      number_of_months = controller_->LoanTermInMonths(god, mes);

      double staf_v_mec = controller_->RatePerMonth(interest_rate);
      double tmp_one = controller_->CreditFormulaAnnuityOne(
          tmp_summ, staf_v_mec, number_of_months);
      double obchaya_symm =
          controller_->TotalLoanAmount(tmp_one, number_of_months);
      double pereplata = controller_->Overpayment(obchaya_symm, tmp_summ);

      QString one = QString::number(tmp_one, 'f', 2);
      ui->lineEdit_one->setText(one);
      ui->lineEdit_two->setText(one);
      QString tmp_pereplata = QString::number(pereplata, 'f', 2);
      ui->lineEdit_pere->setText(tmp_pereplata);
      QString tmp_obchaya = QString::number(obchaya_symm, 'f', 2);
      ui->lineEdit_res->setText(tmp_obchaya);
    } else if (ui->radioButton_2->isChecked()) {
      double tmp_summ = ui->lineEdit_summ->text().toDouble();

      if (ui->lineEdit_god->text().isEmpty()) {
        number_of_months = mes;
      } else {
        number_of_months = controller_->LoanTermInMonths(god, mes);
      }

      double rav_dolya = controller_->EqualShare(tmp_summ, number_of_months);
      double staf_v_mec = controller_->RatePerMonth(interest_rate);
      double ostatok = tmp_summ;
      double pereplata = 0.0;
      double tmp_one = controller_->CreditFormulaDifferentiatedOne(
          tmp_summ, staf_v_mec, rav_dolya);
      double tmp_two = 0;

      controller_->OverpaymentAndBalance(number_of_months, &tmp_two, &ostatok,
                                         staf_v_mec, &pereplata, rav_dolya);

      double obchaya_symm =
          controller_->CreditAmountDifferentiated(pereplata, tmp_summ);
      ui->lineEdit_one->setText(QString::number(tmp_one, 'f', 2));
      ui->lineEdit_two->setText(QString::number(tmp_two, 'f', 2));
      ui->lineEdit_pere->setText(QString::number(pereplata, 'f', 2));
      ui->lineEdit_res->setText(QString::number(obchaya_symm, 'f', 2));
    }

  } else {
    QMessageBox *box = new QMessageBox;
    box->setWindowTitle("ERROR!");
    box->setText("ERROR!!!");
    box->show();
  }
}
}  // namespace s21
