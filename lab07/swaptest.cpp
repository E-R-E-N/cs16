// swaps values of two ints after getting fixed by
// Zhengyan Yu, 02/28/18

#include<iostream>
using namespace std;

void intswap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
