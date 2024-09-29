

#include <iostream>
/*
*/
#include <iostream>
#include<fstream>
#include <string>
using namespace std;

void menu();
 string Adminlogin();
 string Admin();
 string fineRate();        
 string maximum();
 string libaryLog();
 string lbLogCheck();
 string librarian();
 string AddBook();
 string DilectBook();
 string searchBook();
 string updatebook();
 string IssueBook();
 string returnbook();
 string AddBorrowers();
 string DileBorrowers();
 string searchBorrowers();
 string updateBorrowers();

class libary{

public: string Namesofbook;
  
  string lbpwd;
  string lbname;
  
  string Author;
  string Genre;
  string publisher;
  string year;
  string bookName;
  string bookId;
  string price;

      
  string name;
  string Id;
  string contactNumber;
  

};
  
 



	 
 
int main(){
	
system("cls");
	
  menu();                                
                                        
  
	
    
	

 return 0;
}	







  
void menu(){
	
	system("Color C");
  system("cls");	
   int job; 	
 	 	
	cout<<"\t\t\t\t\t================================================="<<endl;                                               
	 
	cout<<"\t\t\t\t\t   ========LIBRARIAN MANEGEMENT SYSTERM========"<<endl;
	                                                
	cout<<"\n\t\t\t\t\t================================================="<<endl;                                               
	 
	cout<<" \n\t\t\t\t\t                   01.Admin                             "<<endl;       
	cout<<"  \t\t\t\t\t                   02.Librarian                         "<<endl;                                               
	cout<<"   \t\t\t\t\t                   03.Exit                              "<<endl;                            
	  
	cout<<"\n\t\t\t\t\tEnter your choise: ";
	cin>>job;
	 
	  
 	 if(job==1){
       Adminlogin();
    }   
	
	 else if(job==2){
       lbLogCheck(); 	
    }
	  
	 else if(job==3){
	  exit(0);
    }
	 
}



string Adminlogin(){


	system("cls");
	
 

string	adPwd = "****";	
string adName,adPass;


	cout<<"\t\t\t\t\t================================================="<<endl;                                               
	 
    cout<<"\t\t\t\t\t\t`   ========ADMIN LOGIN========"<<endl;
	                                                
    cout<<"\t\t\t\t\t================================================="<<endl; 


	
	
	
	cout<<"\n\n\t\t\t\t\t\tEnter Your User Name: ";
	cin>>adName;

	cout<<"\n\n\t\t\t\t\t\tEnter Your Password: ";
	cin>>adPass;	
		
	if(adPwd==adPass){
		Admin();
	}
	
	else{
		cout<<"Try Again"<<endl;
		Adminlogin();	
	}
    
	}







	 
string Admin(){
  
    system("cls");
    int AdminInput;
  	 
	 
    cout<<"\t\t\t\t\t================================================="<<endl;                                               
	 
	cout<<"\t\t\t\t\t    ========WEl COME TO ADMIN ACCOUNT========"<<endl;
	                                                
	cout<<"\t\t\t\t\t================================================="<<endl;                                               


	  cout<<" \n\t\t\t\t\t\t(1)Libary login.           "<<endl;	
	  cout<<" \t\t\t\t\t\t(2)change the fine rate.           "<<endl;
	  cout<<"\t\t\t\t\t\t(3)modify maximum borrowing limits. "<<endl;
	                                                                                     
	  cout<< "\t\t\t\t\t\t(4)Back."<<endl;
      cout<< "\t\t\t\t\t\t(5)exit."<<endl;
     
        
	 cout<<"\n\t\t\t\t\tEnter your choise: ";
	 cin>>AdminInput;
	 
      if(AdminInput==1){
	 	libaryLog();
	 } 
	 
	 else if(AdminInput==2){
     	fineRate();
	 }
	
	 else if(AdminInput==3){
	 	 maximum();
	 }	
 
     else if(AdminInput==4){
     	 menu();
	 }

     else if(AdminInput==5){
     	exit(0);
	 }

	else{
		Admin();
	}

}
                                                                           



