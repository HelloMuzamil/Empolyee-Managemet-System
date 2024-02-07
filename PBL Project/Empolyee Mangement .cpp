#include<iostream>
#include<conio.h>
#include<iomanip>
#include<windows.h> 
#include<cctype>

using namespace std;
struct empolyee{
    string name,address;
    double contact;
    int id,salary;

};//structure

int total=0;
empolyee arr[100];
	int choice=0;

void empolyeedata(){

	cout<<"Please enter how many  employees data do you want to enter??: ";
	cin>>choice;
	for(int i=total;i<total+choice;i++){
        cout<<"\nEnter the Data of Empolyee   " <<i+1<<endl<<endl;
        cout<<"Enter employee name: ";
        cin>>arr[i].name;
        cout<<"Enter empolyee Id: ";
        cin>>arr[i].id;
        cout<<"Enter Empolyee address: ";
        cin>>arr[i].address;
        cout<<"Enter Empolyee contact: ";
        cin>>arr[i].contact;
        cout<<"Enter Empolyee salary: ";
        cin>>arr[i].salary;
    
		}//first for loop
		
total=total+choice;


}//empdata bracket
// show function


void show(){
	if(total!=0){
	   for(int i=0;i<total;i++){
		   cout<<"\n\n Employee Data of  "<<i+1<<endl;
		   cout<<"Name: "<<arr[i].name<<endl;
		   cout<<"ID: "<<arr[i].id<<endl;
		   cout<<"Address: "<<arr[i].address<<endl;
		   cout<<"Contact: "<<arr[i].contact<<endl;
		   cout<<"Salary: "<<arr[i].salary<<endl;
		
		
	}//first for loop
}//first if loop
   else{
    	cout<<"No data is entered"<<endl;
	}
}//calling showdata brackets



 


// search function
void search(){

	if(total!=0){
	int id;
	cout<<" Please enter the  id of employee which you want to search"<<endl;
	cin>>id;
	for(int i=0;i<total;i++){
		if(arr[i].id==id){
		cout<<"Data of employee "<<i+1<<endl;
		cout<<"Name: "<<arr[i].name<<endl;
		cout<<"ID: "<<arr[i].id<<endl;
		cout<<"Address: "<<arr[i].address<<endl;
		cout<<"Contact: "<<arr[i].contact<<endl;
		cout<<"Salary: "<<arr[i].salary<<endl;
	
		break;
		}

		if(i==total-1){
			cout<<"Record not Found"<<endl;
}
}

}else{
	cout<<"There is no data entered Please First Entered the Data  "<<endl;
}
}

