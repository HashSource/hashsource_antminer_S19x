int __fastcall sub_144B0(_DWORD *a1, char *a2, _DWORD *a3)
{
  bool v4; // zf
  int result; // r0
  unsigned int *v6; // r3
  unsigned int v7; // r2
  unsigned int v8; // r2
  unsigned int *v9; // r3
  unsigned int v10; // r2

  if ( !a3 )
    return -1;
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( v4 || *a1 || a1 == a3 )
  {
    if ( a3[1] != -1 )
    {
      v9 = a3 + 1;
      __dmb(0xFu);
      do
      {
        v10 = __ldrex(v9);
        v8 = v10 - 1;
      }
      while ( __strex(v8, v9) );
      goto LABEL_11;
    }
  }
  else
  {
    result = sub_12468(a1 + 2, a2, (int)a3);
    if ( !result )
      return result;
    if ( a3[1] != -1 )
    {
      v6 = a3 + 1;
      __dmb(0xFu);
      do
      {
        v7 = __ldrex(v6);
        v8 = v7 - 1;
      }
      while ( __strex(v8, v6) );
LABEL_11:
      if ( !v8 )
        sub_1427C(a3);
    }
  }
  return -1;
}
