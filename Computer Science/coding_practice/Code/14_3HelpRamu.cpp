#include <iostream>
using namespace std;

int main(){
    int t;  // no of test case
    cin >> t;
    int c1, c2, c3, c4, n, m;
    int ricks[1005], cabs[1005];
    while (t--)
    {
        cin >> c1 >> c2 >> c3 >> c4;
        cin >> n >> m;
        // for rickshaws - no of times each rickshaw is used
        for (int i = 0; i < n; i++)
        {
            cin >> ricks[i];
        }
        // for cabs - no of times each cab is used
        for (int i = 0; i < m; i++)
        {
            cin >> cabs[i];
        }

        // logic - for calculating minimum cost
        // calculating rickshaw cost
        int rickscost = 0;
        for (int i = 0; i < n; i++)
        {
            rickscost += min(ricks[i]*c1, c2);
        }
        rickscost = min(rickscost, c3);

        // calculating cab cost
        int cabcost = 0;
        for (int i = 0; i < m; i++)
        {
            cabcost += min(cabs[i]*c1, c2);
        }
        cabcost = min(cabcost, c3);

        int finalCost = min(c4, rickscost + cabcost);
        cout << finalCost << endl;
    }
    
    return 0;
}