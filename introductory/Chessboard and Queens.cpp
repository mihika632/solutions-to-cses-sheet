#include<bits/stdc++.h>
using namespace std;void countWays(vector<string>& board, int row,
               vector<bool>& colUsed,
               vector<bool>& diag1Used,
               vector<bool>& diag2Used, int& count) {
    if (row == 8) { 
        count++;
        return;
    }

    for (int col = 0; col < 8; col++) {
        if (board[row][col] == '*' || colUsed[col] 
            || diag1Used[row - col + 7] 
            || diag2Used[row + col]) {
            continue; // Skip if there is an obstacle or queen attack
        }

        // Mark current position as occupied
        colUsed[col] = diag1Used[row - col + 7] = diag2Used[row + col] = true;

        // Move to the next row
        countWays(board, row + 1, colUsed, diag1Used, diag2Used, count);

        // Unmark for backtracking
        colUsed[col] = diag1Used[row - col + 7] = diag2Used[row + col] = false;
    }
}
int main(){
    vector<string> board(8);
    for (int i = 0; i < 8; i++)
        cin >> board[i]; // Take input for the board

    vector<bool> colUsed(8, false);
    vector<bool> diag1Used(15, false); // Diagonals (left-to-right)
    vector<bool> diag2Used(15, false); // Diagonals (right-to-left)

    int count = 0;
    countWays(board, 0, colUsed, diag1Used, diag2Used, count);
    
    cout << count << "\n";



    
}