// Zhengyan Yu, Jiale Chen, Feb 9 2018
/*This program prints a variable number of rows of '*' characters arranged in 
the  form of one to four side-by-side triangles.
The user chooses the number of triangles and the triangle size. */
#include <iostream>
using namespace std;
int main()
{
  int number, size, n;
  cout<<"enter number and size of triangles"<<endl;
  cin>>number>>size;
  switch(number)
    {
    case'1':
      for(int i=1; i<=size; i++)
       {
      for(int j=1; j<=i; j++)
	{cout<<"*";
	}
      cout<<endl<<endl;
       }
      break;
    default:
      cout<<"number must be between 1 and 4"<<endl;
    }
  return 0;
}
      
