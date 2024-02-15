#include "main.h"

/**
 * main - program that dispalys the information contained in the ELF header
 * at the start of an ELF file (ELF - Executable and Linkable Format)
 * @argc: argument count
 * @argv: poiter to argument vector
 * Return: 0 (succcess)
 */

int main(int argc, char *argv[])
{
	int fp;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		err_exit("Usage: elf_header elf_filename");
	}

	fp = open(argv[1], O_RDONLY);
	if (fp == -1)
	{
		err_exit("Error: Cannot open file");
	}

	if (read(fp, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		err_exit("Error: Cannot read ELF header");
	}

	if (!(header.e_ident[EI_MAG0] == ELFMAG0 &&
		header.e_ident[EI_MAG1] == ELFMAG1 &&
		header.e_ident[EI_MAG2] == ELFMAG2 &&
		header.e_ident[EI_MAG3] == ELFMAG3))
	{
		err_exit("Error: Not an ELF file");
	}

	elf_header(&header);

	close(fp);
	return (0);
}

/**
 * elf_header - function to print ELF header
 * @header: pointer to the header
 * Return: nothing
 */

void elf_header(Elf64_Ehdr *header)
{
	int k;

	printf("ELF Header:\n");
	printf(" Magic: ");
	for (k = 0; k < EI_NIDENT; k++)
	{
		printf("%02x ", header->e_ident[k]);
	}
	printf("\n");
	printf(" Class:	%s\n", (header->e_ident[EI_CLASS] == ELFCLASS64) ?
			"ELF64" : "ELF32");
	printf(" Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ?
			"2's complement, little endian" : "2's compliment, big endian");
	printf(" Version: %d (current)\n", header->e_ident[EI_VERSION]);
	printf(" OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf(" ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf(" Type: %s\n",
			(header->e_type == ET_NONE) ? "NONE (No file type)" :
			(header->e_type == ET_REL) ? "REL (Relocatable file)" :
			(header->e_type == ET_EXEC) ? "EXEC (Executable file)" :
			(header->e_type == ET_DYN) ? "DYN (Shared object file)" :
			(header->e_type == ET_CORE) ? "CORE (Core file)" :
			"Unknown type"
	      );
	printf(" Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * err_exit - prints error message and exits
 * @message: message to be dispalyed
 * Return: nothing
 */

void err_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}
