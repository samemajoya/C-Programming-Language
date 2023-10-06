#include <iostream>
using namespace std;

int main() {
    int dividend=10;
    int divisor =0;
    int result=0;

    try{
    if(divisor == 0){

        throw "Divison by zero is not allowed.";
    }else{
    result=dividend / divisor;
    cout<<"Result:"<<result<<endl;
    }

    }catch(const char* error){
        cout<<"Error"<<error<<endl;
    }

    return 0;
}

