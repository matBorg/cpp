#include <iostream>
#include <stdio.h>
#include <assert.h>
using namespace std;
int main()
{
  int x, y;
  freopen("./mappa.txt","r",stdin);
  freopen("./out.txt","w",stdout);
  assert(2==scanf("%d %d",&x, &y));
  int V[x][y];
  for (int i = 0; i < y; i++)
  {
    for (int j = 0; j < x; j++)
    {
      assert(1 == scanf("%d",&V[i][j]));
    }
  }
  for (int i = 0; i < y; i++)
  {
    for (int j = 0; j < x; j++)
    {
      if (V[i][j] == 0){
        cout<<"# ";
      }
      if (V[i][j] == 1){
        cout<<"G ";
      }
    }
    cout<<"\n";
  }
  return 0;
}
/*
 int v = 10;
 int c = (v==10 ? 4 : 7) se v = 10 allora c = 4, se no c = 7;
*/