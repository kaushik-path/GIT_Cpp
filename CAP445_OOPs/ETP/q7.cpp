// 07 Create a C++ class BankAccount with virtual functions deposit() and withdraw(). Derive two
// classes SavingsAccount and CheckingAccount from BankAccount and implement the deposit
// and withdraw operations With different rules and transaction fees. Create an array of
// BankAccount pointers and perform deposit and withdraw operations on various account types to
// demonstrate polymorphism.
#include <iostream>
#include <vector>

class BankAccount {
protected:
    double balance;

public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    virtual void deposit(double amount) {
        balance += amount;
        std::cout << "Deposited $" << amount << ". New balance: $" << balance << std::endl;
    }

    virtual void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << "Withdrawn $" << amount << ". New balance: $" << balance << std::endl;
        } else {
            std::cout << "Insufficient funds. Withdrawal canceled." << std::endl;
        }
    }
};

class SavingsAccount : public BankAccount {
private:
    double interestRate;

public:
    SavingsAccount(double initialBalance, double interestRate)
        : BankAccount(initialBalance), interestRate(interestRate) {}

    void deposit(double amount) override {
        BankAccount::deposit(amount);
        applyInterest();
    }

    void applyInterest() {
        balance += balance * interestRate;
        std::cout << "Interest applied. New balance: $" << balance << std::endl;
    }
};

class CheckingAccount : public BankAccount {
private:
    double transactionFee;

public:
    CheckingAccount(double initialBalance, double fee)
        : BankAccount(initialBalance), transactionFee(fee) {}

    void withdraw(double amount) override {
        BankAccount::withdraw(amount);
        deductTransactionFee();
    }

    void deductTransactionFee() {
        balance -= transactionFee;
        std::cout << "Transaction fee applied. New balance: $" << balance << std::endl;
    }
};

int main() {
    // Create an array of BankAccount pointers
    std::vector<BankAccount*> accounts;

    // Create instances of SavingsAccount and CheckingAccount
    SavingsAccount savingsAccount(1000.0, 0.05);
    CheckingAccount checkingAccount(500.0, 1.0);

    // Add the instances to the array
    accounts.push_back(&savingsAccount);
    accounts.push_back(&checkingAccount);

    // Perform deposit and withdraw operations on various account types
    for (BankAccount* account : accounts) {
        account->deposit(200.0);
        account->withdraw(50.0);
        std::cout << std::endl;
    }

    return 0;
}
