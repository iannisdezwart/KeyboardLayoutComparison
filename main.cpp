#include <bits/stdc++.h>

#include "keyboard.hpp"
#include "keyboard-layouts.hpp"

int main()
{
	// std::string text = "the quick brown fox jumps over the lazy dog";
	std::string text;
	int c;

	while ((c = fgetc(stdin)) != EOF)
	{
		text += c;
	}

	std::cout << "===== Qwerty ======" << std::endl;
	keyboard::QwertyKeyboard().type(text).print_analytics();
	std::cout << "===================" << std::endl;
	std::cout << std::endl;

	std::cout << "===== Workman =====" << std::endl;
	keyboard::WorkmanKeyboard().type(text).print_analytics();
	std::cout << "===================" << std::endl;
	std::cout << std::endl;

	std::cout << "=== Workman Plus ==" << std::endl;
	keyboard::WorkmanPlusKeyboard().type(text).print_analytics();
	std::cout << "===================" << std::endl;
	std::cout << std::endl;

	std::cout << "===== Dvorak ======" << std::endl;
	keyboard::DvorakKeyboard().type(text).print_analytics();
	std::cout << "===================" << std::endl;
}