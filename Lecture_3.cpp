// You are using GCC
// Index of a string 
//#include<iostream>
//using namespace std;
//int main(){
//    string arr[100] ;
//    int size;
//    cin >> size;
//    for(int i=0;i<size;i++){
//        cin >> arr[i];
//    }
//    string  find;
//    cin >> find;
//    int count= 0;
//    for(int i=0;i<size;i++){
//        if(arr[i] == find){
//            cout << i << endl;
//            break;
//        } 
//        count++;
//        
//    }
//    if(count == size){
//        cout << "String not found !" << endl;
//    }
//    return 0;
//    
//}


// Eliminating the negatives
// You are using GCC
//#include<iostream>
//using namespace std;
//int main(){
//    float arr[100];
//    int size;
//    cin >> size ;
//    for(int i=0;i<size;i++){
//        cin >> arr[i];
//    }
//    cout << "Updated Array with Positive Closing Prices: ";
//    for(int i=0;i<size;i++){
//        if(arr[i] >= 0){
//            cout << arr[i];
//        }
//    }
//}


// Eliminating the duplicated
// You are using GCC
//#include<iostream>
//using namespace std;
//int main(){
//    string arr[100];
//    string newarr[100];
//    int size,count = 0;
//    cin >> size;
//    for(int i=0;i<size;i++){
//        cin >> arr[i];
//    }
//    for(int i=0;i<size;i++){
//        bool found = false;
//        for(int j=0;j<count;j++){
//            if(arr[i] == newarr[j]){
//                found = true;
//                break;
//            }
//        }
//        if(!found){
//            newarr[count] = arr[i];
//            count++;
//        }
//        
//        }
//    cout << "Updated array: ";
//    for(int i=0;i<count;i++){
//        cout << newarr[i] ;
//    }
//    return 0;
//    }


// Counting the number of strings starting from a particular letter
// You are using GCC
//#include <iostream>
//using namespace std;
//int main(){
//    string arr[100];
//    int count=0;
//    int size;
//    cin >> size;
//    for(int i=0;i<size;i++){
//        cin >> arr[i];
//    }
//    char word;
//    cin >> word;
//    for(int i=0;i<size;i++){
//        if(arr[i].at(0) == word){
//            count++;
//        }
//    }
//    cout << "Number of strings starting with the letter "<< word << " : " << count;
//    return 0;
//}


// Second Smallest
// You are using GCC
//#include<iostream>
//using namespace std;
//int main(){
//    int arr[100];
//    int size;
//    cin >> size;
//    if(size>=2 && size<=100){
//    for(int i=0;i<size;i++){
//        cin >> arr[i];
//    }
//    for(int i=0;i<size;i++){
//        for(int j=i;j<size;j++){
//            if(arr[i] > arr[j+1]){
//                int temp;
//                temp = arr[i];
//                arr[i] = arr[j+1];
//                arr[j+1] = temp;
//            }
//        }
//    }
//    cout << "Second Smallest Element: " << arr[1];
//    }
//    
//    return 0;
//    
//}


// Element replaced by the product of its neighbouring elements
// You are using GCC
//#include<iostream>
//using namespace std;
//int main(){
//    int arr[50];
//    int newarr[50];
//    int size;
//    cin >> size;
//    for(int i=0;i<size;i++){
//        cin >> arr[i];
//    }
//    for(int i=0;i<size;i++){
//        if(i == 0){
//            newarr[i] = (arr[i] * arr[i+1]);
//        }
//        if(i == size-1){
//            newarr[i] = (arr[i] * arr[i-1]);
//        }
//        else{
//            for(int i=1;i<size-1;i++){
//            
//        newarr[i] = (arr[i-1]) * (arr[i+1]);
//            
//        }
//        }
//        
//    }
//    for(int i=0;i<size;i++){
//        cout << newarr[i] << " ";
//    }
//    return 0;
//}


// Stock trading application 
// You are using GCC
//#include<iostream>
//#include<math.h>
//using namespace std;
//int main(){
//    int arr1[100];
//    int arr2[100];
//    int size;
//    int count = 0 ;
//    cin >> size;
//    for(int i=0;i<size;i++){
//        cin >> arr1[i];
//    }
//    for(int i=0;i<size;i++){
//        cin >> arr2[i];
//    }
//    for(int i=0;i<size-1;i++){
//        if(abs(arr1[i] - arr1[i+1]) >= arr2[i]){
//            count ++;
//        }
//    }
//    cout << count ;
//    return 0;
//    
//}
























