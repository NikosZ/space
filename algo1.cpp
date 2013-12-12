#include <iostream>
#include <vector>
#include <stdlib.h>
#include <algorithm>
using namespace std;
struct student_t{
long x;
long y;
};
typedef struct student_t student;
long dist(student a,student b)
{
        return (abs(a.x-b.x) + abs(a.y-b.y));}
long minelement(long a[],int n)
{
    long temp=a[0];
    for(int i=0;i<n;i++)
        if(temp>a[i])
        temp=a[i];
    return temp;
}
long easy_sol(vector<student> st,int n)
{
    long *d= (long *)calloc(n,sizeof(long));
    for(int i=0;i<n;i++)
        for(vector<student>::iterator it;it!=st.end();it++)
        {
            d[i]+=dist(st[i],*it);
        }
    return minelement(d,n);
}
int main()
{
    int n;
    cin>>n;
    vector<student> newlist;
    int k=n;
    while(n--)
    {
        student temp;
        cin>>temp.x>>temp.y;
        newlist.push_back(temp);
    }
    cout<<easy_sol(newlist,k)<<endl;
    return 0;
}
