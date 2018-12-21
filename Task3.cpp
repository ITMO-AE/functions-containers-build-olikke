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
    for (int i=0; i<static_cast<int>(words.size());i++)
    {
        string word=words[i];
        if (static_cast<int>(word.length())>minLength)
        if (IsPalindrom(word)) result.push_back(word);
    }
    return result;
}


int main()
{
    vector <string> Words = {"nbn","kkgkk","skjfbg","blalb"};
    vector <string> resultWords = PalindromFilter(Words,2);
    for (int i=0; i<static_cast<int>(resultWords.size())-1;i++)
        cout<<resultWords[i]<<", ";
    cout<<resultWords[static_cast<int>(resultWords.size())-1]<<endl;
    return 0;
}
