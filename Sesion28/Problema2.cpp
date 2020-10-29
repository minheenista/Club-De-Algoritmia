#include <iostream>

using namespace std;

int arr[5];

void multiArreglo(int a){
    for(int i=0; i<5; i++){
        arr[i] *=a;
        
        }
    
    
    }

int main()
{
    int x=0, y=0; 
    
    for(int i=0; i<5; i++){
        cin>>arr[i];
        
        
        }
        cin>>x>>y;
        
        multiArreglo(x); multiArreglo(y);
        
        for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
        
        
        }


  
  return 0;
}
