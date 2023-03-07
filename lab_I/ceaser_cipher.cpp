//lab 1.1 Ceasar Cipher

#include<iostream>
#include<cctype>
#include<string>

using namespace std;

string encrypt(string inp){
	for(int i=0;i<inp.length();i++){
		if(!isspace(inp[i]))
			inp[i]=inp[i]+3;
	}
	return inp;
}

string decrypt(string inp){
	for(int i=0;i<inp.length();i++){
		if(!isspace(inp[i]))
			inp[i]=inp[i]-3;
	}
	return inp;
}

int main(){
	string plain,cipher;
	cout<<"Enter the plain text: ";
	getline(cin,plain);
	cout<<endl<<"After Encryption: ";
	cipher = encrypt(plain);
	cout<<cipher;
	cout<<endl<<"After Decryption: ";
	plain = decrypt(cipher);
	cout<<plain;
}

/* only works for capital
 letters and without spacing
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i, n, key;
    string plaintext, cipherText;
    cout << "Enter 0 for encrypt and 1 for decrypt: ";
    cin >> n;
    if (n == 0)
    {
        cout << "Enter the key: ";
        cin >> key;
        cout << "Enter the plaintext: ";
        cin >> plaintext;
        for (i = 0; i < plaintext.size(); i++)
        {
            cipherText += (plaintext[i] - 'A' + key) % 26 + 'A';
        }
        cout << "The CipherText is " << cipherText;
    }
    else if (n == 1)
    {
        cout << "Enter the key: ";
        cin >> key;
        cout << "Enter the ciphertext: ";
        cin >> cipherText;
        for (i = 0; i < cipherText.size(); i++)
        {
            plaintext += (cipherText[i] - 'A' - key + 26) % 26 + 'A';
        }
        cout<<"The Plaintext is "<<plaintext<<endl;
    }
    else
    {
        cout << "choose valid option!!!!" << endl;
    }
    return 0;
}

*/
