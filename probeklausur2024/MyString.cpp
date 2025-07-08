/*
 * MyString.cpp
 *
 *  Created on: Jul 2, 2025
 *      Author: bengutzeit
 */

#include "MyString.h"

MyString::MyString(char* in){
	if (in != nullptr){
		int i = 0;
		while (in[i] != '\0'){
			string.push_back(in[i]);
			i++;
		}
	}
}

MyString::MyString(const std::string& in){
	for (char c : in){
		string.push_back(c);
	}
}

MyString::~MyString() = default;


MyString::MyString(const MyString& other){
	operator=(other);
}

const MyString& MyString::operator=(const MyString& other){
	if(other.get_size() > 0){
		string.clear();
			for (char c : other.string){
				string.push_back(c);
		}
	}
	return *this;
}

int MyString::get_size() const{
	return string.size();
}

std::ostream& operator<<(std::ostream& out,const MyString& data){
	out << "\"";
	for(char c : data.string){
		out << c;
	}
	out << "\"";
	return out;
}

