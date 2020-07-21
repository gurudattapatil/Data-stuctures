#include <iostream>
#include <cstdio>
using namespace std;

int a=0;
int b=1;
int c=0;
int fibonacci_fast(long long n) {
    if(n<=1)
    {
        return n;
    }
    else
    {
    for(int i=1;i<n;i++)
    {
        c=a+b;
        a=b%10;
        c=c%10;
        b=c;
        
    }
    return c;
    }
}

int main() {
    int n = 0;
    std::cin >> n;
    //test_solution();
    std::cout << fibonacci_fast(n) << '\n';
    return 0;
}