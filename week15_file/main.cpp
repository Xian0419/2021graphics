#include <stdio.h>  ///printf(), fprintf()
int main( int argc, char**argv )
{

///    FILE * fout = NULL;///�ɮת����� fout output��
///    fout = fopen( "�ɦW.txt", "w+" ); ///�}���ɮ�,�ϥ�w+�Ҧ� ( write )
///     printf(      "Hello World\n");
///    fprintf( fout,"Hello World\n");

    FILE * fin = NULL;
    fin = fopen( "�ɦW.txt", "r" );
/// scanf( "%d", &n);   �t int n;
/// scanf( "%f", &f);      float f;
/// scanf( "%c", &c);      char c;
/// scanf( "%s", &line);   char line[100]
    char line[100];
    fscanf( fin, "%s", line );
    printf( "�AŪ��F�r��: %s\n", line );
    fscanf( fin, "%s", line );
    printf( "�AŪ��F�r��: %s\n", line );

}
