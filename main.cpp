#include <iostream>
#include "problems/problem_1.cpp"
#include "problems/problem_2.cpp"
#include "problems/problem_3.cpp"
#include "problems/problem_4.cpp"
#include "problems/problem_5.cpp"

using namespace std;

int main() {
    cout << "Problem 1\n";
    problemSolution1(
  
    const double fixed_amount = 13.0;
    const double rate_first_30m3 = 0.4;
    const double rate_next_20m3 = 0.12;
    const double rate_next_10m3 = 1.4;
    const double rate_additional = 1.5;

    // Variables
    double consumption, total_cost;

    // Input
    cout << "Enter water consumption in cubic meters: ";
    cin >> consumption;

    // Calculation
    if (consumption < 0) {
        cout << "Water consumption cannot be negative." << endl;
    } else {
        total_cost = fixed_amount;

        if (consumption > 30) {
            total_cost += 30 * rate_first_30m3;
        } else {
            total_cost += consumption * rate_first_30m3;
            cout << "The total cost for " << consumption << " cubic meters is: $" << total_cost << endl;
            return 0;
        }

        if (consumption > 50) {
            total_cost += 20 * rate_next_20m3;
        } else {
            total_cost += (consumption - 30) * rate_next_20m3;
            cout << "The total cost for " << consumption << " cubic meters is: $" << total_cost << endl;
            return 0;
        }

        if (consumption > 60) {
            total_cost += 10 * rate_next_10m3;
        } else {
            total_cost += (consumption - 50) * rate_next_10m3;
            cout << "The total cost for " << consumption << " cubic meters is: $" << total_cost << endl;
            return 0;
        }

        total_cost += (consumption - 60) * rate_additional;

        // Output
        cout << "The total cost for " << consumption << " cubic meters is: $" << total_cost << endl;
    } 
    );
    cout << "Problem 2\n";
    problemSolution2(
            double a, b, c;
    cin>>a;
    cin>>b;
    cin>>c;

    if ( a > b && a>c){
        cout << "Maximum number is "<<a<<endl;
    }
    else if ( b > a && b > c){
        cout << "Maximum number is "<<b <<endl;

    }
    else {
        cout << "Maximum number is "<<c <<endl;
    }
    );
    cout << "Problem 3\n";
    problemSolution3(
       #include <iostream>
#include <string>

int main() {
    char sex;
    double height;

    // Read sex
    std::cout << "Enter sex (M/F): ";
    std::cin >> sex;

    // Read height
    std::cout << "Enter height (m): ";
    std::cin >> height;

    // Determine description based on sex and height
    std::string result;

    if (sex == 'M' || sex == 'm') {
        if (height < 1.70)
            result = "Short";
        else if (height >= 1.70 && height < 1.85)
            result = "Normal";
        else
            result = "Tall";
    } else if (sex == 'F' || sex == 'f') {
        if (height < 1.60)
            result = "Short";
        else if (height >= 1.60 && height < 1.75)
            result = "Normal";
        else
            result = "Tall";
    } else {
        // Invalid sex input
        std::cerr << "Invalid input for sex. Please enter 'M' or 'F'." << std::endl;
        return 1; // Exit with an error code
    }

    // Display the result
    std::cout << "Result: " << result << std::endl;

    return 0;
}

    );
    cout << "Problem 4\n";
    problemSolution4(   std::cout << "Enter MAC address (in x:x:x:x:x:x format): ";
    std::string macAddress;
    std::getline(std::cin, macAddress);

    std::stringstream ss(macAddress);
    std::string hexNumber;
    int firstOctet;

    std::getline(ss, hexNumber, ':');
    std::stringstream(hexNumber) >> std::hex >> firstOctet;


    std::string addressType;
    if (firstOctet % 2 == 0) {
        addressType = "Unicast";
    } else if (firstOctet == 0xFF) {
        addressType = "Broadcast";
    } else {
        addressType = "Multicast";
    }

    std::cout << "Address Type: " << addressType << std::endl;);
    cout << "Problem 5\n";
    problemSolution5( char operation;
    double num1, num2, result;


    cout << "Enter an arithmetic operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':

            result = num1 / num2;

            break;
        default:
            cout << "Error: Invalid operation." << endl;
            return 1;
    }

    cout << "Result: " << result << endl;);
    return 0;
}
