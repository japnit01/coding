#include <bits/stdc++.h>
using namespace std;

string xor1(string a, string b)
{

    string result = "";

    int n = b.length();

    for (int i = 1; i < n; i++)
    {
        if (a[i] == b[i])
            result += "0";
        else
            result += "1";
    }
    return result;
}

string mod2div(string divident, string divisor)
{

    int pick = divisor.length();

    string tmp = divident.substr(0, pick);

    int n = divident.length();

    while (pick < n)
    {
        if (tmp[0] == '1')

            tmp = xor1(divisor, tmp) + divident[pick];
        else

            tmp = xor1(std::string(pick, '0'), tmp) + divident[pick];

        pick += 1;
    }

    if (tmp[0] == '1')
        tmp = xor1(divisor, tmp);
    else
        tmp = xor1(std::string(pick, '0'), tmp);

    return tmp;
}

void encodeData(string data, string key)
{
    int l_key = key.length();

    int stind = 0;
    for(int i=0;i<data.size();i++){
        if(data[i] == '0')
        {
            stind++;
        }
    }

    string s = data.substr(stind,(data.size() - stind));

    string appended_data = (data + std::string(l_key - 1, '0'));

    string remainder = mod2div(appended_data, key);

    string codeword = data + remainder;
    cout << "Remainder : "
         << remainder << "\n";
    cout << "Encoded Data (Data + Remainder) :"
         << codeword << "\n";
}

int main()
{
    string data = "0000011011111111111111110010";
    string key = "10011";

    encodeData(data, key);

    return 0;
}