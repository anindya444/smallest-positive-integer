#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{  vector<int>a={-1,0,1,2,3,7};
int res=0;
   sort(a.begin(),a.end());
 for(int i=0;i<a.size();i++){
    if(a[i]==res)
    res++;
    else if(a[i]>res)
    break;
 }

cout<<res; 

}
