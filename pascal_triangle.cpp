#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> triangle;

        for (int i = 0; i < numRows; i++) {
            vector<int> row(i + 1, 1);  // Create a row with all elements initialized to 1

            // Fill in the values between the first and last 1s in each row
            for (int j = 1; j < i; j++) {
                row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }

            triangle.push_back(row);  // Add the row to the triangle
        }

        return triangle;
    }
};

int main() {
    Solution solution;
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    vector<vector<int>> result = solution.generate(numRows);

    // Display Pascal's Triangle
    for (const auto& row : result) {
        for (int value : row) {
            cout <<" " <<value << " ";
        }
        cout << endl;
    }

    return 0;
}
