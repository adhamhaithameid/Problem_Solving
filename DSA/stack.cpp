#include <iostream>
using namespace std;

template<typename s>
    class node{
        public: 
            s val;
            node* next;
            node(s value){
                val = value;
                next = nullptr;
            }
    };

    template<typename T>
    class stackw{
        public: 
        node<T>* head;
        unsigned int length;
        public:

        stackw():head(nullptr){}
        ~stackw(){
            while(length != 0){
                pop();
            }
        }

        void push(T value){
            if(length == 0){
            head  = new node<T>(value);
            length++;
            }

            node<T>* temp = new node<T>(value);

            temp -> next = head;
            head = temp;
            length++;
        }

        void pop(){
            if(length == 0){return;}

            node<T>* temp = head -> next;
            delete head;

            head = temp;

            length--;

            if(length == 0){
                head = nullptr;
            }
        }

        T peak(){
            return head->val;
        }
    };

int main() {
    
stackw<int> stack1;
stack1.push(2);
stack1.push(5);
cout << stack1.peak() << endl;
stack1.pop();
cout << stack1.peak() << endl;
}