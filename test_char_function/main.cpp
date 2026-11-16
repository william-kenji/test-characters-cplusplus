#include <iostream>
#include <cctype>
// you could do this with strings - you would `#include <string>` and also update line 6 to use a string
using namespace std;

void count(const char* str, int size) // a c-string is a constant character pointer
{
    int digits = 0, uppercase = 0, lowercase = 0, alphabetic = 0;
    for (int c = 0; c < size; c++)
    {
        if (isdigit(str[c]))
            digits++;
        if (isupper(str[c]))
            uppercase++;
        if (islower(str[c]))
            lowercase++;
        if (isalpha(str[c]))
            alphabetic++;
    }

    cout << "Digits in the string: " << digits << endl << "Uppercase characters in the string: " << uppercase << endl << "Lowercase characters in the string " << lowercase << endl << "Total Alphabetic characters in the string: " << alphabetic << endl << endl;

}

int main()
{
    count("Iam@coding2day4myself", 22); // 21 characters, but remember \0 terminator in c-strings
    return 0;
}