#include <iostream>
#include <string>
#include <iomanip>


template <typename T>
class Stack{

    private:
        T arr[100];
        int top;

    public:
        Stack(){

            top = -1;

        }
        
        void push(T x){
            if(top >= 99){
                return;
            }
            
            top++;
            arr[top] = x;

        }
       
        T pop(){
            if(top ==  -1){
                return T();
            }

            top--;
            return arr[top + 1];
        }
       
        T peek(){
            if(top != -1){

            return arr[top];
            
            }

            return T();
        }
        
        bool isEmpty(){

            if(top == -1){

                return true;

            }

            return false;
            

        }

};









int main(){



    return 0;
}