//Zhengyan Yu
//01/25/18

#include <iostream>
 using namespace std;
 
 int main()
 {int num0, num, x, sump, sumn, sum, np, nn;
   cout<<"How many numbers will you enter?"<<endl;
   cin>>num;
   num0=num;
   if(num<=0){
     cout<<"There is nothing to sum."<<endl;
     cout<<"Goodbye."<<endl;
     return 0;}
   cout<<"Enter "<<num<<" whole numbers while I count down."<<endl;
   sum=sump=sumn=np=nn=0;
   while(num>0){
     cout<<"Entries left to go: "<<num<<endl;
     cin>>x;
     sum=sum+x;
     if(x>0){
       sump=sump+x;
       np++;}
     if(x<0){
	 sumn=sumn+x;
         nn++;}
     num--;}
   cout<<"The sum of "<<np<<" numbers greater than zero is "<<sump<<"."<<endl;
   cout<<"The sum of "<<nn<<" numbers less than zero is "<<sumn<<"."<<endl;
   cout<<"The sum of all "<<num0<<" numbers is "<<sum<<"."<<endl;
   cout<<"Goodbye."<<endl;
   return 0;
 }
     
     
     
