#include <bits/stdc++.h> 
using namespace std; 
 
void in(int a[], int n) { 
    for (int i = 0; i < n; i++) { 
        cout << a[i]; 
    } 
    cout << endl; 
} 
 

void solve(int a[], int n) { 
    sort(a, a + n); 
    do { 
        in(a, n); 
    }while (next_permutation(a,a+n)); 
}

int main() { 
    int n;cin >>n;
    int a[n+5];
    for(int i = 0; i < n;++i){
        a[i] = i+1;
    }
    solve(a, n); 
    return 0; 
} 