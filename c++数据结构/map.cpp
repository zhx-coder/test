#include <map>  
  
#include <string>  
  
#include <iostream>  
  
using namespace std;  
  
int main()  
  
{  
  
    map<int, string> mapStudent;  
  
    mapStudent.insert(pair<int, string>(1, "student_one")); 
    
    mapStudent.insert(pair<int, string>(2, "student_two"));
    
    mapStudent.insert(pair<int, string>(3, "student_three"));
  
    map<int, string>::iterator iter; 
    
    iter = mapStudent.find(2);
    
    if(iter != mapStudent.end())
    
    	cout << "Find, the value is " << iter->first << ":" << iter->second << endl;
	
	else
	
		cout << "Do not Find" << endl;
		
	int nsize = mapStudent.size(); 
	
	cout << nsize << endl;
  
    for(iter = mapStudent.begin(); iter != mapStudent.end(); iter++)  
  
       cout<<iter->first<<' '<<iter->second<<endl;  
       
    return 0;
}  
