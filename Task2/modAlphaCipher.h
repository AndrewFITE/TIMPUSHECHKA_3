#pragma once
#include <vector>
#include <string>
#include <map>
#include <iostream>
#include <cctype>
#include <locale>
#include <codecvt>
using namespace std;

class Cipher
{
private:
    int key;
public:
    Cipher() = delete; //запретим конструктор без параметров
    Cipher(int k); //конструктор для установки ключа
    string getValidText(const string & text); //делаем метод публичным
    string encrypt(const string& text); //зашифрование
    string decrypt(const string& cipher_text); //расшифрование
};

class cipher_error: public invalid_argument
{
public:
    explicit cipher_error (const string& what_arg):
        invalid_argument(what_arg) {}
    explicit cipher_error (const char* what_arg):
        invalid_argument(what_arg) {}
};
