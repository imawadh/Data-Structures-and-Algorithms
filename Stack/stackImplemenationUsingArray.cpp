#include<bits/stdc++.h>
using namespace std;

class StackUsingArray{

    public:
        vector<int> v;
        int idx;

        StackUsingArray(){
            v.resize(100);
            idx = -1;
        }


        void push(int val){
            
            if(idx+1>=100){
                cout<<"Stack Over Flow\n";
                return;
            }
            idx++;
            v[idx] = val;
        }

        void pop(){
            if(idx<=-1){
                cout<<"Stack UnderFlow \n";
                return;
            }
            idx--;
        }

        int top(){
            if(idx<=-1){
                cout<<"Stack UnderFlow \n";
                return INT_MIN;
            }
            return v[idx];
        }

        int size(){
            return idx+1;
        }

        bool empty(){
            return idx == -1;
        }
    
    /*
    Data Members ::
        1. Array
        2. size -- we can control this using index variable 
        3. index

    Functions 
        1. Push 
        2. pop
        3. empty()
        4. size
    */

};
int main(){
    StackUsingArray st;

    st.push(5);
    st.push(10);
    st.push(15);

    cout << "Top element: " << st.top() << "\n";  // Should print 15
    st.pop();
    cout << "Top element after pop: " << st.top() << "\n"; // Should print 10
    cout << "Size: " << st.size() << "\n"; // Should print 2
}