#include <iostream>
#include <cstring>
using namespace std;
int main(int argc, char const *argv[])
{
    char str[100];
    int T,count=0,n;
    cin>>T;
    for (int i = 0; i < T; ++i)
    {
        cin>>n>>str[i];
        for (int j = 0; j <n; ++j)
        {
            if (str[j]=='.' && str[j+3]=='.')
            {
                count++;
                j++;
            }
        }
        printf("Case %d:\n%d",n,count);
    }
	return 0;
}
