int __fastcall sub_10A218(int result, int a2, int a3, int a4, __int64 a5)
{
  _DWORD *v7; // r11
  __int64 i; // r4
  int v9; // r6
  int v10; // r1

  if ( a5 )
  {
    v7 = (_DWORD *)result;
    for ( i = 0; i != a5; ++i )
    {
      v9 = a3 + i;
      if ( a2 == 1 )
      {
        result = sub_326F3C(*v7, -v7[4] & v9);
        if ( result )
        {
          v10 = *(_DWORD *)(result + 4);
          ++*(_DWORD *)(v10 + 12);
          result = *(unsigned __int8 *)(a4 + i);
          *(_BYTE *)(v10 + (v9 & (v7[4] - 1)) + 16) = result;
        }
      }
      else
      {
        result = sub_109978(v7, a3 + i);
      }
    }
  }
  return result;
}
