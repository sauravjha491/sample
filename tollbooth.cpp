#include<iostream>
using namespace std;

class tollbooth
{

	static unsigned int cars;
	static unsigned int nocars;
	static double amount;
	int car_num;
	public:
	void payingcar(){
		cout<<"enter the car number"<<endl;
		cin >>car_num;
		cout<<"your car number is "<< car_num <<endl << "thankyou for paying.....";
	    cars ++;
	    amount=amount+5;
	}
	void nopayingcar(){
		
	    nocars ++;
	}
	void total(){
		cout<<"total number of car pays : "<< cars<<endl;
		cout<<"total number of car not pays : "<< nocars<<endl;
		cout<<"total amount collected : "<<amount<<endl;
		
	}
	
};
 int tollbooth::cars=0;
 int tollbooth:: nocars=0;
  double tollbooth::amount=0;
	int main(){
		tollbooth d1,d2,d3;
		int a;
		do{
			
		
		
		cout<<"please select an option  :"<< endl;
		cout<<"press 1 for paying :"<< endl;
		cout<<"press 2 for not paying :"<< endl;
		cout<<"press 3 checking record:"<< endl;
		cout<<"press 4 for exit :"<< endl;
		cin>>a;
		while(a){
		
		
			
	
		
		
		if(a==1){
		
			d1.payingcar();
			break;
			
	}
		else if(a==2){
		
			d2.nopayingcar();
			break;
	}
		else {
		
			
		d3.total();
		break;
	}
	
		}
    }
    while(a<4);
    	
    return 0;


}	
	

