int __fastcall sub_155408(int *a1, int *a2, int a3, int a4, char a5, int a6, unsigned __int8 a7)
{
  char *v7; // r5
  char *v8; // r4
  unsigned int v9; // r7
  unsigned int v10; // t1
  unsigned int v11; // t1
  bool v12; // cf

  v7 = (char *)a1 + 114;
  v8 = (char *)&unk_1DBA59;
  do
  {
    v10 = (unsigned __int8)*--v7;
    v9 = v10;
    v11 = (unsigned __int8)*--v8;
    v12 = v9 >= v11;
    if ( v9 > v11 )
      break;
    if ( !v12 )
      return sub_154E3C(a1, a2, a3, a4, a5, a6, a7);
  }
  while ( v8 != (char *)&unk_1DBA20 );
  return 0;
}