string libaryLog(){

int rbacexit;
libary d1;	
	cout<<"\n\t\t\t\t\tLibary Login Name: ";
	cin>>d1.lbname;
	
	cout<<"\n\t\t\t\t\tLibary Password: ";
	cin>>d1.lbpwd;
	
		
		
	
		
		
		
		
		
		
fstream file;
			
		file.open("libarianlog.txt",std::ios::out);
		
		
			if(!file){
				cout<<"File Open Failed..!";
			}else{
				file<<d1.lbname<<" "<<d1.lbpwd<<endl;                                            
				cout<<"\n\t\t\t\t\t\tSucessful.. "<<endl;
				cout<<"\t\t\t\t\t---------------------------------"<<endl;	
				}
			
		file.close();
		
		
		cout<<"\n\n\t\t\t\t\t3.Back"<<endl;
	    
		cout<<"\t\t\t\t\t4.Exit"<<endl;
		
		 cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>>rbacexit;

          

           if(rbacexit==3){
           	 Admin();
		   }

           if(rbacexit==4){
           	   exit(0);
		   }
	
		
	
}

string lbLogCheck(){


  int rbacexit;
           	  
  libary d1;
  string name,pass;


	
fstream File;

	File.open("libarianlog.txt",std::ios::in);
	
	if(!File){
		cout<<"File Cannot Be Opened !!";
	}else{
		
		while(!File.eof()){
			File>>d1.lbname>>d1.lbpwd;
			
		}
	
		
	}
	File.close();

	system("cls");


		cout<<"\t\t\t\t\t================================================="<<endl;                                               
	 
       cout<<"\t\t\t\t\t\t   ========LIBARY LOGIN========"<<endl;
	                                                
       cout<<"\t\t\t\t\t================================================="<<endl;

	
	   cout<<"\n\n\t\t\t\t\tEnter Your Libarian User Name: ";
	   cin>>name;

	  cout<<"\n\t\t\t\t\tEnter Your Libarian Password: ";
	  cin>>pass;	
		
	   if(d1.lbpwd==pass){
	    	librarian();
	  }
	
	    else{
		cout<<"\n\t\t\t\t\t\t\tWrong Password Try Again!!"<<endl;
	}	

	
		cout<<"\n\n\t\t\t\t\t3.Back"<<endl;
	    
		cout<<"\t\t\t\t\t4.Exit"<<endl;
		
		 cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>>rbacexit;;

          

           if(rbacexit==3){
           	  lbLogCheck ();
		   }

           if(rbacexit==4){
           	   exit(0);
		   }
	
	
	
}



string fineRate(){
  	  
	   system("cls");
  	   float rate;
  	   int rbacexit;
	  
	  
	  
	  
		cout<<"\t\t\t\t\t================================================="<<endl;                                               
	 
       cout<<"\t\t\t\t\t\t   ========FINE RATE========"<<endl;
	                                                
       cout<<"\t\t\t\t\t================================================="<<endl;
  	   
  	   cout<<"\n\n\t\t\t\t\tEnter Change fine rate:";
  	   cin>>rate;

  	   fstream file;
	    
	    
	   file.open("finerate.txt",std::ios::out);
 
      if (!file){
    	cout<<"file open fail!!!";
  	
  }
      else{
    	cout<<"\n\t\t\t\t\t      SUCESSFUL!"<<endl;
        file<<rate<<" "<<" "<<std::endl;
   }
	  file.close();
	  	
	  	cout<<"\n\n\t\t\t\t\t2.Back"<<endl;
	    cout<<"\t\t\t\t\t3.more Fine rate"<<endl;
		cout<<"\t\t\t\t\t4.Exit"<<endl;
		
		 cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>>rbacexit;;

           if(rbacexit==2){
           	  Admin();
		   }

           if(rbacexit==3){
           	  fineRate();
		   }

           if(rbacexit==4){
           	   exit(0);
		   }
}
	

