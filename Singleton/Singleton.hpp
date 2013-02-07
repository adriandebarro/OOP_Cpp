#pragma once
class Singleton
{
public:	
	~Singleton(void);
	static Singleton& get_instance();
private:
	Singleton(void);
	Singleton(const Singleton& s);

	static Singleton instance;
};

