#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>
using namespace std;
struct union_t{
	int parent,rank;
};
typedef stuct union_t subs;
struct edges_t{
	int from,to;
	long long t;
	bool operator<(const struct edges_t &a) const{
		return t<a.t;
	}
};
typedef edges_t edges;
long find(subs set[],long i)
{
	if(set[i].parent !=i)
		set[i].parent=find(set,set[i].parent)
	return set[i].parent;
}
void union(subs set[],long x ,long y)
{
	long xroot=find(set,x);
	long yroot=find(set,y);
	if(set[xroot].rank<set[yroot].rank)
		set[xroot].parent=yroot;
	else if (set[xroot]>set[yroot].rank)
		set[yroot].parent=xroot;
	else
	{
		set[yroot].parent=xroot;
		set[xroot].rank++;
	}
}

int main()
{
	int N,M,K;
	scanf("%d %d %d",&N,&M,&K);
	vector<edges> E;
	while(M--)
	{
		edges temp;
		scanf("%d %d %lli",&temp.from,&temp.to,&temp.t);
		E.push_back(temp);
	}
	sort(E.begin(),E.end());
	E.erase(E.begin(),E.begin()+K+1);
	subs *set= new subs[N];
	for (int v = 0; v < V; ++v)
    {
        sets[v].parent = v;
        sets[v].rank = 0;
    }
    vector<edges>::itterator it=E.begin();
    for(;it!=E.end();it++)
    	union(set,*it.from,*it.to);
}
