#include <iostream>
using namespace std;

int main(void) {
    int arr[8];
    bool flag = false;
    /*
    for(int i=0; i<9; i++) {
        cin >> arr[i];
    }
     */
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6] >> arr[7];
    for(int i=1; i<8; i++) {
        if((arr[i]-arr[i-1]>1) || (arr[i]-arr[i-1]<-1)) {
            flag = true;
        }
    }
    if(flag) cout << "mixed\n";
    else if(!flag && arr[0] == 1) cout << "ascending\n";
    else if(!flag && arr[0] == 8) cout << "descending\n";
    return 0;
}