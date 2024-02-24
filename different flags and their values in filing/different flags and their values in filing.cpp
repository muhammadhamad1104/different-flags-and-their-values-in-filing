#include <iostream>
#include<fstream>
int BinaryConvertion(int);
int main()
{
    int bin_in, bin_out, bin_ate, bin_app, bin_trunc, bin_bin;
    bin_in = BinaryConvertion(std::ios::in);
    std::cout << "Binary in value is : " << bin_in << std::endl;
    bin_out = BinaryConvertion(std::ios::out);
    std::cout << "Binary out value is : " << bin_out << std::endl;
    bin_ate = BinaryConvertion(std::ios::ate);
    std::cout << "Binary ate value is : " << bin_ate << std::endl;
    bin_app = BinaryConvertion(std::ios::app);
    std::cout << "Binary app value is : " << bin_app << std::endl;
    bin_trunc = BinaryConvertion(std::ios::trunc);
    std::cout << "Binary trunc value is : " << bin_trunc << std::endl;
    bin_bin = BinaryConvertion(std::ios::binary);
    std::cout <<"Binary binary value is : " << bin_bin << std::endl;
    std::cout << (std::ios::in) << std::endl;
    std::cout << (std::ios::out) << std::endl;
    std::cout << (std::ios::ate) << std::endl;
    std::cout << (std::ios::app) << std::endl;
    std::cout << (std::ios::trunc) << std::endl;
    std::cout << (std::ios::binary) << std::endl;

    std::cout << (std::ios::in | std::ios::in) << std::endl;
    std::cout << (std::ios::in | std::ios::out ) << std::endl;
    std::cout << (std::ios::in | std::ios::ate ) << std::endl;
    std::cout << (std::ios::in | std::ios::app ) << std::endl;
    std::cout << (std::ios::in | std::ios::trunc ) << std::endl;
    std::cout << (std::ios::in | std::ios::binary) << std::endl;

    std::cout << (std::ios::out | std::ios::out ) << std::endl;
    std::cout << (std::ios::out | std::ios::ate ) << std::endl;
    std::cout << (std::ios::out | std::ios::app ) << std::endl;
    std::cout << (std::ios::out | std::ios::trunc ) << std::endl;
    std::cout << (std::ios::out | std::ios::binary) << std::endl;

    std::cout << (std::ios::ate | std::ios::ate) << std::endl;
    std::cout << (std::ios::ate | std::ios::app) << std::endl;
    std::cout << (std::ios::ate | std::ios::trunc) << std::endl;
    std::cout << (std::ios::ate | std::ios::binary) << std::endl;

    std::cout << (std::ios::app | std::ios::app) << std::endl;
    std::cout << (std::ios::app | std::ios::trunc) << std::endl;
    std::cout << (std::ios::app | std::ios::binary) << std::endl;

    std::cout << (std::ios::trunc | std::ios::trunc) << std::endl;
    std::cout << (std::ios::trunc | std::ios::binary) << std::endl;

    std::cout << (std::ios::binary | std::ios::binary) << std::endl;


    std::cout << (std::ios::in| std::ios::out| std::ios::ate| std::ios::app| std::ios::trunc| std::ios::binary) << std::endl;
}
int BinaryConvertion(int decimal) {
    int binary=0;
    int rem = 0;
    int power = 1;
    //let decimal=8;
    while (decimal != 0) { //8!=0,!=0,!=0,!=0,=0
        rem = decimal % 2; //rem=0,0,0,1
        binary += rem * power;//0,0,0,1000
        power *= 10;       //10,100,100,1000
        decimal /= 2;      //decimal=4,2,1,0
    }
    return binary;
}