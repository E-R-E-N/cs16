//Zhengyan Yu
//01/25/18

#include <iostream>
using namespace std;

int main() {
  int capacity, people;
  cout<<"Enter maximum room capacity:"<<endl;
  cin>>capacity;
  cout<<"Enter number of people present:"<<endl;
  cin>>people;

  if(capacity>=people){
    cout<<"Meeting is legal."<<endl;
  }
  else{
    int x=people-capacity;
    cout<<"Meeting cannot be held unless "<<x<<" leave."<<endl;
  }
  return 0;
}
