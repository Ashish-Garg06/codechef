// Write out the syntax in the blanks below

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    // accept the count of test cases given in the the 1st line
    cin >> t;
    // Run a loop to accept 't' inputs
    for (int i = 0; i < t; i++)
    {
        int A, B;
        string S;
        // accept 2 integers on the 1st line of each test case
        cin >> A >> B;
        // accept 1 string on the 2nd line of each test case
        cin >> S;
        // output the 5 integers on a single line for each test case
        cout << A << " " << B << " " << S << endl;
    }
    return 0;
}