#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#define SIZE 2;

//Trainer class

class Trainer{
  private:
     Session * strn[SIZE];
     string trainerid[10];
     string trainerName[20];
     string trainerEmail[20];
     double salary[20];

  public:
    Trainer();
    Trainer(string ptrainerid,string ptrainerName[],string ptrainerEmail[],double psalary[]);
    void gettrainerDetails();
    void showtrainerDetails();
    void displayDetails(Session * strn1, Session * strn2 );
  
};

// Session class

class Session{
    private:
      string sessionName[10];
      string sessionid[10];

    public:
      Session();
      Session(string psessionName[],string psessionid);
      void displayDetails;

};

// MembershipPackage class

class MembershipPackage{
	private:
		string packageid[];
		string packageName[];
		float packagePrice;
		string sessiontime[];
		Session * package[SIZE];
		 
		 
    public:
    	MembershipPackage();
    	MembershipPackage(string ppackageid,string ppackageName[],float ppackgrPrice,string psessiontime[]);
    	void packageDetails();
    	void sessiontime();
    	
    	
};

// Payment class

class Payment{
	private:
		string paymentid[];
		string paymentMethod[];
		string customerid[];
		float amount;
		Item * ite[SIZE];
		 
    public:
    	Payment();
    	Payment(string ppaymentid,string ppaymentMethod[],string pcustomerid[],float pamount);
    	void paymentDetails(Item * tem);
    	void validate();
    	
    	
};

// Item class

class Item{
	 private:
	 	string name[];
	 	string itemid[];
	 	double price;
	 	int quantity;
	 	Payment * pay;
	 	
	 public:
	 	Item();
	 	Item(string pname[],string pitemid[],double pprice,int pquantity,Payment * ppay);
	 	void additem();
	 	void Quantity();
	 	void calcPrice();
};

//  Session class implementation


Session :: Session() {}
Session :: Session(string psessionName,string psessionid){
            sessionName=psessionName;
			sessionid=psessionid;
			}
		
void Session :: displayDetails(){}
~Sesiion(){
	cout<<"Deleting session"<< sessionid << endl;
}


// Trainer class  implementation

Trainer :: Trainer() {}
Trainer :: Trainer(string ptrainerid,string ptrainerName,string ptrainerEmail,double psalary){
	        trainerid=ptrainerid;
	        trainerName=ptrainerName;
	        treainerEmail=ptrainerEmail;
	        salary=psalary;
}

void Trainer :: displayDetails(Session * strn1,Session * strn2)
{
	strn[0]=strn1;
	strn2[1]=strn2;
}

void Trainer :: gettrainerDetails() {
	 cout<<"\nEnter the trainer ID: "  <<endl;
	 cin trainerid;
	 cout<<"\nEnter trainer Name: " <<endl;
	 cin<<trainerName;
	 cout<<"\nEnter trainer Email: "  <<endl;
	 cin<< trainerEmail;
	 cout<<"\n Enter trainer salary amount: " <<endl;
	 cin<<salary;
	 
void Trainer :: showtrainerDetails() {}

// MembershipPackage class implementation

MembershipPackage :: MembershipPackage() {}
MembershipPackage :: MembershipPackage(string ppackageid,string ppackageName,float ppackgrPrice,string psessiontime){

              packageid=ppackageid;
              packageName=ppackageName;
              packagePrice=ppackagePrice;
              sessiontime=psessiotime;
}
              
void MembershipPackage :: packageDetails (){}
void MembershipPackage :: sessiontime (){}

~MembershipPackage() {cout << "session over" <, ensl;
      for(int i=0; i<[SIZE]);	i++)
           delete session[i];
    cout << "End" << endl;
}

// Payment class implementation

Payment :: Payment() {}
Payment :: Payment(string ppaymentid,string ppaymentMethod,string pcustomerid,float pamount){

            paymentid=ppaymentid;
            paymentMethod=ppaymentMethod;
            customerid=pcustomerid;
            amount=pamount;
}
            
void Payment :: paymentDetails (){}
void Payment :: validate () {}

//Item class implementation

Item :: Item(){}
Item ::Item(string pname,string pitemid,double pprice,int pquantity){

           name=pname;
           itemid=pitemid;
           price=pprice;
           quantity=pquantity;
}
           
void Item :: additem(){}
void Item :: Quantity(){}
void Item :: calcPrice(){}

// main program

int main(){
	Trainer tr("T001","Henry","henry456@gmail.com","Rs.100 000.00");
	
	return 0;
}


           



              
    	








