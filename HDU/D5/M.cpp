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

int n;

struct node
{
    int val;
    node *le, *ri;
    node(int x) : val(x),le(nullptr),ri(nullptr) {}
};

node* insert(node* root, int val)
{
    if(!root) return new node(val);
    if(val>root->val)
    {
        root->le = insert(root->le,val);
    }
    else
    {
        root->ri = insert(root->ri, val);
    }
    return root;
}

bool fun(node* root,vector<int>& ans)
{
    queue<node*>q;
    q.push(root);
    bool is_null = false;
    bool null2 = true;
    while(!q.empty())
    {
        node* tt = q.front();
        q.pop();
        if(!tt)
        {
            is_null = true;
            continue;
        }
        if(is_null)
        {
            null2= false;
        }
        ans.push_back(tt->val);
        q.push(tt->le);
        q.push(tt->ri);
    }
    
    return null2;
}


int main()
{
    #ifndef ONLINE_JUDGE
    // freopen(".in","r",stdin);
    // freopen(".out","w",stdout);
    #endif

    cin>>n;
    node* root = nullptr;
    fo(i,1,n)
    {
        int tmp;
        cin>>tmp;
        root=insert(root, tmp);
    }
    vector<int> ans;
    bool is_ok=fun(root,ans);
    bool flag=0;
    for(auto i:ans)
    {
        if(flag)
        {
            cout<<' ';
        }
        flag=1;
        cout<<i;
    }
    cout<<endl;
    printf(is_ok?"YES":"NO");

    return 0;
}
