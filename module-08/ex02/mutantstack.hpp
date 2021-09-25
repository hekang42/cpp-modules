#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <stack>
#include <iostream>
template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack();
	MutantStack(MutantStack const &other);
	virtual ~MutantStack() {};
	MutantStack<T> &operator=(MutantStack<T> const &other);
	typedef typename MutantStack<T>::stack::container_type::iterator iterator;
	typedef typename MutantStack<T>::stack::container_type::reverse_iterator riterator;
	iterator begin();
	iterator end();
	riterator rbegin();
	riterator rend();
};
#endif