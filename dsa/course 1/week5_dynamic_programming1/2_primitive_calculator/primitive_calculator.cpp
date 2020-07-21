#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;

vector<int> optimal_sequence(int n) {
  int a[n];
  vector<int> b(n+1);
 
  for(int i=2;i<=n;i++)
  {
    if(i==2 || i==3)
    {
      a[i]=1;
    }
    else
    {
      if(i%3==0 && i%2==0 && a[i/3]<a[i/2])
      {
        a[i]=a[i/3]+1;
        b[i]=i/3;
      }
      else if(i%3==0 && i%2==0 && a[i/2]<a[i/3])
      {
        a[i]=a[i/2]+1;
        b[i]=i/2;
      }
      else if(i%3==0 && a[i/3]<=a[i-1])
      {
        a[i]=a[i/3]+1;
        b[i]=i/3;
      }
      else if(i%2==0 &&  a[i/2]<=a[i-1])
      {
        a[i]=a[i/2]+1;
        b[i]=i/2;
      }
      else
      {
        a[i]=a[i-1]+1;
        b[i]=i-1;
      }
    }
  }
  
  vector<int> sequence;

  for (int i = n; i !=0; i = b[i]) {
    sequence.push_back(i);

  }
  reverse(sequence.begin(), sequence.end());
  return sequence;
}
int main() {
  int n;
  std::cin >> n;
  if(n==1)
  {
      std::cout << 0 << "\n" << 1;
  }
  else
  {
  vector<int> sequence =optimal_sequence(n);
  std::cout << sequence.size() << "\n";
  std::cout << 1 << " ";
  for(int i=0;i<sequence.size();++i){
  std::cout << sequence[i] << " ";
  }
}
}