#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m,i,j,k,op,sum=0;
    string s;
    cout<<"Enter the message: ";
    cin>>s;
    cout<<"Enter depth/rails: ";
    cin>>n;
    vector<vector<char>> a(n,vector<char>(s.size(),' '));
    j=0;
    int flag=0;
    cout<<"Enter 0 for encryption and 1 for decryption: ";
    cin>>op;
    if (op == 0)
    {
      for(i=0;i<s.size();i++)
      {
        a[j][i] = s[i];
         if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;

        if(flag==0){
            j++;
        }
        else j--;
      }
     for(i=0;i<n;i++)
      {
         for(j=0;j<s.size();j++)
          {
            if(a[i][j]!=' ')
                cout<<a[i][j];
          }
      }
    cout<<'\n';   
    return 0;
   }

   if (op == 1)
    {
      for(i=0;i<s.size();i++)
      {
        a[j][i] = '0';
         if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;

        if(flag==0){
            j++;
        }
        else j--;
      }
    int temp =0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<s.size();j++){
                if(a[i][j]=='0')
                    a[i][j]= s[temp++];
        }
    }
    flag=0;
    j=0;
    for(i=0;i<s.size();i++){
        cout<<a[j][i];
         if(j==n-1){
            flag=1;
        }
        else if(j==0)
            flag=0;

        if(flag==0){
            j++;
        }
        else j--;
    }
    cout<<'\n';    
    return 0;
   }
}
