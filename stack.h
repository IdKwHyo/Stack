#ifndef stack_h
#define  stack_h
#include "node.h"
using namespace std;
class Stack{
private:
	 NodePtr top;
	char size;
public:
    Stack(NodePtr = NULL);
    ~Stack();
    int pop();
    void push(int);
};

Stack::Stack(NodePtr t){
  if(t) {
    top=t;
    size=1;
  }
 else{
   top=NULL;
	 size=0;
   }
}
void Stack::push(int x){
   NodePtr new_node=new NODE(x);

  if(new_node){
    new_node ->set_next(top);
    top=new_node;
    ++size;
	 	 
      
   }
 else cout<<"No memory left for new nodes"<<endl;
		 // Left missing for exercises..(done)
   cout << "No memory left for new nodes" << endl;
}
int Stack::pop(){
 	   NodePtr t=top;
		char value;		
	 if(t==nullptr)	{
    cout << "Error: Stack is empty. Cannot perform pop operation." << endl;
     value=t->get_value();
     top=t->get_next();
     delete t;
     --size;
     return value;
     
	
     
   
     }
    
		cout<<"Empty stack"<<endl;
   return 0;
	}
Stack::~Stack(){
   cout<<"Clearing all stacks"<<endl;
  	int i;
  NodePtr t=top;
for(i=0;i<size;i++){
     top=top->get_next();
      delete t;
  t=top;
   	
  }


}



#endif