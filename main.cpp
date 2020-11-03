#include <iostream>
using namespace std;
class temperature{
public:
    void fahrenheit(float c){
        float f;
        f = (1.8*c)+32;
        cout << "\nThe Temperature in Fahrenheit is: "<<f<<"\n\a"<<endl;
    }
    void celsius(float f){
        float c;
        c=(f-32)*(0.555555556);
        cout << "\nThe Temperature in Celsius is: "<<c<<"\n\a"<<endl;
    }
};
int main()
{
    while(1){
        temperature convert;
        string x;
        float y=0;
        cout<<"\nType C or F to convert temperature in Celsius or Fahrenheit resp: "<< endl;
        cin>> x;
        if(x=="C" || x=="c"){
            cout<<"Enter temperature in F: ";
            cin>>y;
            convert.celsius(y);
        }else if(x=="F" || x=="f"){
            cout<<"Enter temperature in C: ";
            cin>>y;
            convert.fahrenheit(y);
        }
    }
    return 0;
}
