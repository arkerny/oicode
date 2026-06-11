#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define il inline
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define lowbit(_x) (_x&-_x)
#define fo(_var,_a,_b) for(int _var=_a;_var<=_b;_var++)
#define fr(_var,_a,_b) for(int _var=_a;_var>=_b;_var--)
#define foo(_var,_a,_b,_c) for(int _var=_a;_var<=_b;_var+=_c)
#define frr(_var,_a,_b,_c) for(int _var=_a;_var>=_b;_var-=_c)

struct node
{
    string name,sex,father,mother;
}a[100010];


int fa[100010],mo[100010];
unordered_map<string, int> book;

string sexx[100010];

int n,k;
int id_cnt;

unordered_set<int> ans[100010];
vector<int> ans2[100010];

int main()
{
    #ifndef ONLINE_JUDGE
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    #endif
    cin>>n;
    fo(i,1,n)
    {
        cin>>a[i].name>>a[i].sex>>a[i].father>>a[i].mother;
        if(book.find(a[i].name)==book.end())
        {
            ++id_cnt;
            book[a[i].name]=id_cnt;
            sexx[id_cnt]=a[i].sex;
        }
        if(book.find(a[i].father)==book.end())
        {
            ++id_cnt;
            book[a[i].father]=id_cnt;
            sexx[id_cnt]="M";
        }
        if(book.find(a[i].mother)==book.end())
        {
            ++id_cnt;
            book[a[i].mother]=id_cnt;
            sexx[id_cnt]="F";
        }
    }
    fo(i,1,n)
    {
        fa[book[a[i].name]]=(a[i].father=="-1"?0:book[a[i].father]);
        mo[book[a[i].name]]=(a[i].mother=="-1"?0:book[a[i].mother]);
    }
    fo(i,1,n)
    {
        queue<pair<int, int> > q;
        q.push(make_pair(book[a[i].name],1));
        ans[book[a[i].name]].insert(book[a[i].name]);
        ans2[book[a[i].name]].push_back(book[a[i].name]);
        while(!q.empty())
        {
            pair<int, int> tt=q.front();
            q.pop();
            if(tt.second>=5)
            {
                continue;
            }
            if(fa[tt.first]!=0)
            {
                q.push(make_pair(fa[tt.first],tt.second+1));
                ans[book[a[i].name]].insert(fa[tt.first]);
                ans2[book[a[i].name]].push_back(fa[tt.first]);
            }
            if(mo[tt.first]!=0)
            {
                q.push(make_pair(mo[tt.first],tt.second+1));
                ans[book[a[i].name]].insert(mo[tt.first]);
                ans2[book[a[i].name]].push_back(mo[tt.first]);
            }
        }
    }
    cin>>k;
    while(k--)
    {
        string str1,str2;
        cin>>str1>>str2;
        if(sexx[book[str1]]==sexx[book[str2]])
        {
            cout<<"Never Mind"<<endl;
        }
        else
        {
            bool flag=1;
            for(auto i:ans2[book[str1]])
            {
                auto it = ans[book[str2]].find(i);
                if(it!=ans[book[str2]].end())
                {
                    printf("No\n");
                    flag=0;
                    break;
                }
            }
            if(flag)
            {
                cout<<"Yes"<<endl;
            }
        }
    }
    
    return 0;
}
