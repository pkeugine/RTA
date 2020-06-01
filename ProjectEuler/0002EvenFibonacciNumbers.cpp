#include <iostream>
using namespace std;

//First method, brute force
/*
long first_fibo = 1;
long second_fibo = 1;
long next_fibo = 2;
long sum = 0;

int main(void) {
    while(second_fibo < 4000000) {
        if(second_fibo%2 == 0) sum += second_fibo;

        next_fibo = first_fibo + second_fibo;
        first_fibo = second_fibo;
        second_fibo = next_fibo;
    }

    cout << sum << endl;

    return 0;
}
*/

//Second method, quicker brute force
//Use the fact that even numbers only come in places of multiples of 3
/*
long third_fibo = 2;
long sixth_fibo = 0;
long next_fibo = 8;
long sum = 0;

int main(void) {
    while(third_fibo < 4000000) {
        sum += third_fibo;

        next_fibo = 4*third_fibo + sixth_fibo;
        sixth_fibo = third_fibo;
        third_fibo = next_fibo;
    }

    cout << sum << endl;

    return 0;
}
*/

//Third method, using array

