#include <iostream>
#include <vector>

using namespace std;

bool IsPalindrom(string &str)
{
    if (str.length()==0) return true;
    unsigned int k=static_cast<unsigned int>(str.length()-1);
    for (unsigned int i=0; i<k/2;i++)
    {
        if (str[i]!=str[k-i]) return false;
    }
    return true;
}

vector <string> PalindromFilter(vector <string> &words, int minLength)
{
    vector <string> result;
    for (auto word: words)
    {
        if (static_cast<int>(word.length())>=minLength)
        if (IsPalindrom(word)) result.push_back(word);
    }
    return result;
}


int main()
{
    vector <string> Words = {"","","",""};
    vector <string> resultWords = PalindromFilter(Words,0);
    for (auto word: resultWords) cout<<word<<" "<<endl;
    return 0;
}
