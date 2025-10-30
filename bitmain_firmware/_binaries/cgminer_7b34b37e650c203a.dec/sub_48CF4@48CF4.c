int __fastcall sub_48CF4(_DWORD *a1, char *a2, _DWORD *a3)
{
  bool v4; // zf
  int result; // r0
  _BOOL4 v6; // r3
  unsigned int *v7; // r3
  unsigned int v8; // r2
  unsigned int v9; // r2
  unsigned int *v10; // r3
  unsigned int v11; // r2

  if ( !a3 )
    return -1;
  v4 = a1 == 0;
  if ( a1 )
    v4 = a2 == 0;
  if ( !v4 )
  {
    v6 = a3 == a1;
    if ( *a1 )
      v6 = 1;
    if ( !v6 )
    {
      result = sub_4587C(a1 + 2, a2, (int)a3);
      if ( !result )
        return result;
      if ( a3[1] != -1 )
      {
        v7 = a3 + 1;
        __dmb(0xBu);
        do
        {
          v8 = __ldrex(v7);
          v9 = v8 - 1;
        }
        while ( __strex(v9, v7) );
        goto LABEL_18;
      }
      return -1;
    }
  }
  if ( a3[1] == -1 )
    return -1;
  v10 = a3 + 1;
  __dmb(0xBu);
  do
  {
    v11 = __ldrex(v10);
    v9 = v11 - 1;
  }
  while ( __strex(v9, v10) );
LABEL_18:
  if ( v9 )
    return -1;
  sub_48A34(a3);
  return -1;
}
