/*
 * MyString.h
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#ifndef MYSTRING_H_
#define MYSTRING_H_
#include <iostream>
#include <vector>

class MyString {
public:
std::vector<char> string;

public:
	MyString() = delete;
	MyString(char*);
	MyString(const std::string&);
	MyString(const MyString&);
	const MyString& operator=(const MyString&);
	int get_size() const;
	virtual ~MyString();
	friend std::ostream& operator<<(std::ostream&, const MyString&);
};

#endif /* MYSTRING_H_ */
