#include <algorithm>
#include <iostream>
#include <vector>

using std::vector;

int get_majority_element(vector<int> &a, int left, int right) {
  if (left == right) return -1;
  if (left + 1 == right) return a[left];
  int le=get_majority_element(a,left,(left+right-1)/2+1);
  int re=get_majority_element(a,(left+right-1)/2+1,right);
  int lcount=0;
  for(int i=left;i<right;i++)
  {
    if(a[i]==le) lcount+=1;
  }
  if(lcount>(right-left)/2) return le;
  int rcount=0;
  for(int i=left;i<right;i++)
  {
    if(a[i]==re) rcount+=1;
  }
  if(rcount>(right-left)/2) return re;
  return -1;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (size_t i = 0; i < a.size(); ++i) {
    std::cin >> a[i];
  }
  std::cout << (get_majority_element(a, 0, a.size()) != -1) << '\n';
}
