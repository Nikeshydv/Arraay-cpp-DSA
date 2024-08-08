
#include <iostream>
using namespace std;
int main(){
	
	int a[6]={23,44,-5,66,8,10};
	int high,s_high,temp;
	high=a[0];
	 s_high=a[0];
	 
	 
	for(int i=1;i<6;i++){
		if(a[i]>high){
		
		    high=a[i];
		   
		    temp=high;
		    a[0]=a[i];
		    	if(a[i]>s_high && a[i]<high){
				
		         s_high=a[i]; 
		}
		}
		
		    
	
//		    continue;
	}
	cout<<high<<endl ;
	cout<<s_high;
}


# include <iostream>
using namespace std;




// void rev(int ar[],int s){
//     int temp;
//     for(int i=0;i<s/2;i++){
//       std::swap(ar[i],ar[s-i-1]);
//       temp=ar[i];
//       ar[i]=ar[s-i-1];
//       ar[s-i-1]=temp;
       
//     }
    
   
// }
// void print(int ae[],int ss){
//     for(int i=0;i<0;i++){
//         cout<<ae[i];
        
//     }
// }

// int main(){
//     int a[5]={1,2,3,4,5};
//     print(a,5);
//     rev(a,5);
//     print(a,5);
// }


//find the number in the array


// int main(){
    
//     int ar[5]={12,45,35,45,65};
//     int n;
//     cout<<"enter the number to find iN ARRAY:";
//     cin>>n;
//     int index;
    
//     for(int i=0;i<5;i++){
//         cout<<ar[i]<<" ";
//     }
    
//     for(int i=0;i<5;i++){
//         if(ar[i]==n){
//             index=i;
//             cout<<"yes";
//             break;
//         }
        
     
      
//     }
//     cout<<index;
// }


int main(){
    int arr[5]={1,2,3,4,5};
    int array1[5];
    
    for(int i=0;i<0;i++){
        array1[i]=arr[i];
         cout<<array1[i];
    }
   
}


# include <iostream>
using namespace std;




// void rev(int ar[],int s){
//     int temp;
//     for(int i=0;i<s/2;i++){
//       std::swap(ar[i],ar[s-i-1]);
//       temp=ar[i];
//       ar[i]=ar[s-i-1];
//       ar[s-i-1]=temp;
       
//     }
    
   
// }
// void print(int ae[],int ss){
//     for(int i=0;i<0;i++){
//         cout<<ae[i];
        
//     }
// }

// int main(){
//     int a[5]={1,2,3,4,5};
//     print(a,5);
//     rev(a,5);
//     print(a,5);
// }


//find the number in the array


// int main(){
    
//     int ar[5]={12,45,35,45,65};
//     int n;
//     cout<<"enter the number to find iN ARRAY:";
//     cin>>n;
//     int index;
    
//     for(int i=0;i<5;i++){
//         cout<<ar[i]<<" ";
//     }
    
//     for(int i=0;i<5;i++){
//         if(ar[i]==n){
//             index=i;
//             cout<<"yes";
//             break;
//         }
        
     
      
//     }
//     cout<<index;
// }


int main(){
    int arr[5]={1,2,3,4,5};
    int array1[5];
    
    for(int i=0;i<0;i++){
        array1[i]=arr[i];
         cout<<array1[i];
    }
   
}


#include <iostream>
using namespace std;
int main(){
	                       //Array questions
	      int n,sum=0,high=0,small=0;
	      
	      
		  cout<<"How many student are there in class: ";
		  cin>>n;
		  
		  int marks[n];
          string name[n];
		  
		  for(int i=0;i<n;i++){
		  	cout<<"Enter name of student: "<<i+1<<" : ";
		  	cin>>name[i];
		  	cout<<"Enter the marks of student :"<<i+1<<": ";
		  	cin>>marks[i];
		  }   
		  cout<<"Array of student having:"<<n<<"students = {";
		  for(int i=0;i<n;i++){
		  	cout<<"["<<name[i]<<"-"<<marks[i]<<"]"<<"}"<<endl;
		  	sum=sum+marks[i];
		  }
		  cout<<"Total marks of class :"<<sum<<endl;
		  cout<<"Average marks of student :"<<sum/(float)n<<endl;
		  
		    
		  high=marks[0] ; 
		  small=marks[0] ; 
		  
		  int high_index,low_index; 
		       
		  for(int i=0;i<n;i++){
		  	cout<<"Student marks at index number "<<i+1<<" : "<<marks[i]<<endl;
		  	
		  	sum=sum+marks[i];
		  	 if(marks[i]>high){
			   
		  	 	high=marks[i];
		  	 	high_index=i;
		  	 }
		  
		  	 if(marks[i]<small){
			   
		  	    small=marks[i];
		  	    low_index=i;
//                if(marks[i]>=35 && marks[i]<=40)
//                cout<<"Grace 5 marks given"<<endl;
//                else
//                cout<<"Grace 5 marks not given"<<endl;
             }
	  }
			   	cout<<"It is highest  "<<high<<"\nObtained by: "<<name[high_index]<<endl;
			   	
		  	cout<<"It is smallest "<<small<<"\nObtained by: "<<name[low_index]<<endl;
		  		
		  	
         	}
         	
         	
         	

            #include <iostream>
using namespace std;
int main(){
	
	int ar[8]={12,24,36,67,39,89,45,37};
	
	for(int i=0;i<8;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
		for(int i=0;i<8;i++){
		
		if(ar[i]>=35 && ar[i]<40){
			ar[i]=40;
		}
	}
	for(int i=0;i<8;i++){
		cout<<ar[i]<<" ";
      }
}





#include <iostream>
using namespace std;
int main(){
//	char name[10]={'a','m','a','n','\0'};
//	cout<< name[3];
	
	string name="aman";
	cout<<name;
	cout<<"\nEnter name : ";
//	cin>>name;
	getline(cin,name);
	
	cout<<"You entered: "<<name;
}
		  
		  
		  	
		  
//		  cout<<"the total sum of marks : "<<sum<<endl;
//		  cout<<"Average of class: "<<sum/(float)n<<endl;
		 
		  
		  
		  
		  
		  
	