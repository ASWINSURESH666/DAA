//minimum cost path
/* 
3 2 8
1 9 7
0 5 2
6 4 3
*/
#include <iostream>
#include <vector>
#include <climits> // Include for INT_MAX

using namespace std;

int min(int x, int y, int z);

int minCost(vector<vector<int>>& cost, int m, int n) {
    if (n < 0 || m < 0)
        return INT_MAX; // Include necessary for INT_MAX
    else if (m == 0 && n == 0)
        return cost[m][n];
    else
        return cost[m][n] +
               min(minCost(cost, m - 1, n - 1),
                   minCost(cost, m - 1, n),
                   minCost(cost, m, n - 1));
}

int min(int x, int y, int z) {
    if (x < y)
        return (x < z) ? x : z;
    else
        return (y < z) ? y : z;
}

int main() {
    int rows, cols;

    cout << "Enter the number of rows in the cost matrix: ";
    cin >> rows;
    cout << "Enter the number of columns in the cost matrix: ";
    cin >> cols;

    vector<vector<int>> cost(rows, vector<int>(cols));

    cout << "Enter the cost matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> cost[i][j];
        }
    }

    int result = minCost(cost, rows - 1, cols - 1);

    cout << "Minimum cost to reach the destination: " << result << endl;

    return 0;
}


