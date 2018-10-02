
#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <hash_map>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    string Name;
    long PhoneNum;
    cin>>N;
    cin.ignore();

    map<string,long> myMap;
    for(int i=0; i<N; i++)
        {
            cin>>Name;
            cin>>PhoneNum;
            myMap[Name] = PhoneNum;
    }

    while(cin>>Name){
        if(myMap.find(Name) != myMap.end()){
            cout<<Name<<"="<<myMap.find(Name)->second<<endl;
        }
        else{
            cout<<"Not found"<<endl;
        }
    }

    return 0;
}
