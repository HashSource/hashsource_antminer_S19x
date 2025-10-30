int __fastcall sub_53B54(int result, int a2, int a3, int a4, int a5)
{
  int i; // r4
  int v9; // r3
  int v10; // r1
  _DWORD *v11; // r3

  for ( i = result; i; i = *(_DWORD *)i )
  {
    v9 = *(unsigned __int8 *)(i + 12);
    if ( (v9 & 0x41) != 0 )
    {
LABEL_6:
      v10 = a4;
      if ( a4 )
        v10 = 1;
      if ( (v10 & ((v9 ^ 0x40u) >> 6)) != 0 && ((a2 == 14) & ~v9) != 0 )
      {
        v11 = *(_DWORD **)(i + 52);
        if ( v11 )
          result = sub_53B54(*v11, 14, *(_DWORD *)(i + 56), a4, a5);
      }
      continue;
    }
    if ( a2 != -1 )
    {
      if ( a2 == -2 )
      {
        if ( *(_DWORD *)(i + 16) && *(_DWORD *)(i + 8) != -2 )
          continue;
      }
      else if ( *(_DWORD *)(i + 8) != a2 || !*(_DWORD *)(i + 16) )
      {
        goto LABEL_6;
      }
    }
    result = sub_53C40(i, a3, a4, a5);
  }
  return result;
}
