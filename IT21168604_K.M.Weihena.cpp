#include<iostream>
#include<conio.h>
#include<iomanip.h>
float totalamount;
class item
{
private:
	char name[25];
	int qty;
	float rate,amount;
public:
	void getdata()
	{
		cout<<endl<<"Enter the item name:";
		cin>>name;
		cout<<"\nEnter the rate:";
		cin>>rate;
		cout<<"Entet the quantity:";
		cin>>qty;
	}
	void printdata()
	{
		cout<<setw(12)<<name;
		cout<<setw(9)<<qty;
		cout<<setw(9)<<rate;
		amount=rate*qty;
		totalamount=amount+totalamount;
		cout<<setw(8)<<amount<<endl;
	}
};
void main()
{
	item shop[10];
	char ch='y';
	int n=0,i;
	clrscr();
	while (ch=='y'||ch=='y')
	{
		shop[n].getdata();
		n++;
		cout<<"do you want to countinue u\n"<<endl;
		cin>>ch
	}
	count<<"\t\t*********"<<endl;
	cout<<"\t\t shoping list"<<endl;
	cout<<"\t*************************"<<endl;
	cout<<name quantity-rate-amount\n";
		for(i=0;i<n;i++)
			shop[i].printdata();
	cout<<"\t------------------------------"<<endl;
	cout<<"\ttotal bill:"<<totalamount;
	getch();
}
return 0;


class feedback
{
private:
int feedbackId;
char user Name[20];
char feedback Messsage[300];
user*user1;
public:
feedback();
feedback(int fbIp,char user Name[],char desc[]);
void displayfeedback();
};
feedback::feedback(){
feedbackId=0;
strcpy(userName,"");
strcpy(feedback Message,"");
}
feedback::feedback(intfbId,char user Name[],char desc[]){
feedbackId=fbid;
strcpy(user Name);
strcpy(feedback Message,desc);
}
void feedback::displayfeedback(){}
return 0;
}
