/*
  HackerRank - Circular Array Rotation 
*/
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    
    /*    
    //We don't need any modification to the vector, printing should be good enough
    int l=0;
    int temp;
    while(l < k){
        temp = a[n-1];
        for (int j=n-1; j > 0; j--){            
            a[j] = a[j-1];
        }
        a[0] = temp;
        l++;        
    }
    */    
    k = k % n;
    for(int a0 = 0; a0 < q; a0++){
        int m;
        cin >> m;
        //cout << m << " " << k << " " << a[(m+n-k) % n] << endl;
        cout << a[(m+n-k) % n] << endl;
    }
    return 0;
}
