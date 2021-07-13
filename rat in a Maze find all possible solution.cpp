
#include <bits/stdc++.h>
#define list vector<int>
using namespace std;


 // } Driver Code Ends
// User function template for C++

class Solution{
    public:
    bool issafe(vector<list> &m, int i,int j,int n){
        return (i<n && j<n && i>=0 &&j>=0 && m[i][j]==1 );
    }
    bool ss(vector<list> &m,int i,int j,int n,string s,vector<string>&res){
        if(i==n-1 and j==n-1 and m[i][j]==1){
           // s+="1";
           res.push_back(s);
            return true;
        }
        if(issafe(m,i,j,n))
    //DDDDRRRR DDDDRRRULLURRRDD DDDDRRRULLURRULLURRRDDDD DDDDRRRULLURRULURRDDDD DDDDRRRULLURRURDDD DDDDRRRULLURRUURDDDD DDDDRRRULLURULURRDDRDD DDDDRRRULLURULURRDRDDD DDDDRRRULLURULURRRDDDD DDDDRRRULLURULURRRDLDRDD DDDDRRRULLURURDRDD DDDDRRRULLURURRDDD DDDDRRRULLURURURDDDD DDDDRRRULLURUURDDRDD DDDDRRRULLURUURDRDDD DDDDRRRULLURUURRDDDD DDDDRRRULLURUURRDLDRDD DDDDRRRULLUURDRRDD DDDDRRRULLUURDRURDDD DDDDRRRULLUURDRUURDDDD DDDDRRRULLUURRDRDD DDDDRRRULLUURRRDDD DDDDRRRULLUURRURDDDD DDDDRRRULLUURURDDRDD DDDD.................
        
        {   m[i][j]=0;
            ss(m,i+1,j,n,s+'D',res);
            ss(m,i-1,j,n,s+'U',res);
            ss(m,i,j+1,n,s+'R',res); 
            ss(m,i,j-1,n,s+'L',res); 
            m[i][j]=1;
        }
        return false;
    }
    vector<string> findPath(vector<list > &m, int n) {
        // Your code goes here
        string s="";
        vector<string> v;
        ss(m,0,0,n,s,v);
        
        sort(v.begin(),v.end());
       // reverse(s.begin(),s.end());
        
       // v.push_back(s);
        return v;
    }
};

    


// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<list> m(n, vector<int> (n,0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> m[i][j];
            }
        }
        Solution obj;
        vector<string> result = obj.findPath(m, n);
        if (result.size() == 0)
            cout << -1;
        else
            for (int i = 0; i < result.size(); i++) cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
