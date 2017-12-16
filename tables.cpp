#include "tables.h"

#Ifdef cgendebug
'***********************************************************************************************
int oput; 
int iput as integer;
int theifskills2(36,8) ;
int theifhead2(8) ;
iput = freefile
oput = FreeFile
Open "testwrite.csv" For Output As #oput ' new CSV file for writing changed data
write #oput , theifhead(1), theifhead(2),theifhead(3),theifhead(4),theifhead(5),theifhead(6),theifhead(7),theifhead(8)
Dim As Integer hd, st,count, ct

st = lbound(theifskills)
hd = ubound(theifskills)

 For count = st To hd 
	
	write #oput ,theifskills(count,1),theifskills(count,2),theifskills(count,3),theifskills(count,4),theifskills(count,5),theifskills(count,6),theifskills(count,7),theifskills(count,8)
	
 next count
 close #oput
 Open "testwrite.csv" For input As #iput 
 input #iput, theifhead2(1), theifhead2(2),theifhead2(3),theifhead2(4),theifhead2(5),theifhead2(6),theifhead2(7),theifhead2(8)
 For count = 1 To 36 
	
	input #iput ,theifskills2(count,1),theifskills2(count,2),theifskills2(count,3),theifskills2(count,4),theifskills2(count,5),theifskills2(count,6),theifskills2(count,7),theifskills2(count,8)
	
 next count
 
 
 sleep 
 #EndIf
