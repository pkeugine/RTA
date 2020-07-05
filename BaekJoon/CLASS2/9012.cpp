#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void) {
    int T;
    cin >> T;
    while(T--) {
        string line;
        stack<char> SP;
        bool flag = true;
        cin >> line;
        for(int i=0; i<line.size(); i++) {
            if(line[i]=='(') SP.push('(');
            else {
                if(SP.size()==0) {
                    flag = false;
                    break;
                }
                else {
                    SP.pop();
                }
            }
        }
        if(flag==true && SP.size()==0) cout << "YES" << '\n';
        if(flag==false || SP.size()!=0) cout << "NO" << '\n';
    }
    return 0;
}