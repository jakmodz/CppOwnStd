#pragma once
#include "String.h"
class Uri
{
public:
	Uri();
	Uri(String uri);
	Uri(Uri uri1,String uri2);
private:
	String scheme;
	String domain;
	int port;
	String query;
	String fragments;


	friend class UriBuilder;
};

