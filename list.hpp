#ifndef __LISTE_H__
#define __LISTE_H__

namespace project{
	
	class Node{
		public:
			int content;
			Node *Next;

			//Constructor
			Node();
			Node(int ncontent);
			Node(int ncontent, Node *element);
	};
	
	class List{
		private:
			int _length;
		public:
			Node *_Current;
			Node *_First;
			Node *_Last;

			//Constructor
			List(Node *first, Node *current, Node *last);
			List(Node *element);
			List();

			//Methods
			int Add(Node *element);
			int Remove(int position);
			int Insert(int position, Node *element);
			Node * Seek(int value);
	};
}
#endif
