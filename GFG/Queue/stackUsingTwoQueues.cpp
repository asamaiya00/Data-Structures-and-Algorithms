#include <iostream>
#include <queue>
using namespace std;

class QueueStack
{
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int);
    int pop();
};

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        QueueStack *qs = new QueueStack();

        int Q;
        cin >> Q;
        while (Q--)
        {
            int QueryType = 0;
            cin >> QueryType;
            if (QueryType == 1)
            {
                int a;
                cin >> a;
                qs->push(a);
            }
            else if (QueryType == 2)
            {
                cout << qs->pop() << " ";
            }
        }
        cout << endl;
    }
}
// } Driver Code Ends

/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

/* The method push to push element into the stack */
void QueueStack ::push(int x)
{
    q1.push(x);
}

/*The method pop which return the element poped out of the stack*/
int QueueStack ::pop()
{
    if (q1.empty() && q2.empty())
        return -1;
    int x;
    if (!q1.empty())
    {
        int s = q1.size();
        for (int i = 0; i < s - 1; i++)
        {
            q2.push(q1.front());
            q1.pop();
        }
        x = q1.front();
        q1.pop();
    }
    else if (!q2.empty())
    {
        int s = q2.size();
        for (int i = 0; i < s - 1; i++)
        {
            q1.push(q2.front());
            q2.pop();
        }
        x = q2.front();
        q2.pop();
    }
    return x;
}
