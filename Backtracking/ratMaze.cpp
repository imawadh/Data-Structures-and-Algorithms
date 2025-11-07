
#include<bits/stdc++.h>
using namespace std;

vector<string> ans;

// 0 means blocked cell
// 1 means cell that can be visted .... 
void path(vector<vector<int>>& maze, int cr, int cc, int row, int col,string currentPath){
    if(cr==row && cc == col){
        ans.push_back(currentPath);
        return;
    }
    if(cr<0 || cr>row || cc<0 || cc>col || maze[cr][cc]==0){ 
        // maze[cr][cc] == 0, iska mtlb cell pahle se block hai isliye uspe traverse nhi kar sakte .... 
        return;
    }

    maze[cr][cc] = 0;
    path(maze,cr+1, cc, row,col,currentPath+"D");
    path(maze,cr-1, cc, row,col,currentPath+"U");
    path(maze,cr, cc-1, row,col,currentPath+"L");
    path(maze,cr, cc+1, row,col,currentPath+"R");
    maze[cr][cc] = 1;
    
}

vector<string> ratInMaze(vector<vector<int>>& maze) {

    // code here
    int row = maze.size();
    int col = maze[0].size();
    if(maze[row-1][col-1]==0) return ans;
    path(maze,0,0,row-1,col-1,"");
    // sort(ans.begin(),ans.end());
    return ans;

}

int main(){
    int n;
    cin >> n; 

    vector<vector<int>> maze(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> maze[i][j];
        }
    }

    vector<string> result = ratInMaze(maze);

    if (result.empty()) {
        cout << "-1\n"; 
    } else {
        for (string &p : result) {
            cout << p << " ";
        }
        cout << "\n";
    }

    return 0;
    
}