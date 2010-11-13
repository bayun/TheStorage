#ifndef PROPERTY_H
#define PROPERTY_H

#include <string>

using std::string;

class Property {
public:
	Property() : _id(0) {};
	operator string();
	const string &name();
	const sring &value();
	int id() const;
private:
	string _name;
	string _value;
	int _id;
};

#endif