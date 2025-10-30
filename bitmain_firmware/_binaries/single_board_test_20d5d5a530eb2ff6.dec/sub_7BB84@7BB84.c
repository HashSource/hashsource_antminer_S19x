int __fastcall sub_7BB84(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  char *i; // r4
  _DWORD *v6; // r0
  unsigned int *v7; // r3
  unsigned int v8; // r1
  int v9; // r0

  if ( !a1 || *a1 || !a2 || *a2 )
    return -1;
  v4 = sub_7B318(a2);
  for ( i = (char *)sub_7B354(v4); i; i = (char *)sub_7B354(v9) )
  {
    v6 = (_DWORD *)sub_7B35C((int)(i - 16));
    v7 = v6 + 1;
    if ( !v6 )
      break;
    if ( v6[1] != -1 )
    {
      do
        v8 = __ldrex(v7);
      while ( __strex(v8 + 1, v7) );
      __dmb(0xFu);
    }
    if ( sub_7B948(a1, i, v6) )
      return -1;
    v9 = sub_7B340(a2, (int)(i - 16));
  }
  return 0;
}
