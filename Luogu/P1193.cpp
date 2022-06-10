#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

#define fo(v,a,b) for(ll v=a;v<=b;v++)
#define fr(v,a,b) for(ll v=a;v>=b;v--)

#define foo(v,a,b,c) for(ll v=a;v<=b;v+=c)
#define frr(v,a,b,c) for(ll v=a;v>=b;v-=c)

#define il inline

const int MAXN=1010;
const int MAXM=1010;
const int MAXP=100010;

int judge[4][MAXP],prob[MAXN],stud[MAXM],num[1010][1010],sco[1010][1010],n,m,p,ta,tb,tc,td,a,h,e,r;

ll school,luogu,tea,self;

map <int,int> stu,pro;

int main()
{
    // freopen("1.in","r",stdin);
    // freopen("1.out","w",stdout);
    
    cin>>n>>m;
    fo(i,1,n)
    {
        cin>>prob[i];
        pro[prob[i]]=i;
    }
    fo(i,1,m)
    {
        cin>>stud[i];
        stu[stud[i]]=i;
    }
    cin>>ta>>tb>>tc>>td>>a>>h>>e;
    cin>>r;
    fo(i,1,r)
    {
        cin>>judge[1][i]>>judge[2][i]>>judge[3][i];
    }


    school+=n*ta;
    fo(i,1,r)
    {
        num[stu[judge[2][i]]][pro[judge[1][i]]]++;
        if(e&&sco[stu[judge[2][i]]][pro[judge[1][i]]]<judge[3][i])
        {
            sco[stu[judge[2][i]]][pro[judge[1][i]]]=judge[3][i];
            school+=td;
        }
    }
    fo(i,1,m)
	{
        fo(j,1,n)
        {
            school+=min(tb*num[i][j],ta+tc*num[i][j]);
        }
	}


    luogu=(ta*n+tc*r)*100/a+h;


    cout<<school<<endl;
    cout<<luogu<<endl;
    if(school>luogu)
    {
        cout<<"Use Luogu!";
    }
    else
    {
        cout<<"Forget it...";
    }
    // fclose(stdin);
    // fclose(stdout);
    return 0;
}