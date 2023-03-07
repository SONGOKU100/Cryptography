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