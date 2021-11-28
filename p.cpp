/*creating a username and password and verifying it whenever
we are login in the app*/
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
 cout<<"Hello welcome to the App"<<endl;
 cout<<"Please create a New account"<<endl;
 cout<<"Choose a User Name"<<endl;
 string user;
 getline(cin,user);/*declaring "user" and taking input and type of input is "string user" with help of getline function getlinne function we are using beacuse we are working with string*/
 cout<<"Choose a Password : "<<endl;
 string pass;
 getline(cin,pass);
 
 cout<<"Please enter your information"<<endl;
 cout<<"Username : "<<endl;
 string username;
 getline(cin,username);
 cout<<"Password"<<endl;
 string password;
 getline(cin,password);
 
 //checking that user id and password is correct or not   
 
 while(username!=user||password!=pass)
 {
  cout<<"Worng Usser Id Or Password\n Please try again"<<endl;
  cout<<"Username"<<endl;
  getline(cin,username);
  cout<<"Password"<<endl;
  getline(cin,password);  
 }
 cout<<"Welcome to the App"<<endl;
 /*
  Now our user id or password is correct and we are enter in the app 
  and app is bassicaly burger app that will be used to order,a burger or
   coffee or whatever
  to order something user must have some money in side of app
 */
 double balance = 500.00 ;//let in firstly we have to some money in the app in starting
 cout<<"Your new balance is "<<balance<<endl; 
 cout<<"would you like a burger today. please enter yes or no"<<endl;
 string q2;  //question 2
 getline(cin,q2);
 if(q2=="yes")
 {
  cout<<"Please select what burger you want"<<endl;
  string burgertype[]={"veg burger","cheese burger","non-veg burger"};  //three types of burger we have 
  double burgerprices[]={200.00,250.00,300.00};  //price of burger veg 200, cheese 250,etc..
  
  cout<<"1. "<<burgertype[0]<<"--"<<burgerprices[0]<<"rupees"<<endl; // first type of burger
  cout<<"2. "<<burgertype[1]<<"--"<<burgerprices[1]<<"rupees"<<endl; // second type of burger
  cout<<"3. "<<burgertype[2]<<"--"<<burgerprices[2]<<"rupees"<<endl; // third type of burger
  
  cout<<"Your choose one of them using 1,2 Or 3"<<endl;
  int q3;
  cin>>q3;
  while(q3>3||q3<1)
  {
   cout<<"invalid input please correct number"<<endl;
   cin>>q3;
  }
  if(q3==1)
  {
   cout<<"you have ordered a "<<burgertype[0]<<endl;
   cout<<"the total of your is "<<burgerprices[0]<<"rupees"<<endl;
   cout<<"you have "<<balance-burgerprices[0]<<"rupees left your balance"<<endl;
  }
  else if(q3==2)
  {
   cout<<"you have ordered a "<<burgertype[1]<<endl;
   cout<<"the total of your is "<<burgerprices[1]<<"rupees"<<endl;
   cout<<"you have "<<balance-burgerprices[1]<<"rupees left your balance"<<endl;
  }
  else if(q3==3)
  {
   cout<<"you have ordered a "<<burgertype[2]<<endl;
   cout<<"the total of your is "<<burgerprices[2]<<"rupees"<<endl;
   cout<<"you have "<<balance-burgerprices[2]<<"rupees left your balance"<<endl;
  }
 }
 else
 {
  cout<<"Alright Have a good day"<<endl;
 } 
 return 0;
}
