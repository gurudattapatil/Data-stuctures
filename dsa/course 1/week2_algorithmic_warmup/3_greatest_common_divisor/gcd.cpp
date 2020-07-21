#include <iostream>
#include <stdio.h>
int c=0;
int current_gcd=1;
int gcd(int a, int b) {
  while(b!=0)
  {
   
    c=a%b;
    a=b;
    b=c;
    
  }
  current_gcd=a;
  return current_gcd;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  if(a>b)
  {
    std::cout << gcd(a, b) << std::endl;
  }
  else
  {
    std::cout << gcd(b, a) << std::endl;
  }
  
  return 0;
}
