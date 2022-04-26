#include<iostream>
#include<string>
#include<conio>
class rectangle{
protected:
float length;
float breath;
float are;
public:
void getractdata(){
cout<<"enter the lenght and breath :"<<endl;
cin>>length>>breath;
}
void area(){
are=length*breath;
}
void  displayractdata(){
cout<<"area : "<< are <<endl;
}

};
class box:public rectangle{
private:
  float height;
  float vol;


public:
void getboxdata(){
//getractdata();


cout<<"enter the height :";
cin>>height;
}

void volume(){
vol=length*breath*height;}
void displaydata(){
//displayractdata();

cout<<"the area is  "<< are <<" and volume is "<< vol <<endl;
}
};
int main(){
box x;
x.getractdata();
x.area();

x.getboxdata();
x.volume();
x.displayractdata();
x.displaydata();

getch();
return 0;
}