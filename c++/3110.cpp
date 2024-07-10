/*
Name: Sayed Hasan Emon
University: Green University of Bangladesh
Subject: Computer Science & Engineering
Year: 3rd
Date of Submission: 10-07-24
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int scoreOfString(string s)
    {
        int n = s.length(), i, sub, add = 0;
        int arr[n];
        for (i = 0; i < n; i++)
        {
            switch(s[i])
            {
                case 'a':
                    arr[i] = 97;
                    break;
                case 'b':
                    arr[i] = 98;
                    break;
                case 'c':
                    arr[i] = 99;
                    break;
                case 'd':
                    arr[i] = 100;
                    break;
                case 'e':
                    arr[i] = 101;
                    break;
                case 'f':
                    arr[i] = 102;
                    break;
                case 'g':
                    arr[i] = 103;
                    break;
                case 'h':
                    arr[i] = 104;
                    break;
                case 'i':
                    arr[i] = 105;
                    break;
                case 'j':
                    arr[i] = 106;
                    break;
                case 'k':
                    arr[i] = 107;
                    break;
                case 'l':
                    arr[i] = 108;
                    break;
                case 'm':
                    arr[i] = 109;
                    break;
                case 'n':
                    arr[i] = 110;
                    break;
                case 'o':
                    arr[i] = 111;
                    break;
                case 'p':
                    arr[i] = 112;
                    break;
                case 'q':
                    arr[i] = 113;
                    break;
                case 'r':
                    arr[i] = 114;
                    break;
                case 's':
                    arr[i] = 115;
                    break;
                case 't':
                    arr[i] = 116;
                    break;
                case 'u':
                    arr[i] = 117;
                    break;
                case 'v':
                    arr[i] = 118;
                    break;
                case 'w':
                    arr[i] = 119;
                    break;
                case 'x':
                    arr[i] = 120;
                    break;
                case 'y':
                    arr[i] = 121;
                    break;
                case 'z':
                    arr[i] = 122;
                    break;
            }
        }
        for (i = 0; i < n; i++){

            if (i == n-1){
                break;
            }
            else if (arr[i] < arr[i+1]){
                sub = arr[i+1] - arr[i];
                add += sub;
            }
            else{
                sub = arr[i] - arr[i+1];
                add += sub;
            }
        }
        return add;
    }
};
/*   
int main()                   // this section only for testing the code in an IDE.
{
    string s;
    int a;
    cin >> s;                
    Solution s1;          
    s1.scoreOfString(s);    
    a = s1.scoreOfString(s); 
    cout << a << endl;
    return 0;
}
*/
