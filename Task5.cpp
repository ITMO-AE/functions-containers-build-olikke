#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void Reverse(vector <int> &Vec)
{
    vector <int>::iterator it1= Vec.begin();
    vector <int>::iterator it2= Vec.end();
    int k; it2--;
    do {
       k=*it1;
       *it1=*it2;
       *it2=k;
    } while (it1++<--it2);
}

int main()
{
    vector <int> mVector={1,2,3,4,5,6,7,8,9,10};
    Reverse(mVector);
    for (vector <int>::iterator it=mVector.begin();it<mVector.end();cout<<*it++<<" ");
    cout<<endl;
    return 0;
}