string maximum(){
	   
	system("cls");  
	 
	int max;
	int mbacexit; 
	   
	   cout<<"\t\t\t\t\t================================================="<<endl;                                               
	 
       cout<<"\t\t\t\t\t\t   ========BORROWING LIMITS========"<<endl;
	                                                
       cout<<"\t\t\t\t\t================================================="<<endl;
	   
	   
	   
	  
	   
	  cout<<"\n\n\t\t\t\t\tEnter maximum borrowing limits:";
	  cin>>max; 
	
	 fstream file;
	    
	    
	   file.open("maximum.txt",std::ios::out);
 
      if (!file){
    	cout<<"file open fail!!!";
  	
  }
      else{
    	cout<<"\n\t\t\t\t\t      SUCESSFUL!"<<endl;
        file<<max<<" "<<" "<<std::endl;
   }
	  file.close();
	  
	   cout<<"\n\n\t\t\t\t\t2.Back"<<endl;
	    cout<<"\t\t\t\t\t3.more maximum borrowing limits"<<endl;
		cout<<"\t\t\t\t\t4.Exit"<<endl;
		
		 cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>>mbacexit;

           if(mbacexit==2){
           	  Admin();
		   }

           if(mbacexit==3){
           	  maximum();
		   }

           if(mbacexit==4){
           	   exit(0);
		   }	
}














	    
  
