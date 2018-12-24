#include <iostream>

using namespace std;

int Factorial(int Val)
{
    if (Val<0) return 1;
    if (Val>10)
    {
        cout<<"Недопуситмое значение. Число д.б. <=10."<<endl;
        return 0;
    }
    int k=1;
    for (int i=2;i<=Val;i++,k*=i);
    return k;
}

int main()
{
    int Val;
    cout<<"Введите число 0..10: ...";
    cin>>Val;
    cout<<Val<<"!="<<Factorial(Val)<<endl;
    return 0;
}
