#include <iostream>
#include <stack>
using namespace std;
#define MAX 1000

int maxArea(int M[MAX][MAX], int n, int m);
int main() {
    int T;
    cin >> T;

    int M[MAX][MAX];

    while (T--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        cout << maxArea(M, n, m) << endl;
    }
}
// } Driver Code Ends

int maxHist(int *arr,int m){
    stack<int> s;
    int i = 0, area = 0, maxArea = 0, top = 0;
    while (i < m){
        if (s.empty() || arr[s.top()] <= arr[i]) s.push(i++);
        else {
            top = s.top();
            s.pop();
            area = arr[top] * (s.empty() ? i : i - 1 - s.top());
            maxArea = max(maxArea, area);
        }
    }
    while (!s.empty()){
        top = s.top();
        s.pop();
        area = arr[top] * (s.empty() ? i : i - 1 - s.top());
        maxArea = max(maxArea, area);
    }
    return maxArea;
}
/*You are required to complete this method*/
int maxArea(int M[MAX][MAX], int n, int m) {
    // Your code here
    int maxArea = 0, area = 0;
    int *temp = new int[m];
    for (int i = 0; i < m; i++){
        temp[i] = M[0][i];
    }
    area = maxHist(temp,m);
    maxArea = max(area, maxArea);
    for ( int i = 1; i < n; i++){
        for ( int j = 0; j < m; j++){
           if(M[i][j]==0){
                temp[j] =0;
            }
            else{
                temp[j]+=M[i][j];
            }
        }
        area = maxHist(temp, m);
        maxArea = max(area, maxArea);   
    }
    return maxArea;
}
