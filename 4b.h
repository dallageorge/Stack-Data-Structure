#include <cstddef>

class Stack{
    public:
    int size=0,position=0,i;
    int* data;
    
    
    Stack(){
        data = new int[10];
        size=10;
        
    }
    Stack(int n){
        data = new int[n];
        size=n;
    }
    Stack(Stack &other){
        data = new int[other.size];
        for(i=0;i<other.size;i++){
            data[i]= other.data[i];
        } 
        size = other.size; 
        position = other.position;
    }
    ~Stack(){
        delete[] data;
    }
    bool isEmpty(){
        if (position==0){
            return true;
        }
        else return false;
    }
    bool pop(int &element){
        if (position==0){
            return false;
        }
        else{
            //std::cout << data[position-1];
            element = data[position-1];
            position= position - 1;
            return true;
        }
    }
    bool push(int element){
        int* data2;
        position+=1;
        if (position>size){
            data2 = new int[size+5];
            for(i=0;i<size;i++){
                data2[i]=data[i];
            }
            data2[position-1]=element;
            size=size+5;
            data = new int[size];
            for(i=0;i<position;i++){
                data[i]=data2[i];
            }
            return true;
        }
        else{
            data[position-1]=element;
        }
        return false;
        
    }
    
    
};