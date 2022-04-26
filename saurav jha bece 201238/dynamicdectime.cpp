#include<iostream>
class time
{
int *hr, *min,*sec;
public:
time(){
hr=new int(0);
min=new int(0);
sec=new int(0);
}
time (int a, int b, int c){
hr=new int(a);
min=new int(b);
sec=new int(c);
}
~time(){
delete hr;
delete min;
delete sec;
}
void display(){
cout<< " the time is"<< hr <<" hour " << min << " minutes " << sec <<" second."<<endl ;
cout<< " the time is " << *hr <<" hour" << *min << " minutes " << *sec <<" second."<<endl ;}
friend void add(time &t1,time &t2);
};
void add(time &t1,time &t2){
time t;
*t.sec=*t1.sec+*t2.sec;
*t.min=*t1.min+*t2.min;
*t.min=*t.min+*t.sec/60;
*t.sec=*t.sec%60;
*t.min=*t.min%60;
*t.hr=*t1.hr+*t2.hr;
*t.hr=*t.hr+*t.min/60;
t.display();
}
int main(){
time t1(2,3,5);
time t2(3,5,7);
add(t1,t2);
int a;
cin>>a;
return 0;
}
