#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream listPay;
    listPay.open("ListPay.txt");
    std::string maxName;
    std::string maxFamily;
    long long maxSum = 0;
    std::string maxDate;
    long long total = 0;

    while (!listPay.eof()){
        std::string name;
        std::string family;
        long long sum;
        std::string date;

        listPay >> name;
        listPay >> family;
        listPay >> sum;
        listPay >> date;
        total+=sum;
        if(maxSum < sum){
            maxName = name;
            maxFamily = family;
            maxSum = sum;
            maxDate = date;
        }
    }
    std::cout << "Total sum is " << total << std::endl;
    std::cout << "Maximum payment: " << maxName << " " << maxFamily << " " << maxSum <<" "<< maxDate << std::endl;



    return 0;
}
