#pragma once
#include <string>
#include <memory>

using namespace std;

class Test_data
{
public:
	Test_data(string data);
	~Test_data();
	string data() const;
private:
	string data_;
};

struct Node
{
	std::shared_ptr<Test_data> data_ptr;
	Node* prev;
	Node(string data);
	~Node();
};

class Stack
{
	Node *top;
public:
	void push(string data);
	std::shared_ptr<Test_data> pop();
	bool is_empty() const;
	Stack(void);
	~Stack(void);
};

