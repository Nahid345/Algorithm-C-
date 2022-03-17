#include<iostream>
using namespace std;
 
int main()
{
    double s,newsalary,money,percent,val;
 
    cin>>s;
 
    if(s>=0 && s<=400.00)
    {
        val=0.15;
    }
    else if(s>=400.01 && s<=800.00)
    {
        val=0.12;
    }
    else if(s>=800.01 && s<=1200.00)
    {
        val=0.1;
    }
    else if(s>=1200.01 && s<=2000.00)
    {
        val=0.07;
    }
    else
    {
        val=0.04;
    }
 
    money=s*val;
    newSalary=s+money;
    percent=val*100;
 
    cout << "Novo salario: " << fixed << setprecision(2) << newSalary<< endl;
    cout << "Reajuste ganho: " << fixed << setprecision(2) << money << endl;
    cout << "Em percentual: " << fixed << setprecision(0) << percent << " %" << endl;
 
    return 0;
}
