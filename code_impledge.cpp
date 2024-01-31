#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;
#define kab int kab;cin>>kab;while(kab--)
#define insert push_back
#define wl(i,n) for (int i=0;i<n;i++)
#define miss(i,x,n) for (int i=x;i<n;i++)
#define fo(n,i) for (int i=n-1;i>=0;i--)
#define br cout<<endl
#define vi vector<int>
#define ff first
#define ss second
#define vb vector<bool>
#define vll vector<long long>
#define vvll vector<vll>
#define vs vector<string>
#define msi map<string,int>
#define mint map<int,int>
#define pint pair<int,int>
# define len 1001
int min(int a,int b){return (a<b)?a:b;}
int max(int a,int b){return (a>b)?a:b;}
#define all(x) x.begin(), x.end()
#define mod 1000000007

bool comp(string &m,string &n){
    if(m.size()!=n.size()) return m.size()<n.size();
    else return m<n;
}
void func(){
    string str1;
    vector<string> res;

    unordered_set<string> visited;

    while(cin >> str1){
        res.push_back(str1);
        visited.insert(str1);
    }
        string st1,st2;

        sort(res.begin(),res.end(),comp);

        int sz=res.size()-1;

        vector<bool> dp(len);

        while(sz>-1){

          string &st = res[sz--];
          int k = st.size();

          string localstr;

        fill(dp.begin(),dp.end(),false);

          for(int i=0; i<k; i++){

            localstr="";

            for(int p=0;p<=i;p++){

                if(visited.count(st.substr(p,i-p+1))){

                    if(p==0 && i!=k-1 ){
                        dp[i]=true;
                        break;

                    }
                    else if(p>=1 && dp[p-1]){
                        dp[i]=true;
                        break;

                    }

                }
            }
            }

            if(dp[k-1]==true){

                if(st1.empty()==true) st1=st;

                else if(st2.empty()==true) st2=st;

                else break;
          }

        }

        cout<<"Longest compound word : " << st1 << "\n";

        cout<<"Second longest compound word : " << st2;

}

int main()
{   ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    auto begin = high_resolution_clock::now();

    kab{

        func();

        cout << "\n";
    }

   auto end = high_resolution_clock::now();

   auto dur = duration_cast <milliseconds> (end - begin);

   cout<<"Time taken to process input file : "<< dur.count() << " milliseconds";
}
