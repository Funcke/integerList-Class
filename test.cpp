#include <iostream>
#include <string>
#include "test.hpp"
using namespace std;
using namespace project;

namespace project{
	Node::Node(){
		this->content = 0;
		this->Next = NULL;
	}

	Node::Node(int ncontent, Node *element){
		this->content = ncontent;
		this->Next = element;
	}
	
	Node::Node(int ncontent){
		this->content = ncontent;
		this->Next = NULL;
	}
	
	List::List(){
		this->_length = 0;
		this->_Current = NULL;
		this->_First = NULL;
		this->_Last = NULL;
	}
	
	List::List(Node *element){
		if(element != NULL){
			this->_length = 1;
			this->_Current = element;
			this->_First = element;
			this->_Last = element;
			if(element -> Next != NULL){
				this->_Last = element -> Next;
				while(this->_Last != NULL){
					this->_Last = this->_Last -> Next;
				}
			}
		}else{
			this->_length = 0;
			this->_Current = NULL;
			this->_First = NULL;
			this->_Last = NULL;
		}
	}
	
	/*List::List(Node *first, Node *current, Node *last){
		if(first != NULL && current != NULL && last != NULL){
			
		}else{
			if(first == NULL)
				
			this._length = 0;
		this._Current = NULL;
		this._First = NULL;
		this._Last = NULL;
		}
	}
	*/
	int List::Add(Node *element){
		if(element != NULL){
			this->_Last -> Next = element;
			if(element -> Next != NULL){
				this->_Last = element -> Next;
				while(this->_Last -> Next != NULL){
					this->_Last = this->_Last -> Next;
				}
			}
			return 0;
		}else{
			return -1;
		}
	}
	
	int List::Remove(int position){
		if(position <= this->_length){
			if(position == 1){
				this->_First = this->_First->Next;
			}else{
				this->_Current = this->_First;
				for(int i = 1; i < position && this->_Current -> Next != NULL; i++)
					this->_Current = this->_Current -> Next;
				if(this->_Current -> Next != NULL){
					this->_Current -> Next = this->_Current -> Next -> Next;
				}else{
					this->_Current -> Next = NULL;
					this->_Last = this->_Current;
				}
			}
		}else{
			return -1;
		}
	}
	
	int List::Insert(int position, Node *element){
		if(position <= this->_length +1 && element != NULL){
			this->_Current = this->_First;
			for(int i = 0; i < position; i++)
				this->_Current = this->_Current -> Next;
			if(this->_Current -> Next == NULL){
				this->_Last = element;
			}
			element -> Next = this->_Current -> Next;
			this->_Current = element;
			return 0;	
		}else
			return -1;
	}
}
	int main(void){
		Node *First = new Node(3);
		Node *Last = new Node(5);
		List *Test = new List(First);
		cout << "Item:" << Test->_Current->content << endl;
		return 0;
	}