#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"please enter the no of stds mrks u want to add";
    cin>>n;
    int marks[n];

    for(int i=0;i<n;i++){
        cin>>marks[i];

    }
    int total_product=1;
    for(int i=0;i<n;i++){
        total_product=total_product*marks[i];
    }
    int num_sum=0;
    int den_sum=0;

    for(int i=0;i<n;i++){
        den_sum=den_sum+marks[i];
        num_sum=num_sum+(total_product/marks[i]);
    }

    cout<<(double)sum/n<<"\n";
  return 0;
}
