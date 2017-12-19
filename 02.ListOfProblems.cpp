#include <iostream>
#include <array>
using namespace std;

const int MAX = 10;

typedef array <int, MAX> TVec;

TVec readArr();
void printArr(TVec arr);
void printRra(Tvec arr);

int main(){

    TVec arr;

    cout << "Insert data: " << endl;
    readArr();
    cout << "Your data printed is: " << endl;
    printArr(arr);
    cout << endl << "Your data inverted is: " << endl;
    printRra(arr);

return 0;
}

TVec readArr(){
    TVec arr;
    for (int i = 0; i<arr.size(); ++i)
        cin >> arr[i];
return arr;
}
void printArr(TVec arr){
    for (int i=0; i<arr.size(); ++i)
        cout << arr[i] << ", ";
}
void printRra(TVec arr){
    for (int i=arr.size(); i>0; --i){
        cout << arr[i] << " ,";
    }
}
