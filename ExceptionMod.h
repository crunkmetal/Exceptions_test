#pragma once
#include <exception>

class myexception : public std::exception	// create a derived class from base C++ exception class
{
	virtual const char* what() const throw()
	{
		return "My exception happened";	// give a helpful msg to programmer for fixing
	}
}myex;	// give the exception a value that is used to throw it