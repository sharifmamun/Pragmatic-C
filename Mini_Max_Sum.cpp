/*
  HackerRank - Mini Max Sum using C++
*/
#include <iostream>
using namespace std;

int main(){
    long int a;
    long int b;
    long int c;
    long int d;
    long int e;
    cin >> a >> b >> c >> d >> e;
    
    long int minVal=0, maxVal=0;
    long arr[] = {a, b, c, d, e};
    
    long total = a + b + c + d + e;
    minVal = total;
    maxVal = 0;
    for (int i=0; i < 5; i++){
        long s = total - arr[i];
        minVal = s < minVal ? s : minVal;
        maxVal = s > maxVal ? s : maxVal;
    }
    
    cout << minVal << " " << maxVal;
    
    return 0;
}
