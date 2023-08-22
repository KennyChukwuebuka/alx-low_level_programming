#include "main.h"

/**
 * print_elf - Function that prints elf file
 * @header: Params
 *
 * Return: file
 */

void print_elf(const ElfHeaderData *header)
{
	int i = 0;

	printf("Magic: ");

	for (i = 0; i < ELF_MAGIC_SIZE; ++i)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\nClass: %s\n", (header->e_ident[4] == 1) ? "32-bit" : "64-bit");
	printf("Data: %s\n", (header->e_ident[5] == 1) ?
			"Little-endian" : "Big-endian");
	printf("Version: %u\n", header->e_ident[6]);
	printf("OS/ABI: %u\n", header->e_ident[7]);
	printf("ABI Version: %u\n", header->e_ident[8]);
	printf("Type: %u\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int file_desc;
	ElfHeaderData header;
	ssize_t bytes_read;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	file_desc = open(argv[1], O_RDONLY);
	if (file_desc == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", argv[1]);
		return (98);
	}

	bytes_read = read(file_desc, &header, sizeof(ElfHeaderData));
	if (bytes_read != sizeof(ElfHeaderData))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(file_desc);
		return (98);
	}

	print_elf(&header);

	close(file_desc);
	return (0);
}
