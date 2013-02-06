#include "Stack.hpp"
#include <iostream>


Stack::Stack(void) :
	top(NULL)
{
}

Stack::~Stack(void)
{
	while(!is_empty())
		pop()->data();
}

void Stack::push(string data)
{
	Node* new_node = new Node(data);
	new_node->prev = top;
	top = new_node;
}

std::shared_ptr<Test_data> Stack::pop()
{
	if (!is_empty()) {
		Node *current = top;
		std::shared_ptr<Test_data> result = current->data_ptr;
		top = current->prev;
		delete current;	
		return result;
	}
	else return NULL;
}

bool Stack::is_empty() const
{
	return top == NULL;
}

Node::~Node()
{
	std::cout << "Node destructor, data: " << data_ptr->data() << std::endl;
}

Node::Node( string data )
{
	data_ptr = std::shared_ptr<Test_data>(new Test_data(data));
}

Test_data::Test_data(string data) : 
	data_(data) {
	cout << "Data constructor" << endl;
}

Test_data::~Test_data(){
	cout << "Data " << data_ << " destructor" << endl;
}

std::string Test_data::data() const {
	return data_;
}
