#include<iostream>
using namespace std;
int main(){
	cout<<"<<<<<<<< Welcome to Online Petroleum Services >>>>>>>>"<<endl;
	for(int i = 0; i<=5; i++){
		cout<<"..                                                  .."<<endl;
	}
	cout<<endl;
	cout<<"|-----------------------Our Vision-------------------|"<<endl;
	cout<<"The customer is the first andd preferred choice."<<endl;
	cout<<endl;
	cout<<"|-----------------------Our Mission------------------|"<<endl;
	cout<<"To contribute towards making our country a better \nplace to live in by creating and maintaining an efficient,\nsafe and sustainable environment and ensuring that quality \noil products are supplied to customers across Pakistan"<<endl;
	for(int j = 0; j<=5; j++){
		cout<<"..                                                   .."<<endl;
	}
	cout<<"|-----------------Create Your Profile----------------|"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	string name;
	int password;
	cout<<"Enter Your Name : ";
	cin>>name;
	cout<<"Enter Your Password : ";
	cin>>password;
	cout<<"Your Profile has been created!"<<endl;
	cout<<"|-----------------Login Your Profile----------------|"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<endl;
	string ename;
	int epassword;
	cout<<"Enter Your Name : ";
	cin>>ename;
	if(ename == name){
		cout<<"Enter Your Password : ";
		cin>>epassword;
		if(epassword==password){
			cout<<"Welcome Mr. "<<name<<endl;
			cout<<endl;
			cout<<endl;
			int sel;
			cout<<"1. Visit Petrol Companies!"<<endl;
			cout<<"2. See Pettrol Prices!"<<endl;
			cout<<"3. Book the Petrol!"<<endl;
			cout<<"Enter the desired choice : ";
			cin>>sel;
			switch(sel){
				case 1: 
					cout<<"1. PSO Pakistan"<<endl;
					cout<<"2. Shell Pakistan"<<endl;
					cout<<"3. PPL Pakistan"<<endl;
					cout<<"Enter Choice : ";
					int cho;
					cin>>cho;
					if(cho==1){ 
						cout<<"Welcome Mr."<<name<<" In PSO Pakistan"<<endl;
					int ch;
					cout<<"1. In Litres."<<endl;
					cout<<"2. In Gallons."<<endl;
					cout<<"3. In Barrels."<<endl;
					cin>>ch;
						if(ch==1){
						int amount, litres;
						string address, number;
						cout<<"How many litres : ";
						cin>>litres;
						amount = litres*140;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;
					}else
					if(ch==2){
						int amount, gallon;
						string address, number;
						cout<<"How many Gallons : ";
						cin>>gallon;
						amount = gallon*530;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;
					}else
					if(ch==3){
						int barrels;
						string address, number;
						cout<<"How many Barrels : ";
						cin>>barrels;
						float amount = barrels*22258.18;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;	
				}
					}else
					if (cho==2){
						cout<<"Welcome Mr."<<name<<" In Shell Pakistan"<<endl;
					int ch;
					cout<<"1. In Litres."<<endl;
					cout<<"2. In Gallons."<<endl;
					cout<<"3. In Barrels."<<endl;
					cin>>ch;
						if(ch==1){
						int amount, litres;
						string address, number;
						cout<<"How many litres : ";
						cin>>litres;
						amount = litres*140;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;
					}else
					if(ch==2){
						int amount, gallon;
						string address, number;
						cout<<"How many Gallons : ";
						cin>>gallon;
						amount = gallon*530;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;
					}else
					if(ch==3){
						int barrels;
						string address, number;
						cout<<"How many Barrels : ";
						cin>>barrels;
						float amount = barrels*22258.18;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;	
					}
					}else
					if(cho==3){
						cout<<"Welcome Mr."<<name<<"In PPL Pakistan "<<endl;
					int ch;
					cout<<"1. In Litres."<<endl;
					cout<<"2. In Gallons."<<endl;
					cout<<"3. In Barrels."<<endl;
					cin>>ch;
						if(ch==1){
						int amount, litres;
						string address, number;
						cout<<"How many litres : ";
						cin>>litres;
						amount = litres*140;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;
					}else
					if(ch==2){
						int amount, gallon;
						string address, number;
						cout<<"How many Gallons : ";
						cin>>gallon;
						amount = gallon*530;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;
					}else
					if(ch==3){
						int barrels;
						string address, number;
						cout<<"How many Barrels : ";
						cin>>barrels;
						float amount = barrels*22258.18;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;	
						}
					}
				break;
				case 2:
					cout<<"Petrol Prices are!"<<endl;
					cout<<endl;
					cout<<endl;
					cout<<"Rs. 140/litre"<<endl;
					cout<<"Rs. 530/Gallon"<<endl;
					cout<<"Rs. 22,258.18/Barrel"<<endl;
					break;
				case 3:
					cout<<"Welcome Mr."<<name<<endl;
					int ch;
					cout<<"1. In Litres."<<endl;
					cout<<"2. In Gallons."<<endl;
					cout<<"3. In Barrels."<<endl;
					cin>>ch;
						if(ch==1){
						int amount, litres;
						string address, number;
						cout<<"How many litres : ";
						cin>>litres;
						amount = litres*140;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;
					}else
					if(ch==2){
						int amount, gallon;
						string address, number;
						cout<<"How many Gallons : ";
						cin>>gallon;
						amount = gallon*530;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;
					}else
					if(ch==3){
						int barrels;
						string address, number;
						cout<<"How many Barrels : ";
						cin>>barrels;
						float amount = barrels*22258.18;
						cout<<"Total Price : "<<amount<<endl;
						cout<<"Enter Address :";
						cin>>address;
						cout<<"Enter Contact Number (+92) : ";
						cin>>number;
						cout<<"_____________REPORT CARD_____________"<<endl;
						cout<<"Name : "<<name<<endl;
						cout<<"Address : "<<address<<endl;
						cout<<"Number : "<<number<<endl;
						cout<<"Total Price : "<<amount<<endl;	
					}
					break;
				}
				}else
				{
			cout<<"Your Password is Incorrect";
			cout<<"Please Try Again!!!!!";
		}
	}else{
		cout<<"Your name is Incorrect"<<endl;
		cout<<"Please Try Again!!!!!";
	}
	for(int k = 0; k<=5; k++){
		cout<<"..                                                  .."<<endl;
	}	
	cout<<"THANKYOU SO MUCH FOR USING OUR SERVICES"<<endl;
	cout<<"THE END";
}
