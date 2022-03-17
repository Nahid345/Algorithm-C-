#include <iostream>
#include<string>
using namespace std;
int main()
{
 int nahid[1000];
 int n, i, j=1, a, b;
 cin >> n;
 for (i = 0;i < n;i++)
 {
  cin >> a >> b;
  nahid[j] = a;
  j++;
  nahid[j] = b;
  j++;
 }
 int z, v=0;
 z = j;
 for (i = 1;i < z;i+=2)
 {
  for (j = 2;j < z;j += 2)
  {
   if (nahid[i] == nahid[j])
   {
    v++;
   }
  }
  
 }
 cout << v << endl;
 
}
