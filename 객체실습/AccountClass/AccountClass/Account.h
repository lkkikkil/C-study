#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account(double);
	virtual ~Account() = default;

	void setBalance(double);
	double getBalance();
	void credit(double);
	void debit(double);

private:
	double balance;
};

#endif ACCOUNT_H
