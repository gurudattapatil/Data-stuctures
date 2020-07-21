#include <iostream>
#include <string>

using std::string;

int edit_distance(const string &str1, const string &str2) {
 
  int l1=str1.size();
  int l2=str2.size();
  int m[l1+1][l2+1];
  for(int i=0;i<=(l1);i++)
  {
    m[i][0]=i;
  }
  for(int i=0;i<=(l2);i++)
  {
    m[0][i]=i;
  }
  for(int i=1;i<=(l1);i++)
  {
    for(int j=1;j<=(l2);j++)
    {
      if(str1[i-1]==str2[j-1])
      {
        if(m[i][j-1]+1<=m[i-1][j]+1 && m[i][j-1]+1<=m[i-1][j-1])
        {
          m[i][j]=m[i][j-1]+1;
        }
        else if(m[i-1][j]+1<=m[i][j-1]+1 && m[i-1][j]+1<=m[i-1][j-1])
        {
          m[i][j]=m[i-1][j]+1;
        }
        else if(m[i-1][j-1]<=m[i][j-1]+1 && m[i-1][j-1]<=m[i-1][j]+1)
        {
          m[i][j]=m[i-1][j-1];
        }
      }
      else if(str1[i-1]!=str2[j-1])
      {
        if(m[i][j-1]+1<=m[i-1][j]+1 && m[i][j-1]+1<=m[i-1][j-1])
        {
          m[i][j]=m[i][j-1]+1;
        }
        else if(m[i-1][j]+1<=m[i][j-1]+1 && m[i-1][j]+1<=m[i-1][j-1])
        {
          m[i][j]=m[i-1][j]+1;
        }
        else if(m[i-1][j-1]<=m[i][j-1]+1 && m[i-1][j-1]<=m[i-1][j]+1)
        {
          m[i][j]=m[i-1][j-1]+1;
        }
      }
    }
  }
  return m[l1][l2];
}

int main() {
  string str1;
  string str2;
  std::cin >> str1 >> str2;
  std::cout << edit_distance(str1, str2) << std::endl;
  return 0;
}

