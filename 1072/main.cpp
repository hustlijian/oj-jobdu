#include <iostream>
#include <set>

int main(int argc, char const* argv[])
{
    using namespace std;
    set<int> myset;

    for (int i=0; i<=5; i++) {
        for (int j = 0; j <= 4; j++) {
            for (int k = 0; k <= 6 ; k++) {
                int total = 8*i + 10*j + 18*k;
                myset.insert(total);
            }
        } 
    }

    cout << myset.size() << endl;
    return 0;
}
