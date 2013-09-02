#include <iostream>
#include <cstdio>
#include <queue>
using namespace std;

int main()
{
        int n;
        int a;
        int sum;
        priority_queue<int, vector<int>, greater<int> > q;
        while (scanf("%d", &n) && n != 0)
        {
                sum = 0;
                for (int i=0; i<n; i++)
                {
                        scanf("%d", &a);
                        q.push(a);
                }
                while (q.size() >= 2)
                {
                        int b = q.top();
                        q.pop();
                        int c = q.top();
                        q.pop();
                        q.push(b+c);
                        sum += b + c;
                }
                cout << sum << endl;
                q.pop();
        }
        
        return 0;
}
