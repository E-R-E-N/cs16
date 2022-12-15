// counts.cpp - counts characters
// Zhengyan Yu, Jiale Chen, 03/03/18

#include <iostream>
#include "common.h"  // Notice: common.h included here
#include <cstdlib>
using namespace std;

int main(int argc, char *argy[]){


  char c;
  int count[NUM]={0};
  int total=0;

  if((*argy[0]=='-')and(*argy[1]!='o')){
      badOption(*argy);
    }
  
  while(!cin.eof()){
    while (cin.get(c)){
      count[static_cast<int>(c)]++;
      total++;
    }
  }

  prHeader(std::cout);
  for(int i=0; i<=32; i++){
    if(count[i]>0){
	prCountStr(std::cout, i, symbols[i], count[i]);
      }
  }
      
  for (int i=33; i<=126; i++){
    if(count[i]>0){
        prCountChr(std::cout, i, char(i), count[i]);
    }
  }
  
  if(count[NUM-1]>0){
      cout<<std::setw(3)<<127<<'\t'<<"DEL"<<'\t'<<std::setw(5)<<count[NUM-1]<<std::endl;
  }
    prTotal(std::cout, total);
  return 0;
}
