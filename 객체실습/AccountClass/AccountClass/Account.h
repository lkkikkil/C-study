#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double);
	virtual ~Account() = default;

	void setBalance(double);
	double getBalance();
	virtual void credit(double);
	virtual void debit(double);
	virtual double calculateInterest();

private:
	double balance;
};

#endif ACCOUNT_H
