#pragma once
#ifndef LIBRERIA_H
#define LIBRERIA_H

#include <iostream>
#include "DelimTextBuffer.h"
#include "Book.h"
using namespace std;

class Libreria {
public:
	Libreria();

	int Write(DelimTextBuffer&, ostream& fileDestination, int _repets = 1);
	int Read(DelimTextBuffer&, istream& file);
	int Pack(DelimTextBuffer&);
	int Unpack(DelimTextBuffer&);
};



#endif // !LIBRERIA_H
