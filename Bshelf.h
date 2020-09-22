#ifndef bshelf_h
#define bshelf_h
#include <iostream>
#include <string>
#include <vector>
#include "Shelf.h"
#include "PrintBook.h"

using namespace std;
class BookShelf{
	protected:
		vector<Shelf> shelfs;
		public:
			void addBook(PrintBook pb,int shelf_id){
			
			if (shelf_id<shelfs.size()-1){
				shelfs[shelf_id].addBook(pb);
			}else{
				cout<<"Error in shelf ID \n";
			
			}
			}

	PrintBook getBook(int shelf_id, int book_id)
		{if(shelf_id<shelfs.size()-1){
			shelfs[shelf_id].getBook(book_id);
			}
			else{
				cout<<"Error in shelf ID \n";};
				PrintBook pb;
				return pb;
			}
	void AddShelf(){
		Shelf shelf;
		shelfs.push_back(shelf);
		
	}
	void (Printvector<Shelf> shelfs){
		cout<<"BookShelf info: "<<shelfs.size()<<":\n";
		for
		shelfs[i].Print(); 
	};
};
#endif
