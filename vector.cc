//Create
#include<iostream>
#include<vector>
using namespace std;
int main(){
    system("cls");
    
    vector<string> vec;
    vec.push_back("Onichan");
    vec.push_back("Balmon");
    vec.push_back("Jakya");
    cout<<"After Create : ";
    for (auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}

//Read

int main(){
    vector<string> vec = {"Abatakam","Nana","JoJo"};

    cout<<"Read elements : ";
    for(auto val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    cout<<"First elements : "<<vec[0]<<endl;
    cout<<"Second elements : "<<vec[1]<<endl;

    return 0;
}

//Update


int main(){

    vector<string> vec = {"Sey","Skunakunarit","Chanchav"};

    vec[0] = "Oppa";
    cout<<"After Update : ";
    for(auto val : vec ){
        cout<<val<<" ";
    }
    cout<<endl;

    return 0;
}

//Delete


int main(){
    vector<char>vec = {'A','B','C'};

    vec.erase(vec.begin()+1);
    cout<<"After Delete : ";
    for (auto val : vec ){
        cout<<val<<" ";
    } 
    cout<<endl;
    return 0;
}

