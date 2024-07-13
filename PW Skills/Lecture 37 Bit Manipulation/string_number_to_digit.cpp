# include <bits/stdc++.h>
using namespace  std;
void extractDigit(string str)
{
    for(int i =0; i<str.size(); i++)
    {
        cout<<str[i]-'0'<<' '; // This means that we  are to each and every character in string and subtracting ascii value of 0 from it ...

        // ! suppose the number is 48 then , alscii value of 4 and ascci value of 8 is being stored in the ram in binary form then we subtacting ascii value of 0 from it as 

        // int val = '4' - '0'
        // ? we get the the integer value to be 4 binary substraction
    }
}
int main()
{
    string str;
    cin>>str;
    extractDigit(str);


} 
