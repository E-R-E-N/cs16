//prints differences from average for all values entered
//Zhengyan Yu, 21/02/18

#include <iostream>
using namespace std;

// prototypes of functions to be pasted below main
int isum(int x[], int n);
double avg(int x[], int n);

int main() {
    const int MAXN = 100;
    int a[MAXN], input;
    double average, diff;

    // fill array with data from user, and count items
    cout << "enter up to " << MAXN <<
        " integers - end by non-integer:\n";
    int n = 0;
    cin >> input;
    while ( cin.good() && n < MAXN ) {
        a[n] = input;
        ++n;
        cin >> input;
    }

    /* SET average TO AVERAGE VALUE OF FIRST n ELEMENTS OF a */
    average=avg(a,n);


    /* print summary results and header for diffs */
    cout << "average of " << n << " values: " << average << endl;
    cout << "differences from average:\n";


    /* USE A FOR LOOP: i = 0 TO n-1, AND ON EACH ITERATION,
           CALCULATE AND PRINT diff AS a[i] MINUS average */
    for(int i=0; i<=n-1; i++)
      {
	diff=a[i]-average;
	cout<<diff<<endl;
    }
    return 0;
}

/* BE SURE COPIES OF isum AND avg FUNCTIONS ARE BELOW HERE */
int isum(int x[], int n)
{
  int i; int sum=0;
  for(i=0; i<n; i++)
    {
      sum+=x[i];
    }
    return sum;
}

double avg(int x[], int n)
{
  return isum(x, n)/static_cast<double>(n);
}
