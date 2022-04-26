#include<iostream>
#include<string>
#include<conio>

class media {

protected:
string title;
int price;

public:
media(string a, int b):title(a),price(b){}
void display(){
cout<<"the title and price is " << title <<" and "<<price<<endl;
 }
 };

class book:public media {

protected:

int num;

public:
book(string a, int b,int c):media(a,b),num(c){}
void displayn(){
media::display();
cout<<"the no of pages is " << num <<endl;
 }
 };

 class video:public media {

protected:

int time;

public:
video(string a, int b,int d):media(a,b),time(d){}
void displayv(){
media::display();
cout<<"the time period is " <<time <<" min" <<endl;
 }
 };

 int main(){
 book s("man on moon",9000,1200);
 s.displayn();
video s2("zindgi na milegi dowara",50,180);
s2.displayv();
getch();

 return 0;
 }

