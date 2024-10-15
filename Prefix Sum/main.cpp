# include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        vector <int> v(a);
        for(int i =0; i<a; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int max_cards = 0;
        int ct = 1;
        for (int i = 0; i < a; i++) {
            int j;
            for (j= i + 1; j < a && v[j] <= v[i] + b-1; j++) {
                ct++;
            }
            max_cards = max(max_cards, ct);
            for (; j >=0 && v[j] != v[i] ; j--) {
                ct--;
            }
            i = j;
        }
        
        cout << max_cards << '\n';
    }
}