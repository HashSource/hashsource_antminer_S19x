void __fastcall sub_258360(const char **a1)
{
  int **v2; // r6
  int **v3; // r7
  const char *v4; // r1
  char *v5; // r10
  char *v6; // r0
  char *v7; // r8
  int v8; // r9
  int v9; // r0
  char *v10; // r8
  int v11; // r0
  char *v12; // r8
  char *v13; // r5
  char *v14; // r10
  char *v15; // r9

  v2 = (int **)sub_93028(4u);
  v3 = (int **)sub_93028(4u);
  v4 = *a1;
  *v2 = 0;
  *v3 = 0;
  v5 = sub_93140("Configure what GDB does when %s is detected.", v4);
  v6 = sub_93140("Show what GDB does when %s is detected.", *a1);
  v7 = (char *)*a1;
  v8 = (int)v6;
  v9 = sub_31E27C("maintenance set ", *a1, &word_3E1F84);
  sub_533F8(v7, 11, (int)nullsub_96, (int)v5, v2, v9, 0, (int **)&dword_487A7C);
  v10 = (char *)*a1;
  v11 = sub_31E27C("maintenance show ", *a1, &word_3E1F84);
  sub_533F8(v10, 11, (int)nullsub_97, v8, v3, v11, 0, (int **)&dword_487A84);
  if ( a1[1] )
  {
    v14 = sub_93140("Set whether GDB should quit when an %s is detected", *a1);
    v15 = sub_93140("Show whether GDB will quit when an %s is detected", *a1);
    sub_534EC("quit", 11, (int)"\b1?", (int)(a1 + 2), v14, v15, 0, 0, 0, v2, v3);
    if ( v14 )
      free(v14);
    if ( v15 )
      free(v15);
  }
  if ( a1[3] )
  {
    v12 = sub_93140("Set whether GDB should create a core file of GDB when %s is detected", *a1);
    v13 = sub_93140("Show whether GDB will create a core file of GDB when %s is detected", *a1);
    sub_534EC("corefile", 11, (int)"\b1?", (int)(a1 + 4), v12, v13, 0, 0, 0, v2, v3);
    if ( v12 )
      free(v12);
    if ( v13 )
      free(v13);
  }
}
