#include<iostream>
using namespace std;

//Payment class

class Payment{
 private:
 int Payment_ID;
 string cus_ID;
 float amount;

 public:
 Payment();
 Payment (int Pay_ID,string c_ID,float Amount);
 void Paymentdetailes();
 void validate();
 };
 
	
Payment :: Payment(){}

Payment :: Payment(int Pay_ID,string c_ID,float Amount) {
 int Payment_ID = Pay_ID;
 string Cus_ID = c_ID;
 float amount = Amount;
}
void Payment:: Paymentdetailes() { }
void Payment:: validate () { }


 //MembershipPackage class
class MembershipPackage{

 private:
	string package_id;
	char package_Name;
	float package_Price;
	string session_Time;
	
 public:
 	MembershipPackage();
 	MembershipPackage(string p_id,char p_name,float p_price,string s_time);
 	void MembershipPackagedetailes();
};

MembershipPackage :: MembershipPackage(string p_id,char p_name,float p_price,string s_time){
	string package_id = p_id;
	char package_Name = p_name;
	float package_Price = p_price;
	string session_Time = s_time;
}
void MembershipPackage :: MembershipPackagedetailes(){
}	

//Item class
class Item{
	 private:
	 	string name;
	 	string itemid;
	 	double price;
	 	int quantity;
	 	Payment * pay;
	 	
	 public:
	 	Item();
	 	Item(string pname,string pitemid,double pprice,int pquantity);
	 	void additem();
	 	void Quantity();
	 	void calcPrice();
};

Item :: Item(){}
Item :: Item(string pname,string pitemid,double pprice,int pquantity){

           name=pname;
           itemid=pitemid;
           price=pprice;
           quantity=pquantity;
}
           
void Item :: additem(){}
void Item :: Quantity(){}
void Item :: calcPrice(){}


//report class
class report{
 private:
	string reportName;
	int reportNo;
	
 public:
 	report();
 	report (string r_name,int r_no);
 	void displayreport();
};

report :: report(string r_name,int r_no){
	string reportName = r_name;
	int reportNO= r_no;

}
void report :: displayreport(){
}	

//Cart class
class cart{
	private:
		int cardID;
		char product;
		double price;
		double total;
		
	public:
		cart();
		cart (int cartID,char p,double pprice,double t);
		void displaytotalprice();
};

cart :: cart(int c_id,char p,double pprice,double t){
		int cardID= c_id;
		char product= p;
		double price= pprice;
		double total= t;
}
void cart :: displaytotalprice(){
}

int main(){
Payment *Pay1,*Pay2;
Pay1= new Payment;
Pay2= new Payment;

delete Pay1,Pay2;

return 0;
}


