#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    string message;
    cout<<"Enter the message: ";
    cin>>message;
    string key;
    cout<<"Enter the key: ";
    cin>>key;
    int mod = key.size();
    j=0;
    for(i=key.size();i<message.size();i++){
        key+=key[j%mod];
        j++;
    }
    string cipherText="";
    for(i=0;i<message.size();i++){
        cipherText += (key[i]-'A'+message[i]-'A')%26+'A';
    }
    cout<<"Encrypted message: "<<cipherText<<'\n';
    
    return 0;
}