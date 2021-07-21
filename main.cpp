#include <bits/stdc++.h>

#include "keyboard.hpp"
#include "simulation.hpp"

int main()
{
	// std::string text = "the quick brown fox jumps over the lazy dog";
	std::string text;
	int c;

	while ((c = fgetc(stdin)) != EOF)
	{
		text += c;
	}

	size_t qwerty_strain = simulation::simulate(keyboard::qwerty_layout, text);
	size_t workman_strain = simulation::simulate(keyboard::workman_layout, text);
	size_t dvorak_strain = simulation::simulate(keyboard::dvorak_layout, text);

	std::cout << "qwerty: " << qwerty_strain << std::endl;
	std::cout << "workman: " << workman_strain << std::endl;
	std::cout << "dvorak: " << dvorak_strain << std::endl;
}