#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main ()
{
    vector <string> fizzBuzz;  // Vector to store the results
    for (int i = 1; i <= 100; i++)  // Loop through numbers from 1 to 100
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            fizzBuzz.push_back("FizzBuzz");
        }
        else if (i % 3 == 0) {
            fizzBuzz.push_back("Fizz");
        }
        else if (i % 5 == 0)
        {
            fizzBuzz.push_back("Buzz");
        }
        else
        {
            fizzBuzz.push_back(to_string(i));  // Convert number to string
        }
    }
    for (const string& result : fizzBuzz)   // Print the results stored in the vector
    {
        cout << result << " ";
    }
    return 0;
}