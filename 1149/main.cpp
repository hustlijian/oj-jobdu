#include <cstdio>
#include <iostream>
#include <string>
#include <map>
#include <time.h>

using namespace std;
int main(int argc, char* argv[])
{
    string s;
    freopen("input.txt", "r", stdin);

    while (cin>>s) {
        map<string,int> count;
        for (int i = 1; i < s.size(); i++) {
            for (int j = 0; j <=s.size()-i; j++) {
                string temp(s,j,i);
                count[temp]++;
            }
        }
        map<string,int>::iterator it=count.begin();
        while (it!=count.end()) {
            if (it->second>1) {
                cout << it->first << " " << it->second<<endl;
            }
            it++;
        }
    }


   return 0;
}
