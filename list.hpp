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
		public:
			Node *_Current;
			Node *_First;
			Node *_Last;
			List(Node *first, Node *current, Node *last);
			List(Node *element);
			List();
			int Add(Node *element);
			int Remove(int position);
			int Insert(int position, Node *element);
	};
}
#endif
