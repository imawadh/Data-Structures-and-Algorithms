# include <bits/stdc++.h>
using namespace std;
 
// Define
#define  loop(j) for(int i =0; i<j; i++) ;
 
// Typedef
typedef long long  ll;
int blocked(int sr,int sc,vector<vector<int>>blocked_cells){
    int row = blocked_cells.size();
    for(int i = 0; i<row; i++){
        if(blocked_cells[i][0]==sr && blocked_cells[i][1]==sc){
            return true;
        }
    }
    return false;

}
int pathCount(int sr,int sc, int er, int ec,vector<vector<int>>blocked_cells){
    if(blocked(sr,sc,blocked_cells)) return 0; // blocked need to che ked first 


    if(sr==er && sc==ec) return 1; //  True Condition that I have raeched destination 

    if(sr>er || sc>ec) return 0; // Condition when the indexes reaches out bound 
    
    int down = pathCount(sr+1,sc,er,ec,blocked_cells);
    int right = pathCount(sr,sc+1,er,ec,blocked_cells);
    // Here either can be top in between down and right 

    return down+right;
}
 
void awadh_solution(){
    vector<vector<int>>blocked_cells = {{5,5}};
    cout<<pathCount(1,1,5,5,blocked_cells)<<' ';
 
 
}
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int test=1;
    while(test--){
       awadh_solution();
    }
}