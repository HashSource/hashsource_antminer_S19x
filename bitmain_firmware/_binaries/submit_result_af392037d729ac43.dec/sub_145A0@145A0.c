int __fastcall sub_145A0(_DWORD *a1, char *s, _DWORD *a3)
{
  size_t v6; // r0
  unsigned int *v8; // r3
  unsigned int v9; // r2
  unsigned int v10; // r2

  if ( s )
  {
    v6 = strlen(s);
    if ( sub_13CD8((int)s, v6) )
      return sub_144B0(a1, s, a3);
  }
  if ( a3 && a3[1] != -1 )
  {
    v8 = a3 + 1;
    __dmb(0xFu);
    do
    {
      v9 = __ldrex(v8);
      v10 = v9 - 1;
    }
    while ( __strex(v10, v8) );
    if ( !v10 )
      sub_1427C(a3);
  }
  return -1;
}
