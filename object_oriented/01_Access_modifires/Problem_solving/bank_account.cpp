// Bank Account Security:
// Scenario: You are designing a banking system. You need to ensure that the balance of a bank account can only be accessed and modified through specific methods to prevent unauthorized changes.
// Question: How would you use access modifiers to protect the account balance in the BankAccount class, ensuring that only methods within the class can modify the balance, but other classes can read it?

#include <iostream>
#include <string>
using namespace std;

class bank_account
{
private:
   double Balance = 0;

public:
   double get_balance() { return Balance; }
   void set_balance(double amount) { Balance = amount; }
   void deposite_balance(double amount) { Balance += amount; }
   bool withdraw(double amount)
   {
      if (amount > Balance)
      {
         return false;
      }
      else
      {
         Balance -= amount;
         return true;
      }
   }
};

int main()
{
   double iniAmount, depAmount, witAmount;

   bank_account user;
   cout << "To Open Your account, Enter the initial Balance : ";
   cin >> iniAmount;
   user.set_balance(iniAmount);
   cout << "My current balance is : " << user.get_balance() << "\n";
   cout << "Enter the amount that will be deposite : ";
   cin >> depAmount;
   user.deposite_balance(depAmount);
   cout << "current Balance is : " << user.get_balance() << "\n";
   cout << "Enter the amount that will be withdraw : \n";
   cin >> witAmount;
   user.withdraw(witAmount);
   cout << "current Balance is : " << user.get_balance() << "\n";

   return 0;
}