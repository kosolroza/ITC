#include<iostream>
#include<set>
using namespace std;
int main(){
    set<int> numbers;
    int operation,value,oldValue,newValue;
    while(true){
        cout<<"==================CRUD OF SET=================="<<endl;
        cout<<"1.Create"<<endl; //Add element
        cout<<"2.Read"<<endl;   //View added element
        cout<<"3.Update"<<endl;  // Update old element by replace it with the new one
        cout<<"4.Delete"<<endl; // Delete element
        cout<<"5.Exit"<<endl; // close system
        cout<<"==================THE END OF OUR DEMO=================="<<endl;
        cout<<"Please select the number:"<<endl;
        cin>>operation;
        switch(operation){
            //CREATE
            case 1:
            cout<<"Enter the value:"<<endl;
            cin>>value;
            if(numbers.find(value)==numbers.end()){
                numbers.insert(value);
                cout<<"number inserted sucessfully"<<endl;

            }
            else{
                cout<<"value already existed"<<endl;

            }
            break;
            //READ
            case 2:
            cout<<"insert element:"<<endl;
            if(numbers.empty()){
                cout<<"[empty]"<<endl;

            }
            else{
                for(int num :numbers){
                    cout<< num <<endl;
                }
               
            cout<<endl;
        }
        break;
        //UPDATE
           case 3:
           cout<<"Enter the old value you want to change:";
           cin>>oldValue;
           if(numbers.find(oldValue)!=numbers.end()){
            cout<<"Enter new value"<<endl;
            cin>> newValue;
           numbers.erase(oldValue);
           numbers.insert(newValue);
           cout<<"Value deleted sucessfully"<<endl;
           }
           else{
            cout<<"Value not found"<<endl;

           }
           break;
        //DELETE
        case 4:
        cout<<"Insert value you want to delete:"<<endl;
        cin>>value;
        if(numbers.find(value)!=numbers.end()){
            numbers.erase(value);
            cout<<"value delete sucessfully"<<endl;

        }
        else{
            cout<<"Invalid number"<<endl;

        }
        break;
        case 5:
        cout<<"Exiting the program."<<endl;
        return 0;
        default:
        cout<<"Invalid operation."<<endl;
    }
    
}
return 0;
}
