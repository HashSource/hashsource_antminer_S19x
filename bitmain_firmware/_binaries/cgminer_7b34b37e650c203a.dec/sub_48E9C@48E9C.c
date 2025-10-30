int __fastcall sub_48E9C(_DWORD *a1, char *a2, _DWORD *a3)
{
  size_t v6; // r0
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2

  if ( a2 )
  {
    v6 = strlen(a2);
    if ( sub_47EB4((int)a2, v6) )
      return sub_48CF4(a1, a2, a3);
  }
  if ( !a3 )
    return -1;
  if ( a3[1] == -1 )
    return -1;
  v8 = a3 + 1;
  __dmb(0xBu);
  do
  {
    v9 = __ldrex(v8);
    v10 = v9 - 1;
  }
  while ( __strex(v10, v8) );
  if ( v10 )
    return -1;
  sub_48A34(a3);
  return -1;
}
