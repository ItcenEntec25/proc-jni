/*
 ============================================================================
 Name        : swat-proc-jni.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#include "t2.h"
#include "t3.h"

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	t_select();
	t3_select();

	return EXIT_SUCCESS;
}
