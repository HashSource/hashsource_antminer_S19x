int __fastcall sub_11DCA8(int a1, char *s1)
{
  int v3; // r2
  int v5; // r4
  char *v6; // r7
  unsigned __int8 v7; // r0
  int v8; // t1
  int v9; // r8
  int v10; // r7
  int v11; // r4
  int v12; // r5
  const char *v13; // r1
  int i; // r9

  v3 = (unsigned __int8)*s1;
  if ( *s1 )
  {
    v6 = s1 + 1;
    v5 = 0;
    do
    {
      v7 = tolower(v3);
      v8 = (unsigned __int8)*v6++;
      v3 = v8;
      v5 = v7 + 67 * v5 - 113;
    }
    while ( v8 );
    v3 = 17 * v5;
  }
  else
  {
    v5 = (unsigned __int8)*s1;
  }
  v9 = *(_DWORD *)(a1 + 4);
  v10 = -858993459 * ((*(_DWORD *)(a1 + 8) - v9) >> 2) - 1;
  v11 = v5 & v10;
  v12 = v3 & v10 | 1;
  v13 = *(const char **)(v9 + 20 * v11);
  for ( i = v9 + 20 * v11; v13; i = v9 + 20 * v11 )
  {
    v11 = (v12 + v11) & v10;
    if ( !strcmp(s1, v13) )
      break;
    v13 = *(const char **)(v9 + 20 * v11);
  }
  return i;
}
