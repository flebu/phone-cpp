//Maps are Not Necessary. But 4 Learnibf Purposes>>
//Maps are Not Necessary. But 4 Learnibf Purposes>>
//Manage, Edit, Delete and Update Contacts on your phoneBook
 
#include <iostream>
#include <fstream>
#include <map>

using std::cin; 	    using std::string; 
using std::endl;  	    using std::cout;
using std::ofstream; 	using std::ifstream;
using std::map; 	    using std::make_pair;
using std::pair;        using std::ofstream;
using std::ifstream;



string contactName;
  map<string,string> contacts;

  void View(){
      //name to view
      string name;
      cout<<"name to view: " ; 
      cin>>name;
    try{
        contacts.at(name);//name found
        contacts[name];
    }catch(...){
        cout<<"Name not found!";
    }
      
  }
void Edit(){
    string name;
    cout<<"Name to Edit: ";
    cin>>name;
    try{
        string Number;
        contacts.at(name);//name found
        cout<<"Enter New Number: ";
        cin>>Number;
        contacts[name] = Number;
    }catch(...){
        cout<<"Name not found!";
    }
}
void Add() {
    cout<<"\tAdd a contact"<<endl;
    string phoneNumber;
	string name;
	cout<<"enter Phone Name to Add: ";
	cin>>name;
	cout<<"enter Phone Number to Add: ";
	cin>>phoneNumber;
	//is the name not  in the dictionary?
    try{
        contacts.at(name);//name found
        cout<<"Contact exists"<<endl;
    }catch(...){
        contacts.insert(pair<string,string>(make_pair(name,phoneNumber)));
        ofstream file(".contacts" , std::ios::out | std::ios::app);
        if (file.is_open())
        file<<name<<"\t"<<phoneNumber<<std::endl;
        file.close();
    }
}
void Delete(){
    cout<<"\tDelete a contact"<<endl;
    string name;
    cout <<"Name to Delete: ";
    cin>>name;
    try{
        contacts.at(name);
        contacts.erase(name);
        cout<<name<<" Deleted!";
    }catch(...){
        cout<<"Name not found";
    }
}

void handleInput(){//handles what action the user wants to take

  int input;
  cin>>input;

switch(input){
    case 1:
        View();
        break;
    case 2:
        Edit();
        break;
    case 3:
        Delete();
        break;
    case 4:
        Add();
        break;
    }
}
/*
* else if (input==1 || input=="V" )
	  View();
  else if (input==2 || input=="E" )
	  Edit();
  else if (input==4 || input=="U" )
	  Update();
  else if (input==4 || input=="A" )
	  Add();
}*/

/*void Delete(contactName){
  //is the contactName in the phoneBook?
  //if not 
}*/

int main(){
	
  cout<<"\t\t1) View contact"<<endl;
  cout<<"\t\t2) Edit contact"<<endl;
  cout<<"\t\t3) Delete contact"<<endl;
  cout<<"\t\t4) Add contact"<<endl;

  handleInput();
}
