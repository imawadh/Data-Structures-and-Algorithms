#include<iostream>
#include<vector>
#include<string>
using namespace std;
vector<vector<char>> board;
bool isSafe(int col, int row,int &n){
    // top column 
    for(int i = 0; i<row; i++){
        if(board[i][col]=='Q') return false;
    }
    // left diagonal check
    for(int i = row-1, j = col-1; i>=0 && j>=0; i--, j-- ){
        if(board[i][j]=='Q') return false;
    }
    // right diagonal check 
    for(int i = row-1, j = col+1; i>=0 && j<n; i--, j++ ){
        if(board[i][j]=='Q') return false;
    }


    return true;
}
void printAllBoarads(int &n,int &currRow){
    if(currRow==n){
        cout<<"Print Board"<<'\n';
    }

    // Every row will have exactly one queen so when a queen is places we move to next row
    // since we have fixed with row now we will try to fix the particualar column where we can place the queen 
    for(int col = 0; col<n; col++){
        if(isSafe(col,currRow,n)){
            board[currRow][col] = 'Q';
            currRow = currRow+1;
            printAllBoarads(n,currRow);
            currRow = currRow-1;
            board[currRow][col] = '.';
        }
    }
}
int main(){

    int boardSize;
    cin>>boardSize;
    board.resize(boardSize,vector<char>('.',boardSize));
    int curRow = 0;
    printAllBoarads(boardSize,curRow);
    return 0;
}