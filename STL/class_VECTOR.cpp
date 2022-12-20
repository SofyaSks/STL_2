//////класс vector////////////////
//
//template <class T, class _Allocator= Allocator<T> >
//class vector
	

//explicit vector(const Allocator &a = Allocator());
//
//explicit vector(size_type num, const T &val = T(), const Allocator &a = Allocator());
//
//vector(const vector <T, Allocator> &ob);
//
//template < class InIter>
//vector(InIter start, InIter end, const Allocator &a = Allocator());


//  ■■ ==
//  ■■ <
//	■■ <=
//	■■ !=
//	■■ >
//	■■ >=

//■■assign(InIter start,InIter end);
//
//■■assign(size_type num, const T &val);
//
//■■reference at(size_type i); []
//const_reference at(size_type i) const;
//
//■■reference back();
//const_reference back() const;
//
//■■iterator begin();/ end();
//const_iterator begin() const;
//
//■■ size_type capacity() const;
//
//■■ void clear();
//
//■■ bool empty() const; //1- true - пуст
//
//
//■■ iterator erase(iterator 1);
//
//■■iterator erase(iterator start, iterator end); [23,45,45,59,]  [14,17,7,78]
//
//■■  reference front();
//  const_reference front() const;
//
//■■allocator_type get_allocator() const;
//
//■■ iterator insert(iterator 2, 100);
//
//■■ void insert(iterator 3, size_type 10, 5);
//
//■■ template <class InIter>
//    void insert(iterator 2, InIter 2, InIter 4);
//
//■■ size_type max_size() const;
//
//■■ reference operator[](size_type i) const;
//   const_reference operator[](size_type i) const;
//
//■■ void swap(deque<T, Allocator> &ob); v1.swap(v2)
//


//Пример: Данный пример показывает приемы работы с контейнером vector.
#include <iostream>
#include <vector>
using namespace std;
void main()
{
	setlocale(LC_ALL, "Russian");
	vector<int> vect;
	cout << "\nКоличество элементов, которые могут быть сохранены \n"
		<< " в векторе без выделения большего объема памяти --> " << vect.capacity();
	cout << "\n-----------------------------------";

	cout << "\nЧисло элементов в векторе--> " << vect.size();
	cout << "\n-----------------------------------";
	vect.resize(4, 0);

	cout << "\nИзменение размера...\n";
	cout << "Число элементов в векторе--> " << vect.size() << endl;
	cout << "\nвектор -->\t";
	for (int i = 0; i<vect.size(); i++)
	{
		cout << vect[i] << '\t';
	}
	cout << "\n-----------------------------------";
	cout << "\nМаксимально возможная длина вектора--> " << vect.max_size() / 4;
	cout << "\n-----------------------------------";
	vect.push_back(1);

	cout << "\nВставка в конец вектора -->\t";
	for (int i = 0; i<vect.size(); i++)
	{
		cout << vect[i] << '\t';
	}
	cout << "\n-----------------------------------";
	vector<int>::reverse_iterator i_riterator = vect.rbegin();
	cout << "\nРеверсный итератор в конце вектора -->\t";
	for (int i = 0; i<vect.size(); i++)
	{
		cout << *(i_riterator + i) << '\t';
	}

	cout << "\n-----------------------------------";
	vector<int>::iterator i_iterator = vect.end();
	vect.insert(i_iterator - 1, -1);
	cout << "\ninsert\nvector -->\t";
	for (i_iterator = vect.begin();
		i_iterator != vect.end(); i_iterator++)
	{
		cout << *(i_iterator) << '\t';
	}
	cout << "\n-----------------------------------";
	i_iterator = vect.end();
	vect.insert(i_iterator - 1, 2, 4);

	cout << "\nвставка элементов в вектор -->\t";
	for (int i = 0; i<vect.size(); i++)
	{
		cout << vect[i] << '\t';
	}
	cout << "\n-------------------------------\n\n";

	int a1;
	double a2 = 10.3;
	a1 =(int) a2;
	cout << a1 << endl;


}
