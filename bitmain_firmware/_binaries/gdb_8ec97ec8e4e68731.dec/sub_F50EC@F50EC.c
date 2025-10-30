int __fastcall sub_F50EC(_DWORD *a1, const char **a2, unsigned __int8 **a3)
{
  unsigned __int8 *v4; // r7
  _BYTE *v7; // r0
  size_t v8; // r6
  const char *v9; // r0
  int v10; // r10
  int i; // r4
  bool v12; // zf
  const char *v13; // t1
  size_t v14; // r6

  v4 = *a3;
  v7 = sub_93610(*a3);
  v8 = v7 - v4;
  if ( *v7 == 32 )
  {
    v9 = *a2;
    v10 = -1;
    if ( !*a2 )
      return v10;
    for ( i = 0; ; ++i )
    {
      if ( !strncmp(v9, (const char *)v4, v8) )
      {
        v12 = v10 == -1;
        v10 = i;
        if ( !v12 )
          break;
      }
      v13 = a2[1];
      ++a2;
      v9 = v13;
      if ( !v13 )
      {
        if ( v10 != -1 )
        {
          v14 = v8 + 1;
          *a1 += v14;
          *a3 = &v4[v14];
        }
        return v10;
      }
    }
  }
  return -1;
}
