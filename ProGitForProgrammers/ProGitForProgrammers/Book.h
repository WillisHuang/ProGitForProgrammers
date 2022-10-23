#pragma once

#include <string>
#include <list>
#include <ctime>
class Book
{
public:
	std::string Title;
	std::list<std::string> Authors;
	time_t PublicationDate;
};