string librarian(){
system("Color 06");	    
    system("cls");
	int librarianInput;
    int AddDilect;
    int searUpdate;    
    int AdDilBorowes;
    int searUpdateBook;
 //do{
		     
   cout<<"\t\t\t\t\t================================================="<<endl;                                               
	 
   cout<<"\t\t\t\t\t   ========WEl COME TO LIBBARIAN========"<<endl;
	                                                
   cout<<"\t\t\t\t\t================================================="<<endl;                                               
	 
	   	
	   	
	     
	   
	cout<<"\n\n\t\t\t\t\t\t    (1)Add and Delete Books"; 
    cout<<"\n\t\t\t\t\t\t    (2)Search and Update Books";
	cout<<"\n\t\t\t\t\t\t    (3)Issue Books";
	cout<<"\n\t\t\t\t\t\t    (4)Accept Returned Books";
	cout<<"\n\t\t\t\t\t\t    (5)Add and Delete Borrowers";
	cout<<"\n\t\t\t\t\t            (6)Search and Update Borrowers"<<endl;
	   
	cout<<  "\t\t\t\t\t\t    (7)back"<<endl;
    cout<<  "\t\t\t\t\t\t    (8)exit"<<endl;
	
	    
	cout<<"\n\t\t\t\t\tEnter your choise: ";
	cin>>librarianInput; 
		
	switch(librarianInput){
		
		     
	case 1:{
				 
    cout<<" \t\t\t\t\t1. Add Books"<<endl; 
	cout<<" \t\t\t\t\t2. Dilete Books"<<endl;
	cout<<" \t\t\t\t\t3. Back"<<endl;
				 
				
				
	cout<<"\t\t\t\t\tEnter your choise: ";
	cin>>AddDilect;
			  
	  if(AddDilect==1){
		 AddBook();
	  }
			  	
	  if(AddDilect==2){
	    DilectBook();
     }
	
			  	
	  if(AddDilect==3){
	   librarian();
	 }
			    
	  else{
	  exit(0);
	}
   
   break;
 } 
			  
			     
			   
			   
		
	case 2:{
	 cout<<"\t\t\t\t\t(1)Search Books"<<endl;
	 cout<<"\t\t\t\t\t(2)Update Books"<<endl;
	 cout<<"\t\t\t\t\t(3)Back"<<endl;
	 cout<<"\t\t\t\t\t(4)exit"<<endl;
	 
	 cout<<"\n\t\t\t\t\tEnter your choice:";
	 cin>>searUpdateBook;;
	 
	 if(searUpdateBook==1){
	 	searchBook();
	 }
	 
	 if(searUpdateBook==2){
	 	updatebook();
	 }
	 
	 if(searUpdateBook==3){
	 	librarian();
	 	
	 }
	 
	 if(searUpdateBook==4){
	 	exit(0);
	 }
	 break;
	}
	
	case 3:{
	 cout<<"Issue Books: ";
     break;
  }        
	
	    
	case 4:{
	 cout<<"Accept Returned Books: ";
	 break;
 }
	
	
	 case 5:{
	  cout<<"\t\t\t\t\t1.Add Borrowers"<<endl;
	  cout<<"\t\t\t\t\t2.Dilect Borrowers"<<endl;
	  cout<<"\t\t\t\t\t3.Back            "<<endl;
	  cout<<"\t\t\t\t\t4.exit             "<<endl;
      
	  cout<<"\n\t\t\t\t\tEnter your choise:";
	  cin>>AdDilBorowes;
	  
	    if(AdDilBorowes==1){
		   AddBorrowers();
	     }
		    
	    else if(AdDilBorowes==2){
	       	DileBorrowers();
		}
	  
	   else if(AdDilBorowes==3){
	    	librarian();
		}
		
		else if(AdDilBorowes==4){
			exit(0);
		}
	  
	  
	  break;
	}
	
	
     case 6:{
	  
	  cout<<"\t\t\t\t\t1.Search Borrowers"<<endl;
	  cout<<"\t\t\t\t\t2.update Borrowers"<<endl;
	  cout<<"\t\t\t\t\t3.Back            "<<endl;
	  cout<<"\t\t\t\t\t4.exit             "<<endl;
      
	  cout<<"\n\t\t\t\t\tEnter your choise:";
	  cin>>searUpdate;
	  
	    if(searUpdate==1){
		   searchBorrowers();
	     }
		    
	    if(searUpdate==2){
	       updateBorrowers();
		}
	  
	    if(searUpdate==3){
	    	librarian();
		}
		
		if(searUpdate==4){
			exit(0);
		}
	  
	   
	  break;
	}
	
	
	case 7:{
	   cout<<"back";
	   break;
	}
	
	 case 8:{
	    cout<<"exit";
		     	 
	}
	
	default:{
		
		cout<<"\n\t\t\t\t\tPlease try again"<<endl;
		librarian();
		break;
	}
 }
		
		
	
	 (librarianInput!=8);
	 
 }
	 	
string AddBook(){
 
  system("cls");	 
	libary d1;  
    int bacExit; 
      
        
	 	cout<<"\n\t\t\t\t\t1.Add books"<<endl;
	 	
	 	
	 	
	 	cout<<"\n\t\t\t\t\tEnter  Book's Id: ";
	 	cin>>d1.bookId;
	 	
		cout<<"\n\t\t\t\t\tEnter  Book's Name: ";
	 	cin>>d1.bookName;
	 	
	 	
	 	cout<<"\n\t\t\t\t\tEnter  publisher of the Book: ";
	 	cin>>d1.publisher;
	 	
	    cout<<"\n\t\t\t\t\tEnter Author: ";
	    cin>>d1.Author;
	    
	    cout<<"\n\t\t\t\t\tEnter Genre:";
	    cin>>d1.Genre;
	    
	    cout<<"\n\t\t\t\t\tEnter book Price: ";
	    cin>>d1.price;
	    
	    
	    fstream file;
	    
	    
	   file .open("libraryantask.txt",std::ios::app);
 
      if (!file){
    	cout<<"file open fail!!!";
  	
  }
      else{
    	cout<<"\n\t\t\t\t\t      SUCESSFUL!"<<endl;
    	cout<<"\n\t\t\t\t\t----------------------------"<<endl;
        file<<" "<<d1.bookId<<" "<<d1.bookName<<" "<<d1.publisher<<" "<<d1.Author<<" "<<d1.Genre<<" "<<d1.price<<std::endl;
   }
	  file .close();
	  	
	    
		cout<<"\n\t\t\t\t\t4.Back"<<endl;
	    cout<<"\t\t\t\t\t5.Back more Add Book"<<endl;
		cout<<"\t\t\t\t\t6.Exit"<<endl;
		cout<<"\n\t\t\t\t\t----------------------------"<<endl;
		cout<<"\n\t\t\t\t\tEnter your choise: ";
	    cin>>bacExit;
	    
	    
	    
	    if(bacExit==4){
	      	librarian();
	    	
		}
	    
	    if(bacExit==5){
	    	AddBook();
		}
	
		if(bacExit==6){
		  exit(0);	
		}	    
		
		else{
		  cout<<"INVALID LOGIN!! please try Again."<<endl;
		  librarian();
		  
		  	
		}
}
	  
	 
	 
