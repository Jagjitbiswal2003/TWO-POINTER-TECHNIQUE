#include<iostream>
using namespace std;
  //Input: height = [1,8,6,2,5,4,8,3,7]
  //Output: 49
  
   int containerwithmostwater(int height[],int n){
  int max_area=0;
         int i=0; int j=n-1;
              while(i<j){
                  int l=j-i;
                  int h=0;
                    if(height[i]>height[j]){
                         h=height[j];
                         j--;
                    
                    }
                       else{
                           h=height[i];
                            i++;
                       }
                         int area=l*h;
                         max_area=max(max_area,area);
              }
                 return max_area;

   }


int main()
{
    int n;
    
    int i;
    cout << "enter length of array:" << endl;
    cin >> n;
    int a[n];
    cout << "enter height of array:"<< endl;
    for (i = 0; i < n; i++)
        cin >> a[i];
    cout<<"The water store in container is: "<<containerwithmostwater(a,n)<<" sq.unit";
     



return 0;
}