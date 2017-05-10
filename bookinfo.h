/*
Harleigh Abel
May 9, 2017
Absolute Beginners Guide to C Programming 
Chapter 27 ex1 page 262
File bookinfo.h
This header file defines a structure for information about
a book */

struct bookInfo {
	char title[40];
	char author[25];
	float price;
	int pages;
};