string DilectBook(){
 
	 system("cls"); 
libary d1;	 
	 	fstream file;
	 	fstream temp;
	    int dilbacexit;
	  
	  	cout<<"\t\t\t\t\t2.Dilect Books"<<endl;
	 
	 	bool found=false;
	
	    
	     string rId;
	     
	     cout<<"\n\t\t\t\t\tEnter Id want to remove :";
	     cin>>rId;
	     
	
	     file.open ("libraryantask.txt",std::ios::in);                //open the input file in read mode(in)
	
	     temp.open("temp.txt",std::ios::out);                        // open the input file in write mode(out)
	
	
	    if(!file|| !temp){
		
		std::cout<<"File can not to be opened."<< std::endl;
		
	}
	
	   else{
	   while (file>>d1.bookId>>d1.bookName>>d1.publisher>>d1.Author>>d1.Genre>>d1.price){
	  	
	  	if(d1.bookId==rId){
		  found=true;
	  		
		  }
	  	
	  }
		
	}
	
	 file.close();
	 temp.close();
	  
	    
		
	
	 if(found==true){
		
		std::remove("libraryantask.txt");
		std::rename("temp.txt","libraryantask.txt");
		std::cout<<"\n\t\t\t\t\t Record has been Delected";
		
		 
	} else{
		remove("temp.txt");
		std::cout<<"\n  \t\t\t\t\t  Record Not Found!!";
	    cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
	}
	     
	   
	     cout<<"\n\n\t\t\t\t\t3.Back"<<endl;
	     cout<<"\t\t\t\t\t4.Back more Dilect Book"<<endl;
		 cout<<"\t\t\t\t\t5.Exit"<<endl;
         cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
         cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>>dilbacexit;

           if(dilbacexit==3){
           	  librarian();
		   }

           if(dilbacexit==4){
           	  DilectBook();
		   }

           if(dilbacexit==5){
           	   exit(0);
		   }

}

	
	  
 
	 
