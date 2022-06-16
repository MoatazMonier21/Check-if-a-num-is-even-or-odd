#include<iostream>
using namespace std;

enum enNumberType{odd = 1, even = 2};

int readNum(){
    int num;
    cout<<"Please enter your number!"<<endl;
    cin>>num;
    return num;
} // read the number from the console

enNumberType checkNumberType(int num){

    if (num % 2 == 0)
    {
         return enNumberType::even;
    }
    else
    {
        return enNumberType::odd;
    }
} // check either the number is even or odd

void printResult(enNumberType ent){
    if(ent == enNumberType::even){
        cout<<"You entered an even number"<<endl;
    }
    else{
        cout<<"You entered an odd number"<<endl;
    }
} //Print the result

int main(){
printResult(checkNumberType(readNum()));
return 0;
}