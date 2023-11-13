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
            const double fixamount = 13;
    const double first30 = 0.4;
   const  double sec20 = 0.12;
   const  double thr10 = 1.4;
   const  double add = 1.5;
    int cost;
    cout<<"Consuption = "<<endl;
    std::cin>>cost;


    if (cost <= 30){
        cout<< double (fixamount + first30 * cost) << endl;
    }
    else if (cost <= 50){
        cout << double ( fixamount + first30 * 30 + (cost - 30) * sec20) << endl;
    }
    else if (cost <= 60){
        cout << double ( fixamount + first30 * 30 + sec20 * 20 + (cost - 50) * thr10) << endl;
    }
    else {
        cout << double ( fixamount + first30 * 30 + sec20 * 20 + thr10 * 10 + (cost - 60) * add) << endl;
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
            char sex;
    double high;
    cout << "Sex?"<<endl;
    cin>>sex;
    cout << "High?" <<endl;
    cin>> high;

    if (sex == 'm' && high < 1.7){
        cout << "Short"<<endl;
    }
    else if (sex == 'm' && high >= 1.7 && high < 1.85){
        cout << "Normal "<<endl;
    }
    else if (sex == 'm' && high >= 1.85){
        cout << "Tall" <<endl;
    }
    else if (sex == 'f' && high < 1.6){
        cout << "short"<<endl;
    }
    else if (sex == 'f' && high >= 1.6 && high < 1.75){
        cout << "Normal"<<endl;
    }
    else if (sex == 'f' && high >= 1.75){
        cout << "tall"<<endl;
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
