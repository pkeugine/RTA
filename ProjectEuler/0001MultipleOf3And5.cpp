#include <iostream>
using namespace std;

int main(void) {
    int num = 0;
    int sum = 0;
    for(int i=0; i<999; i++) {
        num = i+1; 
        if(num%3==0 or num%5==0) {
            sum += num;
        }
    }
    cout << sum << endl;
    return 0;
}
