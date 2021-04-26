#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
#include<vector>
#include<iomanip>

void about_info();
bool check_file(const char[]);
void read_file(const char[], char*, int);
int get_file_size(std::ifstream&);
int get_file_size(const char[]);
bool error_open(std::ifstream&);
bool error_eof(std::ifstream&);
int group_counter(const char*, int);
void write_to_file(const char[], const char[], const int);
void write_to_screen(const char[], const int);
