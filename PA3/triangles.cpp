// Zhengyan Yu, Jiale Chen, 02/08/18

#include<iostream>
using namespace std;

bool judge(int num,int size)
{
  if ((size <= 0)and(num>4||num<1))
    {
      cout << "number must be between 1 and 4"<<endl;
      cout << "size must be greater than 0"<<endl;
      cout<<"enter number and size of triangles"<<endl;
      return false;
    }
      else if (num > 4 || num <1)
	{
	  cout << "number must be between 1 and 4"<<endl;
          cout<<"enter number and size of triangles"<<endl;
	  cout<<"*  ** **"<<endl;
	  cout<<"** *   *"<<endl;
	  return false;
	}
      else if(size<=0)
	{cout<<"size must be greater than 0"<<endl;
	cout<<"enter number and size of triangles"<<endl;
	cout<<"*  ** **"<<endl;
        cout<<"** *   *"<<endl;
	}
      else
	{
	  return true;
	}
}

int main()
    {int num, size;
  cout<<"enter number and size of triangles"<<endl;
  cin>>num>>size;
  if(judge(num,size)==true)
    {
  
  if(num==1){
     for(int i=1; i<=size; i++)
       {
      for(int j=1; j<=i; j++)
	{cout<<"*";
	}
      cout<<endl;
       }
  }
  if(num==2){
    for(int i=1; i<=size; i++)
       {
      for(int j=1; j<=i; j++)
	{cout<<"*";
	}
      for(int k=size; k>=i; k--)
	{cout<<" ";
	}
      for(int k=size; k>=i; k--)
	{cout<<"*";
	}
      cout<<endl;
       }
  }
    
  if(num==3){
    for(int i=1; i<=size; i++)
       {
      for(int j=1; j<=i; j++)
	{cout<<"*";
	}
      for(int k=size; k>=i; k--)
	{cout<<" ";
	}
      for(int k=size; k>=i; k--)
	{cout<<"*";
	}
      for(int j=1; j<=i; j++)
	{cout<<" ";
	}
      for(int l=1;l<i;l++)
	{cout<<" ";
	}
      for(int k=size; k>=i; k--)
	{cout<<"*";
	}
      cout<<endl;
  }
  }
  if(num==4){
     for(int i=1; i<=size; i++)
       {
      for(int j=1; j<=i; j++)
	{cout<<"*";
	}
      for(int k=size; k>=i; k--)
	{cout<<" ";
	}
      for(int k=size; k>=i; k--)
	{cout<<"*";
	}
      for(int j=1; j<=i; j++)
	{cout<<" ";
	}
      for(int l=1;l<i;l++)
	{cout<<" ";
	}
      for(int k=size; k>=i; k--)
	{cout<<"*";
	}
      for(int k=size; k>=i; k--)
	{cout<<" ";
	}
      for(int j=1; j<=i; j++)
	{cout<<"*";
	}
      cout<<endl;
  }
  }
   
}
  return 0;
}
