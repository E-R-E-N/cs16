//Zhengyan Yu
//01/25/18
//lab02

#include <iostream>
 using namespace std;
 
 int main()
 {
   int quarter, dime, nickel, value;
     
     
   cout<<"Enter number of quarters:"<<endl;
   cin>>quarter;
   cout<<"Enter number of dimes:"<<endl;
   cin>>dime;
   cout<<"Enter number of nickels:"<<endl;
   cin>>nickel;
   value=quarter*25+dime*10+nickel*5;
   cout<<"The coins are worth "<<value<<" cents."<<endl;
   return 0;
 }
