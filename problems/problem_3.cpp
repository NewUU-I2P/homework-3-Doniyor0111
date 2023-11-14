#include <string>

std::string problemSolution3(float height, char S) {
    // write your code here

    // use return to return your result
    // make use of control flow statements
}
#include <iostream>

using namespace std;
int main() {
    char sex;
    float hight;
    cout << "Sex?"<<endl;
    cin>>sex;
    cout << "High?" <<endl;
    cin>> high;

    if (sex == 'M' && hight < 1.7){
        cout << "Short"<<endl;
    }
    else if (sex == 'M' && hight >= 1.7 && hight < 1.85){
        cout << "Normal "<<endl;
    }
    else if (sex == 'M' && hight >= 1.85){
        cout << "Tall" <<endl;
    }
    else if (sex == 'F' && hight < 1.6){
        cout << "short"<<endl;
    }
    else if (sex == 'F' && hight >= 1.6 && hight < 1.75){
        cout << "Normal"<<endl;
    }
    else if (sex == 'F' && hight >= 1.75){
        cout << "tall"<<endl;
    }


    return 0;
}
