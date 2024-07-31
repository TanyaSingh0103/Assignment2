#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>& matrix, int n)
{
    vector<vector<int>> transposed(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            transposed[i][j] = matrix[j][i];
        }
    }
    cout << "transpose is: ";
    for(int i = 0; i < n; i++)
    {
        cout << endl;
        for(int j = 0; j < n; j++)
        {
            cout << transposed[i][j];
        }
    }
}
int main()
{
    int n;
    cout << "\n number of rows: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    cout << "enter elements: "<<endl;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    transpose(matrix, n);
    return 0;
}
