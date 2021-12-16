#include<iostream>
#include<string>
#include<cmath>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
    ifstream source;
    string text;
    double sum_x=0,sum_x2=0,n=0;
    source.open("score.txt");
    while(getline(source,text)){
        n++;
        sum_x+=atof(text.c_str());
        sum_x2+=pow(atof(text.c_str()),2);
    }
    cout << "Number of data = " << n << "\n";
    cout << setprecision(3);
    cout << "Mean = " << sum_x/n << "\n";
    cout << "Standard deviation = " << sqrt((sum_x2/n)-pow((sum_x/n),2));
    source.close();
    return 0;
}