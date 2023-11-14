void problemSolution1(float consumed_water) {
    float cost;
    // write your code here
    #include <iostream>

using namespace std;
int main () {
    double fixamount = 13;
    double first30 = 0.4;
    double sec20 = 0.12;
    double thr10 = 1.4;
    double add = 1.5;
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


    return 0;
}

