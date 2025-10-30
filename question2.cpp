#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    string gender;
    string branch;
};

int main() {
   
    Student* arr1 = new Student[100];
   
    for (int i=0; i<100; i++){
        cout<<"Enter the name: ";
        cin>>arr1[i].name;
        cout<<"Enter the age: ";
        cin>>arr1[i].age;
        cout<<"Enter the gender: ";
        cin>>arr1[i].gender;
        cout<<"Enter the branch: ";
        cin>>arr1[i].branch;
    }
    Student arr2[200];
    for(int i=0; i<100; i++){
        arr2[i] = arr1[i];
    }
    delete[] arr1;
    arr1 = nullptr;
    bool contin;
    cout<<"Do you wanna enter the 101st student ?\nEnter yes(y) or no(n): ";
    string response;
    cin>>response;
   
    if(response == "y"){
        contin = true;
    }
    else{
        contin = false;
        cout<<"Ok, got it";
    }
    int i = 100;
    while(contin){
        if(i>199){
            break;
        }
        cout<<"Enter the name: ";
        cin>>arr2[i].name;
        cout<<"Enter the age: ";
        cin>>arr2[i].age;
        cout<<"Enter the gender: ";
        cin>>arr2[i].gender;
        cout<<"Enter the branch: ";
        cin>>arr2[i].branch;
        cout<<endl;
        cout<<"Do you wanna continue giving input?\nEnter yes(y) or no(n): ";
        cin>>response;
        if(response == "y"){
            contin = true;
            i++;
        }
        else{
            contin = false;
            cout<<"Ok, got it";
           
        }
    }
    return 0;
}
