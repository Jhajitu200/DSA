#include<bits/stdc++.h>
using namespace std;

template<typename T>
class myvector{
    private:
    int size=0;
    int capacity=1;
    T* data=new T[capacity];

    public:

    // this function is used  to  add elemet in a vector

    void push__back(const T& value ){
        if(size>=capacity){
            capacity=2*capacity;
            T* new_data=new T[capacity];
            for(int i=0;i<size;i++){
                new_data[i]=data[i];
            }
            delete[] data;
            data=nullptr;
            data=new_data;
        }
        data[size++]=value;
       }

       int get_size(){
           return size;
       }


    // this  operator overloading is used  to  return element value of specific index;

       T operator[](const int index){
        if(index>= size){
            cout<<"your input is invalid";
        }
        else{
            return data[index];
        }
       }

    // this operator overloading is used to return element address of specific index
    

       T* operator()(const int index){
           if(index>=size){
               cout<<"your input is invalid";
           }
           else{
               return (data+index);
           }
       }

    // this function is used  for  deleting element from a vector

       void pop__back(int value){
           if(size==1){
               delete[] data;
               data=nullptr;
               size--;
           }
           else{
               T* new_data=new T[size];
               for(int i=0;i<size-1;i++){
                   new_data[i]=data[i];
               }
               delete[] data;
               data=nullptr;
               data=new_data;
               size--;
           }
      }
};

int main(){

    myvector<int> vec;
   
   for(int i=0;i<5;i++){
    int n;
    cin>>n;
    vec.push__back(n);
   }

   cout<<vec.get_size();

   vec.pop__back();

   for(int i=0;i<vec.get_size();i++){
    cout<<vec[i];
   }


   return 0;
}
