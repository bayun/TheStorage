#ifndef STORED_OBJECT_H
#define STORED_OBJECT_H

#include "property.h"
#include "version.h"

#include <list>

typedef std::list<Version> VersionList;

class StoredObject {
public:
	StoredObject() : _id(0), _loaded(false), _versioned(false) {};
	virtual ~StoredObject();
	int id() const;
	const string &value();
	virtual const string &name();
	bool versioned();
	void versioned(bool);
	const VersionList &versions();
	const PropertyList &properties();
	setProperty(const string &name, const &value);
	deleteProperty(const string &name);
protected:
	virtual bool load();
private:
	int _id;
	string _value;
	bool _versioned;
	VersionList _versions;
	PropertyList _properties;
};

#endif