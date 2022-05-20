#include<iostream>
#include<string>
 using namespace std;
//Dependancy(Trainer and Report)
class Trainer
{
    private:
  string trainerid;
  string trainerName;
  string trainerEmail;
  double salary;
 
   public:
Trainer();
 void getTrainerTrainerDetails(){
 	
 	string gettrainerid(){
	 
   return trainerid;
}
string gettrainerName(){


   return trainerName;
}
    string gettrainerEmail(){
	
   return trainerEmail;
}
   double getsalary(){
   
   return salary;
}
  
 void showTrainerDetails(){

count<<"trainerid="trainerid<<endl;
count<<"trainername="trainername<<endl;
count<<"trainerEmail="trainerEmail<<endl;
count<<"salary="salary<<endl;

}

class Report
{
private:
 string reportName;
 int reportNo;
 

public:
 Report(string reportName){
 
  reportName=TrainersReport;
}
void display()
{
count<<"reportname="reportname<<endl;
count<<"reprtNo=   "reportNo<<endl;
}
};


 
 //Dependeny(MembershipPackage and report)
 
 class MembershipPackage
 
 {
 	private:
 		string packageid;
 		string packageName;
 		float  packagePrice;
 		string sessiontime;
 		
 	public:
	     void packageDetails(){
	     	count<<"packageid="packageid<<endl;
            count<<"packagename="packagename<<endl;
            count<<"packagePrice="packagePrice<<endl;
            count<<"sessiontime="sessiontime<<endl;
	     	
		 }
		 
	  	
 };
 
 
 class Report
{
private:
 string reportName;
 int reportNo;
 

public:
 Report(string reportName){
 	reportName=MembershipPackagesReport;
 }

void display()
{
count<<"reportname="reportname<<endl;
count<<"reportNo=   "reportNo<<endl;
}
};
 
 
 
 //Aggregation(Trainer and MembershipPackage)
 class Trainer
{
    private:
  string trainerid;
  string trainerName;
  string trainerEmail;
  double salary;
 
   public:
Trainer();
 void getTrainerDetails(){
 	
 	string  gettrainerid(){
	 
   return trainerid;
}
   string  gettrainerName(){
   
   return trainerName;
}
    string gettrainerEmail(){
	
   return trainerEmail;
}
 double getsalary(){
 

   return salary;
}
  
 void showTrainerDetails(){

count<<"trainerid="trainerid<<endl;
count<<"trainername="trainername<<endl;
count<<"trainerEmail="trainerEmail<<endl;
count<<"salary="salary<<endl;

Trainer() {count<<"Deleting Trainer"<<Trainerid<<endl;
}


     

 class MembershipPackage
 
 {
 	private:
 		Trainer*trainer[2];
 		string packageid;
 		string packageName;
 		float  packagePrice;
 		string sessiontime;
 		
 	public:
 		MembershipPackage(){};
		 
 		void addTrainer(Trainer*trainer1,Trainer*trainer2)
 		{
 			trainer[0]=trainer1;
 			trainer[1]=trainer2;
		 }
 	
	     void packageDetails(){
	     	count<<"packageid="packageid<<endl;
            count<<"packagename="packagename<<endl;
            count<<"packagePrice="packagePrice<<endl;
            count<<"sessiontime="sessiontime<<endl;
	     	
		 }
		 
	  void displayMembershipPackage(){
		 	for(int i=0; i<SIZE;i++)
		 	trainer[i]->displayTrainer();
		 }
		 
		 int main(){
		 	 Trainer*t1= new Trainer ("T001","Kularathne");
		 	 Trainer*t2= new Trainer ("T002","Rathnayake");
		 	 
		 	 addTrainer(t1,t2);
		 	 delete t1;
		 	 delete t2;
		 	 
		 	 Trainer*t3= new Trainer ("T003","Ekanayake");
		 	 addTrainer(t3);
		 	 displayMembershipPackage();
		 	 
		 	 return 0;
		 }
		 
		 
		 
		 
		 	
		 	
			
	
	
	
 

