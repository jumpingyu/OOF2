/* DEBUG : Language specific headers go here */

/* DEBUG : Pointer conversion function here */

/* DEBUG : Language specific code here */

#define   SWIG_init     swig_init

#define   SWIG_name    "swig"


WRAPPER : int foo(int );

WRAPPER : double bar(double );

WRAPPER : double grok(int );

WRAPPER : int frob(int );

WRAPPER : double foobar(double );

WRAPPER : double spam(int );

WRAPPER : int spif(double );

SWIG POINTER-MAPPING TABLE

/*
 * This table is used by the pointer type-checker
 */
static struct { char *n1; char *n2; void *(*pcnv)(void *); } _swig_mapping[] = {
    { "_signed_long","_long",0},
    { "_long","_unsigned_long",0},
    { "_long","_signed_long",0},
    { "_unsigned_long","_long",0},
    { "_signed_int","_int",0},
    { "_unsigned_short","_short",0},
    { "_signed_short","_short",0},
    { "_unsigned_int","_int",0},
    { "_short","_unsigned_short",0},
    { "_short","_signed_short",0},
    { "_int","_unsigned_int",0},
    { "_int","_signed_int",0},
{0,0,0}};


/* MODULE INITIALIZATION */

void swig_init() {
     ADD COMMAND    : foo --> int foo(int );
     ADD COMMAND    : bar --> double bar(double );
     ADD COMMAND    : grok --> double grok(int );
     ADD COMMAND    : frob --> int frob(int );
     ADD COMMAND    : foobar --> double foobar(double );
     ADD COMMAND    : spam --> double spam(int );
     ADD COMMAND    : spif --> int spif(double );
}  /* END INIT */
{
   int i;
   for (i = 0; _swig_mapping[i].n1; i++)
        SWIG_RegisterMapping(_swig_mapping[i].n1,_swig_mapping[i].n2,_swig_mapping[i].pcnv);
}
