//Manage, Edit, Delete and Update Contacts on your phoneBook
 
#include <iostream>
#include <fstream>

using std::cin;
using std::string;
using std::getline;
using std::ofstream;
using std::ifstream;
using std::cout;

string contactName;
string handleInput(){		//handle what action the user wants to take
  auto input;
  cin>>input;
  if (input==3 || input=="D" ){
	  cout<<"\tselected Delete. Enter the Name to Delete: ";
	  cin >>contactName;	//sets the global variable contactName
	  Delete(contactName);
  }
 /* else if (input==1 || input=="V" )
	  View();
  else if (input==2 || input=="E" )
	  Edit();
  else if (input==4 || input=="U" )
	  Update();
  else if (input==5 || input=="A" )
	  Add();
}*/

void Delete(contactName){
  //is the contactName in the phoneBook?
  //if not 
}

int main(){
  cout<<"\t\t1) View contact"<<endl;
  cout<<"\t\t2) Edit contact"<<endl;
  cout<<"\t\t3) Delete contact"<<endl;
  cout<<"\t\t4) Update contact"<<endl;
  cout<<"\t\t5) Add contact"<<endl;
}
