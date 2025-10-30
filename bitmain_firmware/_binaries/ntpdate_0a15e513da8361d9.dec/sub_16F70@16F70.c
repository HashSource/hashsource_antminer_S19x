char *__fastcall sub_16F70(_DWORD *a1, char *s1, unsigned int a3, int a4)
{
  unsigned int v6; // r5
  int v8; // r9
  int v9; // r4
  char *result; // r0

  if ( !a1 || (v6 = a3, *a1 != 1281582695) )
    sub_10C38();
  if ( !s1 )
    sub_10C38();
  v8 = a1[1];
  if ( *(_DWORD *)(a3 + 4) >= *(_DWORD *)(v8 + 12) )
    sub_10C38();
  if ( a4 )
  {
    if ( *(_DWORD *)(a4 + 4) >= *(_DWORD *)(v8 + 20) )
      sub_10C38();
  }
  v9 = a1[2];
  if ( !v9 )
    return (_BYTE *)(&dword_14 + 3);
  while ( strcmp(s1, *(const char **)v9) )
  {
    v9 = *(_DWORD *)(v9 + 52);
    if ( !v9 )
      return (_BYTE *)(&dword_14 + 3);
  }
  if ( v6 )
    return sub_157F0(a1, *(_DWORD *)(v6 + 4), a4, v9);
  if ( !*(_DWORD *)(v8 + 12) )
    return 0;
  while ( 1 )
  {
    result = sub_157F0(a1, v6, a4, v9);
    if ( result )
      break;
    if ( *(_DWORD *)(v8 + 12) <= ++v6 )
      return 0;
  }
  return result;
}
