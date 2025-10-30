_BYTE *__fastcall sub_181964(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r7
  _BYTE *result; // r0
  int v10; // r7
  int i; // r4
  const char *v12; // r10
  int v13; // r0
  _UNKNOWN **v14; // r2

  v8 = ((int (*)(void))loc_166E9C)();
  result = (_BYTE *)((int (__fastcall *)(int))loc_166F48)(a1);
  v10 = (int)&result[v8];
  if ( v10 > 0 )
  {
    for ( i = 0; v10 != i; ++i )
    {
      while ( a4 != -1 )
      {
        if ( a4 == i )
          goto LABEL_4;
LABEL_7:
        if ( v10 == ++i )
          return result;
      }
      if ( a5 )
        v14 = &off_46DACC;
      else
        v14 = (_UNKNOWN **)&unk_46DAE4;
      result = (_BYTE *)((int (__fastcall *)(int, int, _UNKNOWN **))loc_16AF90)(a1, i, v14);
      if ( result )
      {
LABEL_4:
        result = (_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(a1, i);
        if ( result )
        {
          result = (_BYTE *)((int (__fastcall *)(int, int))loc_1677C0)(a1, i);
          if ( *result )
          {
            v12 = (const char *)((int (__fastcall *)(int, int))loc_1677C0)(a1, i);
            v13 = sub_15B1AC(i, a3);
            result = (_BYTE *)sub_17E954(a2, v12, v13);
          }
        }
        goto LABEL_7;
      }
    }
  }
  return result;
}