void update(){
	if(total!=0){
	int id;
	cout<<"Enter id of employee which you want to update"<<endl;
	cin>>id;
	for(int i=0;i<total;i++){
      int olddata[i], newdata[i];
		if(arr[i].id==id){
		cout<<"Old data of employee "<<i+1<<endl;
		cout<<"Name: "<<arr[i].name<<endl;
		cout<<"ID: "<<arr[i].id<<endl;
		cout<<"Address: "<<arr[i].address<<endl;
		cout<<"Contact: "<<arr[i].contact<<endl;
		cout<<"Salary: "<<arr[i].salary<<endl;
cout<<"\n\n-----------------------------------------------------------------------------------------------------------------------";
    
		cout<<"\nEnter new data"<<endl;
		cout<<"Enter employee name: ";
		cin>>arr[i].name;
		cout<<"Enter empolyee id: ";
		cin>>arr[i].id;
		cout<<"Enter empolyee address: ";
		cin>>arr[i].address;
		cout<<"Enter empolyee contact: ";
		cin>>arr[i].contact;
		cout<<"Enter empolyee salary: ";
		cin>>arr[i].salary;
		break;
		}
	
		if(i==total-1){
cout<<"No such record found"<<endl;
		}
	
	}
}else{
	cout<<"No data is entered"<<endl;
}
}
//calling del function
void del(){
	if(total!=0){
	int press;
cout<<"Press 1 to delete specific type of record"<<endl;
cout<<"Press 2 to delete full record"<<endl;
cin>>press;
if(press==1){
		int id;
		cout<<"Enter id of employee which you want to delete"<<endl;
		cin>>id;
		for(int i=0;i<total;i++){
if(arr[i].id==id){
arr[i].name=arr[i+1].name;
arr[i].id=arr[i+1].id;
arr[i].address=arr[i+1].address;
arr[i].contact=arr[i+1].contact;
arr[i].salary=arr[i+1].salary;
total--;

	cout<<"\n\tWait Your Record Is Deleting  ";
	for(int i=0;i<6;i++)
	{
		cout<<".";		
		Sleep(1000);                      
    }  	
break;
	system("CLS");

}
			if(i==total-1){
			cout<<"Sorry No Record Found "<<endl;
}
}
}
	else if(press==2)
	{
		total=0;
	
		cout<<"\n\tWait Your Record Is Deleting  ";
	for(int i=0;i<6;i++)
	{
		cout<<".";		
		Sleep(1000);                      
    }  	
	}
	
	else
	{
       cout<<"Invalid Input"<<endl;
	}
}
else
{
      cout<<"No data is entered"<<endl;
}}

 int main(){

//introduction page
	Sleep(600);
		Sleep(600);
	cout<<"\n\n\t\t------------------------------------------------------------";
	cout<<"\n\n\t\t\t\t\tIntroduction";
	Sleep(600);
	cout<<"\n\n\t\t------------------------------------------------------------";
	Sleep(600);
	cout<<"\n\t\t Name. :"<<setw(17)<<"Muzamil Iqbal";
	Sleep(600);
	cout<<"\n\t\t Roll No. :"<<setw(6)<<"53065";
	Sleep(600);
	cout<<"\n\t\t Name. :"<<setw(17)<<"Muhammad Maaz";
	Sleep(600);
	cout<<"\n\t\t Roll No. :"<<setw(6)<<"53063";
	Sleep(600);
	cout<<"\n\t\t Class. :"<<setw(8)<<"BS-CS";
	Sleep(600);
	cout<<"\n\t\t Section. :"<<setw(3)<<"1D";
	Sleep(600);
	cout<<"\n\t\t Teacher. :"<<setw(10)<<"Mr.Haroon";
	Sleep(600);
	cout<<"\n\t\t Institute.:"<<setw(29)<<"Riphah International University";        //setwidh  to set width
	Sleep(600);
	cout<<"\n\n\t\t-----------------------------------------------------------";
	Sleep(600);
	cout<<"\n\n\t\t-----------------------------------------------------------";
	getch();
	system("Cls");

//signup page
	cout<<"\n\n\t\tEmployee Management System"<<endl;
	  string username;
	  int password;
	  
	  
	  cout<<"\n\n\t\tEnter new user name:";
	  
	  
//eror handling for alphabet only
while (true) {
        cin>>username;
        bool isAlphabetic = true;
        for (char c : username) {
            if (!isalpha(c)) {
                isAlphabetic = false;
                break;
            }  
        }
        if (isAlphabetic) {
            break; // correct input
        } else {
            cout << "Error: Input alphabet only. Please try again: ";
        } }
	 
	 
cout<<"\t\tEnter new password: ";
//eror handling for integer only
while(!(cin>>password)){
	cout<<"/n/n/tError: Enter a number only";
	cin.clear();
	cin.ignore(123,'\n');
}
	cout<<"\n\tWait your id is creating  ";
	for(int i=0;i<6;i++)
	{
		cout<<".";		
		Sleep(1000);                      
    }  
	
	Sleep(2000);
	start:
	system("CLS");
	string usrn;
	int pswd;


//login page
	cout<<"\n\n\t\tEmployee Management System"<<endl;
	cout<<"\n\n\n\t\t   LOGIN"<<endl;
	cout<<"\t\tEnter username: ";
	cin>>usrn;
	cout<<"\t\tEnter password: ";
	cin>>pswd;
	if(usrn==username&&pswd==password)
	{
	system("CLS");                         // for clear screen
	char ch;
	while(1){

	cout<<"\n\nPress 1 to enter data"<<endl;
	cout<<"Press 2 to show data"<<endl;
	cout<<"Press 3 to search data"<<endl;
	cout<<"Press 4 to update "<<endl;
	cout<<"Press 5 to delete data"<<endl;
	cout<<"Press 6 to logout"<<endl;
	cout<<"Press 7 to exit"<<endl;
	ch=getch();                         //getch use to get a chracter without echo mean it does not display the input on screen

	system("CLS");
	switch(ch){

		case '1':
			empolyeedata();
			break;

		case '2':
			show();
			break;

		case '3':
			search();
			break;

		case '4':
			update();
			break;

		case '5':
			del();
			break;


		case '6':
			goto start;
			break;
	
		case '7':
			exit(0);
			break;
	
		default:
			cout<<"\aInvalid Input"<<endl;
			break;
  }      
     }
       }

  else if(usrn!=username)
  {
  	cout<<"\t\t\aInvalid username please try again";
  	Sleep(3000);
  	goto start;
  }
  
  else if(pswd!=password)
  {
  	cout<<"\t\t\aInvalid password please try again";
  	Sleep(3000);
  	goto start;
  }
  
  else{
  	cout<<"\t\t\aInvalid username and password";
  	Sleep(3000);
  	goto start;
 }
  }


