#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;




int get_change(int m) {
  //write your code here
  int a[m];
  int c=0;
  for(int i=1; i<=m;i++)
  {
    if(i==1 || i==3 || i==4)
    {
      a[i]=1;
    }
    else
    {
      if (i==2)
      {
        a[i]=2;
      }
      else if(a[i-1]<=a[i-3] && a[i-1]<=a[i-4])
      {
        a[i]=a[i-1]+1;
      }
      else if(a[i-3]<=a[i-1] && a[i-3]<=a[i-4])
      {
        a[i]=a[i-3]+1;
      }
      else if(a[i-4]<=a[i-1] && a[i-4]<=a[i-3])
      {
        a[i]=a[i-4]+1;
      }
    }
    
  }
  c=a[m];
  return c;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
