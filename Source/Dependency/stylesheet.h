#include <stdio.h>
class Spacers{
    public:
    const char * dashedLine =  "-----------------------------------------------------------------\n";
    const char * midLine = "|---------------------------------------------------------------|\n";
    const char * emptyLine = "\n";
};
Spacers spacers;
void DASHED_LINE(){
    printf("%s", spacers.dashedLine);
}
void MID_LINE(){
    printf("%s", spacers.midLine);
}
void EMPTY_LINE(){
    printf("%s", spacers.emptyLine);
}