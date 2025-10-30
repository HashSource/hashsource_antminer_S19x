int __fastcall sub_311344(_DWORD *a1, unsigned __int8 **a2, _DWORD *a3)
{
  int v4; // r3
  unsigned __int8 *v7; // r8
  int v8; // r0
  int v9; // r2
  void **v10; // r9
  __int64 v12; // r0
  __int64 v13; // r0

  v4 = a1[20];
  v7 = *a2;
  while ( 1 )
  {
    a3[2] = 0;
    a3[1] = 0;
    *a3 = 0;
    if ( v4 > 0 )
      break;
    if ( **a2 != 110 )
    {
      v10 = (void **)a1[19];
      if ( v10 )
      {
        if ( *v10 )
        {
          free(*v10);
          v10[1] = 0;
          v10[2] = 0;
          *v10 = 0;
          v10 = (void **)a1[19];
        }
      }
      else
      {
        v10 = (void **)sub_93028(0xCu);
        a1[19] = v10;
      }
      if ( !sub_30E828(a1, a2, (unsigned int)v10) )
        return 0;
      HIDWORD(v13) = a1[19];
      LODWORD(v13) = a3;
      sub_30D52C(v13, *(_DWORD *)(HIDWORD(v13) + 4));
      sub_30D7CC(a1, v7, *a2 - v7);
      return 1;
    }
    ++*a2;
    v8 = sub_30D00C(a2);
    v4 = v8;
    a1[20] = v8;
    if ( v8 <= 0 )
      return 0;
    v7 = *a2;
    if ( v8 > 9 )
    {
      v9 = *v7++;
      if ( v9 != 95 )
        return 0;
      *a2 = v7;
    }
  }
  HIDWORD(v12) = a1[19];
  a1[20] = v4 - 1;
  if ( !HIDWORD(v12) )
    return 0;
  LODWORD(v12) = a3;
  sub_30D52C(v12, *(_DWORD *)(HIDWORD(v12) + 4));
  return 1;
}
