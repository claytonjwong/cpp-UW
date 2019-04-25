/*
 
 Online admissions test
 
 */

#include <iostream>


/*
 
 Question 3.
 What's wrong with this C function?
 
 */

char* getpass()
{
    char password[10];
    scanf("%s\n", password);
    return password;
}

/*
 
 Answer 3: The address returned by getpass() is an address of a local variable "password"
 which only exists in the context of the activation record (stack) for the getpass() function.
 
 */


/*
 
 Write a program that prints the numbers from 1 to 100. But for multiples of three print "Fizz" instead of the number and for multiples of five print "Buzz". For numbers which are multiples of both three and five print "FizzBuzz".
 
 */

#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

class Employee {
public:
    Employee(string firstName, string lastName, string employeeNumber, double salary) :
    myFirstName{ firstName },
    myLastName{ lastName },
    myEmployeeNumber{ employeeNumber },
    mySalary{ salary }
    {
    }
 
private:
    string myFirstName, myLastName, myEmployeeNumber;
    double mySalary;
};


using VS=vector<string>;
class Solution {
public:
    VS fizzBuzz(){
        VS result;
        getNums( 100, result );
        return result;
    }
private:
     void getNums ( int n, VS& result ) {
        getNums( 1, n, {{3,"Fizz"},{5,"Buzz"},{15,"FizzBuzz"}}, result );
    }
    void getNums ( int begin, int end, map<int,string,std::greater<int>>&& hash, VS& result ){
        for (int index = begin; index <= end; ++index )
        {
            string special;
            for (const auto& x: hash) // ordered using std::greater, so 15 is checked before 5 or 3
            {
                if ( index % x.first == 0 ){
                    special = x.second;
                    break;
                }
            }
            special.empty() ?
                result.emplace_back(  to_string( index )  ) :
                result.emplace_back(  std::move( special )  );
        }
    }
};

int main(int argc, const char * argv[]) {
    Solution solution;
    auto res=solution.fizzBuzz();
    return 0;
}
