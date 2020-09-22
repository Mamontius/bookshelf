#include <iostream>
#include <vector>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "Bshelf.h"
#
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	system ("chcp 1251");
	int mode = -1;
	vector<BookShelf> bshelfs;
	while(mode!=0){
		
			cout<<"Меню: "<<endl;
			cout<<"1.Добавить шкафю"<<endl;
			cout<<"2.Добавить полку в шкаф."<<endl;
			cout<<"3.Добавить книгу."<<endl;
			cout<<"4.Вывод на экран."<<endl;
			cout<<"0.Выйти за пивом"<<endl;
			cout<<"Введите номер и нажмите <Enter>"<<endl;
			cin>>mode;
			switch(mode){
				case 0:continue;
				case 1:
					bshelfs.push_back(bshelfs);
					cout<<"Шкаф добавлен"<<endl<<endl;
					break;
					case 2: if(bshelfs.size()>0){
						cout<<"Доступно "<<bshelfs.size()<<"шкафов"<<endl;
						cout<<"Введите номер шкафа (от 1 до "<<bshelfs.size()<<"):";
						int n = 0; 
						cin>>n;
						if (n>0 && n<=bshelfs.size()){
							bshelfs[n-1].addShelf();
							cout<<"Полка добавлена."<<endl<<endl;
							 }else{
							 	cout<<"Ошибка ввода в номере шкафа."<<endl<<endl;
							 	
							 }
							 else{
							 	cout<<"Доступные шкафы не на месте!"<<endl<<endl;
							 }
							 break;
						
							 case 3:
							 	break;
							 }
			}
			
		
	}
	cout<< "С меня хватит, я ухожу."
	return 0;
}
