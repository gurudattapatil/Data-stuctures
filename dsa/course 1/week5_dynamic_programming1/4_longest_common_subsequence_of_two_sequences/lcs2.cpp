#include <iostream>
#include <vector>

using std::vector;

int lcs2(vector<int> &a, vector<int> &b) {
  //write your code here
  int n=a.size();
  int m=b.size();
  int mat[n+1][m+1];
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
        mat[i][j]=0;
    }
  }
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=m;j++)
    {
      if(a[i-1]==b[j-1])
      {
        mat[i][j]=mat[i-1][j-1]+1;
      }
      else if(a[i-1]!=b[j-1])
      {
        if(mat[i][j-1]>=mat[i-1][j])
        {
          mat[i][j]=mat[i][j-1];
        }
        else if(mat[i][j-1]<=mat[i-1][j])
        {
          mat[i][j]=mat[i-1][j];
        }
      }
    }
  }
  return mat[n][m];
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }

  int m;
  std::cin >> m;
  vector<int> b(m);
  for (int i = 0; i < m; i++) {
    std::cin >> b[i];
  }

  std::cout << lcs2(a, b) << std::endl;
}

