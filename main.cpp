#include<bits/stdc++.h>
using namespace std;

template<typename T>
class vec{
    private:
    int size=0;
    int capacity=0;
    T* data= new T[size];
    public:
    arr(){
    }

    void push__back(const T& value ){
        if(capacity==0){
            capacity=1;
        }
        else if(size>=capacity){
            capacity*=2;
        }
        if(size>=capacity){
            T* new_data=new T[capacity];
            for(int i=0;i<size;i++){
                new_data[i]=data[i];
            }
            delete[] data;
            data=new_data;
        } 
        data[size++]=value;
    }

    T& operator[](int index){
        if(index>=size){
            cout<<"you are  accessing out of limit";
        }
        else{
            return data[index];
        }
    }
};

int main(){
    
    
    vec<int> myvec;
    myvec.push__back(10);
    myvec.push__back(20);

    for(int i=0;i<2;i++){
        cout<<myvec[i]<<endl;
    }
    
    return 0;
}