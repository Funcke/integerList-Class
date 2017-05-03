#ifndef _LISTE_H_
#define _LISTE_H_

namespace project{
	
	class Node{
		public:
			int content;
			Node *Next;
			Node(int ncontent, Node *element);
			Node(int ncontent);
			Node();
	};
	
	class List{
		private:
			int _length;
			//length of the List
		public:
			Node *_Current;//pointer to current node
			Node *_First;
			Node *_Last;
			List(Node *first, Node *current, Node *last);
			List(Node *element);
			List();
			int Add(Node *element);
			int Remove(int position);
			int Insert(int position, Node *element);
			//int Move(int source, int destination);
			//int Sort();
			//int Max();
			//int Min();
			//Node *Peek(int position);
	};
}
#endif