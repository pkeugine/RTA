//unsolved
#include <iostream>
#include <stdio.h>
#include <set>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;
    long a[t],b[t],n[t],m[t];
    for(int i=0; i<t; i++) {
        cin >> a[i] >> b[i] >> n[i] >> m[i];
    }

    for(int i=0; i<t; i++) {
        if(a[i]>b[i] && b[i]!=0) {
            n[i] -= a[i]+b[i]+m[i];
            b[i] -= m[i];
            if(b[i]<0 || n[i]>0) {
                cout << "No\n";
                continue;
            }
            else {
                cout << "Yes\n";
                continue;
            }
        }
        else if(a[i]<=b[i] && a[i]!=0){
            n[i] -= a[i]+b[i]+m[i];
            a[i] -= m[i];
            if(a[i]<0 || n[i]>=0) {
                cout << "No\n";
                continue;
            }
            else {
                cout << "Yes\n";
                continue;
            }
        }
        else if(a[i]>b[i] && b[i]==0) {
            n[i] -= a[i]+b[i]+m[i];
            b[i] -= m[i];
            if(b[i]<=0 || n[i]>0) {
                cout << "No\n";
                continue;
            }
            else {
                cout << "Yes\n";
                continue;
            }
        }
        else if(a[i]<=b[i] && a[i]==0) {
            n[i] -= a[i]+b[i]+m[i];
            a[i] -= m[i];

            if(a[i]<=0 || n[i]>=0) {
                cout << "No\n";
                continue;
            }
            else {
                cout << "Yes\n";
                continue;
            }
        }
    }

    return 0;
}
