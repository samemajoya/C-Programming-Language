#include <iostream>
using namespace std;

int main() {
    int score;
    cout<<"Enter your exam score:";
    cin>> score;

    bool isPassing = (score>=60);

    if(isPassing){
        cout<<"Congratulations! you have passed the exam."<<endl;

    }else{
     cout<<"Sorry,you did not pass the exam.please try again."<<endl;
    }

    return 0;
}

