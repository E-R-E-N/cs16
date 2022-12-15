// ptrfuncs.cpp
// Zhengyan Yu, Jiale Chen, 03/11/18

#include <iostream>
#include <iomanip> // to use setw
#include "ptrfuncs.h"
using namespace std;

// IMPLEMENT ptrfuncs.h FUNCTIONS BELOW
double sum(double *values, int n){
  double sum=0;
  for(int i=0;i<n;i++){
    sum+=*(values+i);
  }
  return sum;
}

double *maxPtr(double *values, int n){
  int a=0;
  double *max;
  for(int i=0; i<n; i++){
    if(*(values+i)>*(values+a)){
      a=i;
      *max=*(values+a);
    }
  }
  return(values+a);
}

double *minPtr(double *values, int n){
  int a=0;
  double *min;
  for(int i=0; i<n; i++){
    if(*(values+i)<*(values+a)){
      a=i;
      *min=*(values+a);
    }
  }
  return(values+a);
}
  

double valueDiff(double *left, double *right){
  return (*left-*right);
}

void printTable(double *values, int n, int perRow){
  for(int  i=0; i<n; i++){
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout<<setw(10)<<*(values+i);
    if((i+1)% perRow==0||(i+1)%n==0)
      cout<<endl;
  }
}
void sortValues(double *first, double *last){
  for(int i=0; i<*last; i++){
    for(int j=0; (first+j)<last; j++){
      if(*(first+j)>*(first+j+1)){
	swap(*(first+j),*(first+j+1));
      }
    }
  }
}

void swap(double *a, double *b){
    double temp=*a;
    *a=*b;
    *b=temp;
  }
