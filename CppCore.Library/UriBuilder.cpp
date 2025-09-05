#include "pch.h"
#include "UriBuilder.h"

UriBuilder UriBuilder::New()
{
    return UriBuilder();
}

UriBuilder& UriBuilder::Scheme(const String& scheme)
{
    uri.scheme = scheme;
    return *this;
}

UriBuilder& UriBuilder::Domain(const String& domain)
{
    uri.domain = domain;
    return *this;
}

UriBuilder& UriBuilder::Port(const int port)
{
    uri.port = port;
    return *this;
}

UriBuilder& UriBuilder::Query(const String& query)
{
    uri.query = query;
    return *this;
}

UriBuilder& UriBuilder::Fragments(const String& fragments)
{
    uri.fragments = fragments;
    return *this;
}

Uri UriBuilder::Build()
{
    return uri;
}

UriBuilder::UriBuilder()
{
    
}