string searchBook(){
  
  system("cls"); 	
  libary d1;	
  string mId;
  int sbacexit;	             
				 
				 
			  bool found=false;
	             
	         cout<<"\t\t\t\t\tEnter Id want to search: ";
	         cin>>mId;
	         
	         fstream file;
	         
	         file.open ("libraryantask.txt",std::ios::in);                //open the input file in read mode(in)
	         if(!file){
		
		std::cout<<"File can not to be opened."<< std::endl;
		
	}
	
	   else{
	   while (file>>d1.bookId>>d1.bookName>>d1.publisher>>d1.Author>>d1.Genre>>d1.price){
	  	
	  	if(d1.bookId==mId){
	  		  cout<<"\n\t\t\t\t\tBook Id:"<<d1.bookId<<endl;
			  cout<<"\t\t\t\t\tBook Name:"<<d1.bookName<<endl;
	  		  cout<<"\t\t\t\t\tpublisher:"<<d1.publisher<<endl;
	  		  cout<<"\t\t\t\t\tAuthor:"<<d1.Author<<endl;
		      cout<<"\t\t\t\t\tGenre: "<<d1.Genre<<endl;
		      cout<<"\t\t\t\t\tPrice:"<<d1.price<<endl;
		      
		  }
	  	else{
	  		
	  		found==true;
	  		
		  }
	  	
	  }
		
	}
	
	 file.close();
	    cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
	    cout<<"\n\n\t\t\t\t\t2.Back"<<endl;
	    cout<<"\t\t\t\t\t3.more search Book"<<endl;
		cout<<"\t\t\t\t\t4.Exit"<<endl;
		
		 cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
		 cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>>sbacexit;

           if(sbacexit==2){
           	  librarian();
		   }

           if(sbacexit==3){
           	  searchBook();
		   }

           if(sbacexit==4){
           	   exit(0);
		   }
 
	 if(found==true){
		cout<<" Wrong Id Pleace try Again!!"<<endl;
		   
	}
	               
	
}

string updatebook(){
	
	system("cls");
	string up;
	
	  cout<<"\n\t\t\t\t\t\tUpdate book!!"<<endl;
	  cin>>up;
	
}	

string IssueBook(){
	
	system("cls");
	
}	


string returnbook(){
	
	system("cls");
	
	
}



string AddBorrowers(){
	
   system("cls");
	libary d1;
	char add;
	int addBorbacexit;
	   	
	  
	  cout<<"\t\t\t\t\t1. Add Borrowers  "<<endl;
	   
	   
	  cout<<"\n\t\t\t\t\tEnter Id:";
	  cin>>d1.Id;
	  
	  cout<<"\n\t\t\t\t\tEnter Name:";
	  cin>>d1.name;
	  
	  
	  cout<<"\n\t\t\t\t\tEnter contact Number :";
	  cin>>d1.contactNumber;
	  
	  fstream file;
	    
	    
	   file.open("Borrowers.txt",std::ios::out);
       
       
      if (!file){
    	cout<<"file open fail!!!";
  	
  }
      else{
    	cout<<"\n\t\t\t\t\t      SUCESSFUL!"<<endl;
        cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
		file<<d1.Id<<" "<<d1.name<<" "<<d1.contactNumber<<endl;
   }
	  file.close();
      
	     cout<<"\n\n\t\t\t\t\t4.Back"<<endl;
	     cout<<"\t\t\t\t\t5.more Add Borrowers"<<endl;
		 cout<<"\t\t\t\t\t6.Exit"<<endl;
         cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
         cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>>addBorbacexit;

           if(addBorbacexit==4){
           	  librarian();
		   }

           if(addBorbacexit==5){
           	  AddBorrowers();
		   }

           if(addBorbacexit=6){
           	   exit(0);
		   }
	  	
 }

	
