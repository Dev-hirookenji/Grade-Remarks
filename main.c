#include <stdio.h>
#include <stdlib.h>
#define p printf
#define s scanf

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*Mark Kenneth O. Ferrer DICT 1-3*/


int main()
{
	
	char stname[40], ans;
	int pass=0, fail=0, a, mgrade, fgrade, ave, stno;
	
	p("\t\tPUP INSTITUTE OF TECHNOLOGY");
	p("\n\t\tPUREZA ST. STA. MESA, MANILA");
	
	do{
		p("\nSTUDENT NO.:	");
		s("%d", &stno);
		p("\nSTUDENT NAME:	");
		s("%s", &stname);
		p("\nMIDTERM GRADE:	");
		s("%d", &mgrade);
		p("\nFINAL GRADE:	");
		s("%d", &fgrade);	
		ave=(mgrade+fgrade)/2;
		p("AVERAGE GRADE: %d", ave);
		if(ave>=75)
		{
			p("\nREMARK: PASSED");
			pass=pass+1;
		}
		else if(ave<75)
		{
			p("\nrREMAARK: FAILED");
			fail=fail+1;
		}
	
	p("\n\nPROCESS ANOTHER? (Y/N)");
	s("%s", &ans);
}
    while((ans=='Y')||(ans=='y'));
	p("\nTHANK YOU FOR USING THE SYSTEM");
	a=pass+fail;
	
	p("\n\nTOTAL NO. OF STUDENTS PASSED:	%d", pass);
	p("\nTOTAL NO. OF STUDENTS FAILED:	%d", fail);
	p("\nTOTAL NO. OF STUDENTS PROCESSED: %d \n", a);
 
  	system("PAUSE");
	
	return 0;
}
