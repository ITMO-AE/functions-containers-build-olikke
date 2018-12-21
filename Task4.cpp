#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

void CopyV1ToV2(vector <int>& V1,vector <int>& V2)
{
    vector <int>::iterator it= V1.begin();
    while (it<V1.end())
    {
        V2.push_back(*it++);
    }
    V1.clear();
}

int main()
{
    vector<int> V1 = {13,23,432,12,14};
    vector<int> V2 = {48,54,2,7,4,7,4};
    CopyV1ToV2(V1,V2);
    for (vector <int>::iterator it=V2.begin();it<V2.end();cout<<*it++<<" ");
    cout<<endl;
    return 0;
}
