ENTRY(intReset)

MEMORY
{
  RAM (xrw) : ORIGIN = 0x20000000, LENGTH = 32K
  FLASH (rx) : ORIGIN = 0x08000000, LENGTH = 128K
}

SECTIONS
{
    /* Vector at 0x0800 0000 */
    .isr_vector 0x08000000 :
    {
        . = ALIGN(4);
        KEEP(*(.isr_vector.core))
        KEEP(*(.isr_vector.interrupt))
    } >FLASH
    
    .text :
    {
        . = ALIGN(4);
        *(.text .text.*)			/* all remaining code */
        *(.rodata .rodata.*) 		/* read-only data (constants) */
    } >FLASH

    .bss (NOLOAD) :
    {
	    . = ALIGN(4);
        *(.bss .bss.*)
    } >RAM
    
    .noinit (NOLOAD) :
    {
	    . = ALIGN(4);
        *(.noinit .noinit.*) 
    } > RAM
}