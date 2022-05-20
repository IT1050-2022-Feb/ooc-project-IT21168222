//These codes are written with a focus on one object
#include <iostream>
#include <string>
using namespace std;

class UserAccount {
private:
	string username;
	string password;
	string loginStatus;
public:
	UserAccount() {};
	UserAccount(string uName) {
		username = uName;
	}
	void Display() {
		cout << "User Name " << username << endl;
	}
	~UserAccount() {
		cout << "Deleting user " << username << endl;
	}
};

class MembershipPackage {
private:
	string membershipId;
	string packageName;
	float packagePrice;
	
	
public:
	MembershipPackage() {};
	MembershipPackage(string Id, string name, float price) {
		membershipId = Id;
		packageName = name;
		packagePrice = price;
	}
	void displayMembershipPackage() {
		cout << "Membersip Id : " << membershipId << endl;
		//cout << "Membersip Name : " << packageName << endl;
		//cout << "Membersip Price : " << packagePrice << endl;
	}
	~MembershipPackage() {
		cout << "Deleting Membersip " << membershipId << endl;
	}
};

class Customer {
private:
	string customerId;
	string customerName;
	int age;
	string gender;
	string email;
	UserAccount *account;

public:
	Customer(string cusId, string name, int cusAge, string cusGender, string pemail, string uName) {
		account = new UserAccount(uName);
		customerId = cusId;
		customerName = name;
		age = cusAge;
		email = pemail;
	}
	void DisplayUserAccounts() {
		//for (int r = 0; r < SIZE; r++)
			account->Display();
	}
	string getCustomer() {
		return customerName;
		
	}
	void displayCustomer() {
		cout << "Customer ID : " << customerId << endl;
	}
	
	~Customer() {
		cout << "Customer deleted " << endl;
		//for (int r = 0; r < SIZE; r++)
			delete account;
		cout << "Everthing is deleted" << endl;
	}
};

class Subscription
{
private:
	Customer *cusSub;
	MembershipPackage *pkg;
	string date;
public:
	Subscription(Customer *pcusSub, MembershipPackage *ppkg, string pdate)
	{
		cusSub = pcusSub;
		pkg = ppkg;
		date = pdate;
	}
	void displaySubscription()
	{
		cusSub->displayCustomer();
		pkg->displayMembershipPackage();
		cout << "Date =" << date << endl;
	}
	~Subscription() {
		cout << "\nDeleting Subscription " << endl;
	}
};

class Report {

private:
	string name;
public:
	void getReport(Customer *c)
	{
		name = c->getCustomer();
	}
	void display()
	{
		cout << "Customer name = " << name << endl;
	}
};

int main()
{
	// User Account
	Customer *cus;
	cus = new Customer("C0001", "Kamal", 25, "Male", "123@gmail.com", "U0001");
	cus->DisplayUserAccounts();
	//delete cus;
	cout << "***************\n" << endl;

	// subscription
	MembershipPackage *P = new MembershipPackage("P001", "Standard", 10000.00);
	Subscription subs1(cus, P, "20/05/2022");
	subs1.displaySubscription();
	cout << "***************\n" << endl;

	// report
	Report *R = new Report();
	R->getReport(cus);
	R->display();
	cout << "***************\n" << endl;

	return 0;
}