string DileBorrowers(){
	   
	   system("cls");
	   string dilect;
	   libary d1;
	   int dileBorbacexit;
	   
	    fstream file;
	 	fstream temp;
	 	cout<<"\t\t\t\t\t\t2.Dilect Borrowers"<<endl;
	 
	 	bool found=false;
	
	    
	   
	    
	     cout<<"\n\t\t\t\t\t\tId want to remove:";
	     
	     cin>>dilect;
	     
	
	     file.open ("Borrowers.txt",std::ios::in);                //open the input file in read mode(in)
	
	     temp.open("temp.txt",std::ios::out);                        // open the input file in write mode(out)
	
	
	    if(!file|| !temp){
		
		std::cout<<"File can not to be opened."<< std::endl;
		
	}
	
	   else
	  while (file>>d1.Id>>d1.name>>d1.contactNumber){
	  	
	  	if(dilect==d1.Id){
	  		
	  		found=true;
	  		
		  }
	  	else{
	  		
	  		temp<<d1.Id<<" "<<d1.name<<" "<<d1.contactNumber<<std::endl;
	  		
		  }
	  	
	  
		
	}
	
	 file.close();
	 temp.close();
	
	 if(found==true){
		
		std::remove("Borrowers.txt");
		std::rename("temp.txt","Borrowers.txt");
		std::cout<<"\n\t\t\t\t\t\t Record has been Delected";
		
	}else{
		remove("temp.txt");
		std::cout<<"\n  \t\t\t\t\t  Record Not Found!!";
        cout<<"\n\n\t\t\t\t\t\t----------------------------"<<endl;
	}
	 	
	 	 cout<<"\n\n\t\t\t\t\t\t3.Back"<<endl;
	     cout<<"\t\t\t\t\t\t4.more dilect Borrowers"<<endl;
		 cout<<"\t\t\t\t\t\t5.Exit"<<endl;
         cout<<"\n\n\t\t\t\t\t\t----------------------------"<<endl;
         
		 cout<<"\n\t\t\t\t\t\tEnter your choise:";
	     cin>>dileBorbacexit;
	   

           if(dileBorbacexit==3){
           	  librarian();
		   }

           if(dileBorbacexit==4){
           	  DileBorrowers();
		   }

           if(dileBorbacexit=5){
           	   exit(0);
		   }
	  	
	 }    
	 
	
string searchBorrowers(){
	
	system("cls");
	libary d1;
	string search;
	int seaBorbacexit;
	string mId;    	 
			 
	         bool found=false;
	          cout<<"\t\t\t\t\t2.Search borrowers"<<endl;   
	         cout<<"\n\t\t\t\t\tEnter Id want to search: ";
	         cin>>mId;
	         
	         fstream file;
	         
	         file.open ("Borrowers.txt",std::ios::in);                //open the input file in read mode(in)
	         if(!file){
		
		std::cout<<"\t\t\t\t\tFile can not to be opened."<< std::endl;
		
	}
	
	   else{
	   while (file>>d1.Id>>d1.name>>d1.contactNumber){
	  	
	  	if(d1.Id==mId){
	  		  cout<<"\n\t\t\t\t\tEnter Id:"<<d1.Id<<endl;
			  cout<<"\n\t\t\t\t\tEnter Name:"<<d1.name<<endl;
	  		  cout<<"\n\t\t\t\t\tEnter contact Number:" <<d1.contactNumber<<endl;
	  	}
	  	else{
	  		
	  		found==true;
	  		
		  }
	  	
	  }
		
	}
	
	 file.close();
	    cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
	    cout<<"\n\n\t\t\t\t\t2.Back"<<endl;
	    cout<<"\t\t\t\t\t3.more search Book"<<endl;
		cout<<"\t\t\t\t\t4.Exit"<<endl;
		
		 cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
		 cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>>seaBorbacexit;

           if(seaBorbacexit==2){
           	  librarian();
		   }

           if(seaBorbacexit==3){
           	  searchBook();
		   }

           if(seaBorbacexit==4){
           	   exit(0);
		   }
 
	 if(found==true){
		cout<<" Wrong Id Pleace try Again!!"<<endl;
		   
	}
	               
     cout<<"\n\n\t\t\t\t\t2.Back"<<endl;
	     cout<<"\t\t\t\t\t3.more search Borrowers"<<endl;
		 cout<<"\t\t\t\t\t4.Exit"<<endl;
         cout<<"\n\n\t\t\t\t\t----------------------------"<<endl;
         cout<<"\n\t\t\t\t\tEnter your choise:";
	      cin>> seaBorbacexit;

           if( seaBorbacexit==2){
           	  librarian();
		   }

           if( seaBorbacexit==3){
           	   searchBorrowers();
		   }

           if( seaBorbacexit=4){
           	   exit(0);
		   }
	  	

	
}   	
	  
	  
  
 
	
	

	
	
string updateBorrowers(){
	
	system("cls");
	
	
	
}	
	
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
	 
 
	 
	 
