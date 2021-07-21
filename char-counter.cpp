#include <bits/stdc++.h>

struct Digram
{
	char a;
	char b;

	Digram(char a, char b) : a(a), b(b) {}

	bool operator==(const Digram& other) const
	{
		return a == other.a && b == other.b;
	}

	bool operator!=(const Digram& other) const
	{
		return a != other.a || b != other.b;
	}

	std::string to_str() const
	{
		std::string out;

		out += a;
		out += b;

		return out;
	}
};

template <>
struct std::hash<Digram>
{
	std::size_t operator()(const Digram& digram) const
	{
		return digram.a << 8 | digram.b;
	}
};

struct Trigram
{
	char a;
	char b;
	char c;

	Trigram(char a, char b, char c) : a(a), b(b), c(c) {}

	bool operator==(const Trigram& other) const
	{
		return a == other.a && b == other.b && c == other.c;
	}

	bool operator!=(const Trigram& other) const
	{
		return a != other.a || b != other.b || c != other.c;
	}

	std::string to_str() const
	{
		std::string out;

		out += a;
		out += b;
		out += c;

		return out;
	}
};

template <>
struct std::hash<Trigram>
{
	std::size_t operator()(const Trigram& trigram) const
	{
		return trigram.a << 16 | trigram.b << 8 + trigram.c;
	}
};

int main()
{
	int a = EOF; // Two before current char
	int b = EOF; // One before current char
	int c;       // Current char

	// Keep track of single char, digram and trigram counts

	std::unordered_map<char, size_t> char_count;
	std::unordered_map<Digram, size_t> digram_count;
	std::unordered_map<Trigram, size_t> trigram_count;

	while ((c = fgetc(stdin)) != EOF)
	{
		// Add this char to the char count

		char_count[c]++;

		// Add digram

		if (b != EOF)
		{
			digram_count[Digram(b, c)]++;
		}

		// Add trigram

		if (a != EOF)
		{
			trigram_count[Trigram(a, b, c)]++;
		}

		// Update previous chars

		a = b;
		b = c;
	}

	// Sorted vectors for single char, digram and trigram counts

	std::vector<std::pair<char, size_t>> sorted_char_count;
	std::vector<std::pair<Digram, size_t>> sorted_digram_count;
	std::vector<std::pair<Trigram, size_t>> sorted_trigram_count;

	// Move the entries on the single char count map into its sorted vector

	for (std::pair<char, size_t>&& entry : char_count)
	{
		sorted_char_count.push_back(std::move(entry));
	}

	// Move the entries on the digram count map into its sorted vector

	for (std::pair<Digram, size_t>&& entry : digram_count)
	{
		sorted_digram_count.push_back(std::move(entry));
	}

	// Move the entries on the trigram count map into its sorted vector

	for (std::pair<Trigram, size_t>&& entry : trigram_count)
	{
		sorted_trigram_count.push_back(std::move(entry));
	}

	// Sort the single char count vector

	std::sort(sorted_char_count.begin(), sorted_char_count.end(),
		[](const std::pair<char, size_t>& a, const std::pair<char, size_t>& b)
		{
			return a.second > b.second;
		});

	// Sort the digram count vector

	std::sort(sorted_digram_count.begin(), sorted_digram_count.end(),
		[](const std::pair<Digram, size_t>& a, const std::pair<Digram, size_t>& b)
		{
			return a.second > b.second;
		});

	// Sort the trigram count vector

	std::sort(sorted_trigram_count.begin(), sorted_trigram_count.end(),
		[](const std::pair<Trigram, size_t>& a, const std::pair<Trigram, size_t>& b)
		{
			return a.second > b.second;
		});

	std::cout << "===============================" << std::endl;
	std::cout << "Characters sorted by frequency:" << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << std::endl;

	for (const std::pair<char, size_t>& entry : sorted_char_count)
	{
		std::cout << "'" << entry.first << "': " << entry.second << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "===============================" << std::endl;
	std::cout << "Digrams sorted by frequency:" << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << std::endl;

	for (const std::pair<Digram, size_t>& entry : sorted_digram_count)
	{
		std::cout << "\"" << entry.first.to_str() << "\": " << entry.second << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	std::cout << "===============================" << std::endl;
	std::cout << "Trigrams sorted by frequency:" << std::endl;
	std::cout << "===============================" << std::endl;
	std::cout << std::endl;

	for (const std::pair<Trigram, size_t>& entry : sorted_trigram_count)
	{
		std::cout << "\"" << entry.first.to_str() << "\": " << entry.second << std::endl;
	}
}