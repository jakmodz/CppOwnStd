#pragma once
#include "Uri.h"
class UriBuilder
{
public:
	static UriBuilder New();
	UriBuilder& Scheme(const String& scheme);
	UriBuilder& Domain(const String& domain);
	UriBuilder& Port(const int port);
	UriBuilder& Query(const String& query);
	UriBuilder& Fragments(const String& fragments);
	Uri Build();
protected:
	UriBuilder();
private:
	Uri uri;
};

