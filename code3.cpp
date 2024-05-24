/* Program to find the grades of students using on basis of range of marks 

 Marks                            Grades
 80 to 100                        A
 60 to 80                         B
 50 to 60                         C
 40 to 50                         D
 
 
 */
   
   
   
   #include <iostream>
   using namespace std;
   int  main(){
     int m;
     cout <<"Enter marks of students";
     cin>>m;
     
     if(m>=80){
     cout<< "The student's grade is A";
     }
     
     else 
     {
     if(m>=60)
     {
     cout<<"The student's grade is B";
     }
     
     
     else
     {
     if(m>=50)
     {
     cout<<"The student's grade is C";
     }
     else
     {
     if(m>=40)
     {
     cout<<"The student's grade is D";
     
       }
          }
                  }
      
        
     }
     
     return 0;
   }