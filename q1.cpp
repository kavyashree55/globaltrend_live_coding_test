#include <iostream>
using namespace std;

int lcs(string str1 ,string str2 ,string ans){
    int n = str1.length();
    int m = str2.length();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(str1[i]==str2[j]){
                ans += str1[i];
            }
        }
    }
    return ans.length();
}
int main()
{
string str1="abcde";
string str2="ace";
string ans;

cout<< "loungest common subsequence is "<< lcs(str1,str2,ans);
}



