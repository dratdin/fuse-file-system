#include "reporting.h"

void clear_journal() {
	FILE *f = fopen("/Users/Rodion/Desktop/report.txt","w+");
	fclose(f);
}

void add_journal_note(const char *message) {
	FILE *f = fopen("/Users/Rodion/Desktop/report.txt","a+");
	fputs(message,f);
	fclose(f);
}
