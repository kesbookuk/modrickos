#include "../include/kb.h"
#include "../include/isr.h"
#include "../include/idt.h"
#include "../include/util.h"
#include "../include/shell.h"
void kmain()
{
	isr_install();
    
	clearScreen();
	print("MODRICK OS KERNEL\n");
    	print("modrickLOGIN>$~\n");
    print("logged in as 'root'\n");
    launch_shell(0);    
}
