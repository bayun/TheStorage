#ifndef VERSION_H
#define VERSION_H

#include "property.h"
#include <list>
#include <string>

using std::string;

typedef std::list<Property> PropertyList;

class Version {
public:
	Version() : _id(0), _loaded(false) {};
	int id();
	const string &value();
	const PropertyList &properties();
private:
	bool load();
	int _id;
	string value;
};

#endif