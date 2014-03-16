#include <iostream>

using namespace std;

class stack {
	private:
		static const int max = 100;
		int arr[max];
		int top;
	public:
		stack () {top = -1;}
		bool Isempty();
		bool Isfull();
		void push(int data);
		int pop();
};

bool stack::Isempty(){
	if (top<0) return true;
	return false;
}

bool stack::Isfull(){
	if(top==max-1) return true;
	return false; 
}

void stack::push(int data){
	if(Isfull()) {cout<<"over flow" << endl; return;}
	top = top+1;
	arr[top] = data;
}

int stack::pop(){
	if(Isempty()) {cout << "Under flow"; return 0;}
	top--;
	return arr[top+1];
}

int main(){
	stack s1;
	s1.push(3);
	
	return 0;
}