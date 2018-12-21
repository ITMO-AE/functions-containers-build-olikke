#include <iostream>

using namespace std;

bool IsPalindrom(string str)
{
    if (str.length()==0) return true;
    unsigned int k=static_cast<unsigned int>(str.length()-1);
    for (unsigned int i=0; i<k/2;i++)
    {
        if (str[i]!=str[k-i]) return false;
    }
    return true;
}

int main()
{
   string word="";
   cout<<word<<" "<<(IsPalindrom(word)?"palindrom":"no palindrom")<<endl;
   return 0;
}
