#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    char input;
    // isalpha() will return true/false if the character is alphabetic or not:
    if(isalpha('w'))
    {
        cout << "It is alphabetic\n";
    }
    else
    {
        cout << "It is not alphabetic\n";
    }


    // isalnum() will return true/false if the character is a-z OR 0-9:

    cout << "It " << (isalnum('8') ? "is" : "is not") << " alphanumeric\n";


    // isdigit() will return true/false if the character is 0-9:
    cin >> input;
    cout << "It " << (isdigit(input) ? "is" : "is not") << " a digit\n";


    // islower() returns true/false if the character is *lowercase*:
    cin >> input;
    cout << "It " << (islower(input) ? "is" : "is not") << " lowercase\n";


    // isupper() returns true/false if the character is *uppercase*:
    cin >> input;
    cout << "It " << (isupper(input) ? "is" : "is not") << " UPPERCASE\n";


    // isprint() returns true/false if the character is printable or not:
    cout << "It " << (isprint(7) ? "is" : "is not") << " printable\n";


    // ispunct() returns true/false if the character is a punctuation character or not:
    cin >> input;
    cout << "It " << (ispunct(input) ? "is" : "is not") << " a punctuation character\n";


    // isspace() returns true/false if the character is a white space:
    cout << "It " << (isspace('\t') ? "is" : "is not") << " a whitespace\n";


    cout << char(2) << char(7);
    return 0;
}