#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    int num;
    cout << "Input 5 characters " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> num;
        cout << "Next" << endl;
        q.push(num);
    }
    for (int i = 0; i < 5; i++)
    {
        cout << q.front() << endl;
        q.pop();
    }

    return 0;
}
