#include <iostream>
#include <fstream>
#include <iomanip>
#include "Date.hpp"
using namespace std;

int main() {
    Date d1;
    Date d2(2000, 1, 1);
    Date d3(2024, 2, 28);
    
    cout<<d1<<" "<<d2<<" "<<d3<<endl;
    cout<<d1++<<" "<<d2++<<" "<<d3++<<endl;
    cout<<++d1<<" "<<++d2<<" "<<++d3<<endl;
    cout<<"————————————————————————————————\n";
    cout<<d1+5<<" "<<5+d1<<endl;
    cout<<d1-5<<" "<<5-d1<<endl;
    
    ofstream file("test.txt");
    if(file.is_open()){
        file<<d1<<" "<<d2<<" "<<d3<<endl;
        file.close();
    }
    
    return 0;
}
