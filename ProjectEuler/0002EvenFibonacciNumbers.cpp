#include <iostream>
using namespace std;

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
