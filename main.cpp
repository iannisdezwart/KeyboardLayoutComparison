#include <bits/stdc++.h>

#include "keyboard.hpp"
#include "keyboard-layouts.hpp"

/**
 * @brief Loads all keyboard layouts from the given directory.
 * Keyboard layouts end with the `.keymap` extension.
 * @param directory Directory to load keyboard layouts from.
 * @returns Vector of loaded keyboard layouts.
 */
std::vector<keyboard::Keyboard> load_layouts(std::string directory)
{
	std::vector<keyboard::Keyboard> keyboards;

	for (auto& entry : std::filesystem::directory_iterator(directory))
	{
		if (entry.path().extension() == ".keymap")
		{
			keyboards.push_back(keyboard::read_layout(
				entry.path().string()));
		}
	}

	return keyboards;
}

int main()
{
	// Read the text to type from stdin.

	std::string text;
	int c;

	while ((c = fgetc(stdin)) != EOF)
	{
		text += c;
	}

	// Type the text on all keyboards and print analytics.

	for (auto& keyboard : load_layouts("layouts"))
	{
		keyboard.type(text);

		std::cout << "Keyboard: " << keyboard.name << std::endl;
		keyboard.print_analytics();
		std::cout << std::endl;
	}
}