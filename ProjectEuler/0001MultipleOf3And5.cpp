#include <iostream>
using namespace std;

//First method, brute force
/*
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
*/

//Second method, brute force
int main(void) {
    int sum = 0;

    for(int i=1; i<1000; i++) {
        if(i%3==0 or i%5==0) sum += i;
    }

    cout << sum << endl;
    
    return 0;
}
