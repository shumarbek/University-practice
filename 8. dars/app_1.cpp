#include <iostream>
using namespace std;

int main() {
    int A[]={5, 7, 8, 11, 6};
    int i, n, sum=0;
    
    n=sizeof(A) / sizeof(A[0]);

    for(i=0; i<n; i++)
    if (A[i]%2 == 0) sum++;

    cout << "juft sonlar" << sum;

    return 0;
}