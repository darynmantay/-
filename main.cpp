#include <bits/stdc++.h>

using namespace std;



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,a[1111];

    cin>>n;
    vector<int> dp(n+3,1);
    for(int i=1;i<=n;i++)
        cin>>a[i];
    int ans=0;
    for(int i=1;i<=n;i++)
        for(int j=1;j<i;j++){
            if(a[i]>a[j])
                dp[i]=max(dp[i],dp[j]);
            ans=max(ans,dp[i]);
        }
    cout<<ans;
    return 0;
}
