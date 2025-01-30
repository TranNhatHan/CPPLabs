#include "labs.hpp"

int main() {
  // lab_one();
  // lab_two();
  // lab_three();

  return 0;
}

// #include <iostream>
// #include <iomanip>
// #include <string>
// using namespace std;
// const int MAXACCOUNTS =8;

// struct Account {
//   int account_number;
//   double balance;
//   int days_since_debited;
// };

// double CalcInterest(Account acc) {
//   return (acc.days_since_debited > 30 || acc.balance > 100000) ? 0.06 : 0.03;
// }

// int main()
// {
//     int AccountNumber[MAXACCOUNTS] = {1001, 7940, 4382, 2651, 3020, 7168, 6245, 9342};
//     double Balance[MAXACCOUNTS] = {4254.40, 27006.25, 123.50, 85326.92, 657.0, 7423.34, 4.99, 107864.44};
//     int DaysSinceDebited[MAXACCOUNTS] = {20, 35, 2, 14, 5, 360, 1, 45};
//     //add your code here
//     double interest_rate;
//     cout << setw(10) << left << "Acct No,";
//     cout << setw(15) << left << "Balance";
//     cout << "Interest Paid\n";
//     for (int i = 0; i<MAXACCOUNTS; i++) {
//       cout << setw(10) << left << setprecision(4) << fixed << AccountNumber[i];
//       cout << setw(15) << left << setprecision(4) << fixed << Balance[i];
//       interest_rate = (DaysSinceDebited[i] > 30 || Balance[i] > 10000) ? 0.06 : 0.03;
//       cout << setprecision(4) << fixed << interest_rate*Balance[i] << endl;
//     }
//     Account accounts[MAXACCOUNTS];
//     for (int i = 0; i<MAXACCOUNTS; i++) {
//       accounts[i].account_number = AccountNumber[i];
//       accounts[i].balance = Balance[i];
//       accounts[i].days_since_debited = DaysSinceDebited[i];
//     }
//     cout << setw(10) << left << "Acct No,";
//     cout << setw(15) << left << "Balance";
//     cout << "Interest Paid\n";
//     for (auto acc: accounts) {
//       cout << setw(10) << left << setprecision(4) << fixed << acc.account_number;
//       cout << setw(15) << left << setprecision(4) << fixed << acc.balance;
//       cout << setprecision(4) << fixed << CalcInterest(acc)*acc.balance << endl;
//     }
//     return 0;
// }
