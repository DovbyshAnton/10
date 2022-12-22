#include <iostream>

using namespace std;

void sort_2d_array(double arr[][2]){
    double temp;
    for(int i = 0; i <15; i++){
        if(arr[i][0] > arr[i][1]){
            temp = arr[i][0];
			arr[i][0] = arr[i][1];
            arr[i][1] = temp;	
        }
    }
}

void find(double arr[][2]){
    int min = arr[0][0] + arr[0][1] + arr[1][0] + arr[1][1];
    int temp;
    int first = 1;
    int second = 2;
    for(int i = 1;i<15-1;i++){
        temp = arr[i][0] + arr[i][1] + arr[i+1][0] + arr[i+1][1];
        if(temp < min){
            min = temp;
            first = i + 1;
            second = i + 2;
        }
    }
    cout<<"Номера двох рядків "<< first << " " << second << endl;
}
int main()
{
    double a[15][2];
    for(int i = 0;i<15;i++){
        for(int j = 0;j<2;j++){
            cout<<"Введіть значення["<<i<<"]["<<j<<"]: ";
            cin >> a[i][j];
        }
    }
    
    sort_2d_array(a);
    cout<< "Відсортований масив: "<< endl;
    for(int i = 0;i<15;i++){
        for(int j = 0;j<2;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    
    find(a);
    
}
