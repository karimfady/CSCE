#include "func1.h"
#include <iostream>
using namespace std;
 int main()
{
int val[] = {10,7,1,3,2 };
int wt[] = {9,12,2,7,5 };
int w = 50;
int n = 5;
cout << knapSack(w, wt, val, n);
return 0;
}


