//Manage, Edit, Delete and Update Contacts on your phoneBook
 
#include <iostream>
#include <fstream>
#include <map>

using std::cin; 	using std::string; 
using std::endl;  	using std::cout;
using std::ofstream; 	using std::ifstream;
using std::map; 	using std::pair;



string contactName;
  map<string,int> contacts;

void Add() {
     	int phoneNumber;
	string name;
	cout>>"enter Phone Name to Add: ";
	cin<<name;
	cout<<"enter Phone Number to Add: ";
	cin>>phoneNumber;
	//is the name not  in the dictionary?
	if (contacts.find(name)!=contacts.end()){
		contacts.insert(pair<string,int>(name,phoneNumber));
	}else
		cout<<"A contact with a similar name exists"<<endl;

  
}

void handleInput(string c){//handles what action the user wants to take

  int input;
  cin>>input;

  if (input=='A' || input==5){//add items to the phoneBook 
    Add();
  }
/*
  if (input==3 || input=="D" ){
	  cout<<"\tselected Delete. Enter the Name to Delete: ";
	  cin >>contactName;	//sets the global variable contactName
	  Delete(contactName);
  }
* else if (input==1 || input=="V" )
	  View();
  else if (input==2 || input=="E" )
	  Edit();
  else if (input==4 || input=="U" )
	  Update();
  else if (input==5 || input=="A" )
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
  cout<<"\t\t4) Update contact"<<endl;
  cout<<"\t\t5) Add contact"<<endl;

  handleInput(contactName);
}
