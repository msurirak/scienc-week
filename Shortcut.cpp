#include <iostream>
#include <string>
using namespace std;
int main() {
    int amount;
    cout<<"amount of questions : ";
    cin>>amount;
    string result[amount],string;
    for(int i = 0;i < amount;i++){
        result[i] = "{ id: " + i + "}"; 
    }
    cout<<result;
}