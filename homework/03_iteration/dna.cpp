
#include <string>

/*
Write code for function get_gc_content that accepts
a const reference string parameter and returns a double.
Calculate GC content:
Iterate string count Gs and Cs, divide count by string length.
Return quotient.
*/
double get_gc(const std::string &dna)
{
	double total = 0;

	for (int i = 0; i < dna.length(); i++)
	{
		if (dna[i] == 'C' || dna[i] == 'G')
		{
			total += 1;
		}
	}
	return total / dna.length();
}


/*
Write code for function get_reverse_string that
accepts a string parameter and returns a string reversed.
*/
std::string get_reverse_string(std::string dna)
{
	std::string reversed_str;

	for (int i = dna.length() - 1; i >= 0; i--)
	{
		reversed_str += dna[i];
	}

	return reversed_str;
}



/*
Write prototype for function get_dna_complement that
accepts a string dna and returns a string.
Calculate dna complement:
a. call function get_reverse_string(dna), save results to a local string variable
b. iterate local string variable and
    replace A with T, T with A, C with G and G with C
c. return string

*/
std::string get_dna_complement(std::string dna)
{
	std::string reversed_str = get_reverse_string(dna);

	std::string dna_complement;

	for (int i = 0; i < reversed_str.length(); i++)
	{
		if (reversed_str[i] == 'A')
		{
			dna_complement += 'T';
		}
		else if (reversed_str[i] == 'T')
		{
			dna_complement += 'A';
		}
		else if (reversed_str[i] == 'C')
		{
			dna_complement += 'G';
		}
		else if (reversed_str[i] == 'G')
		{
			dna_complement += 'C';
		}
	}
	return dna_complement;
}


