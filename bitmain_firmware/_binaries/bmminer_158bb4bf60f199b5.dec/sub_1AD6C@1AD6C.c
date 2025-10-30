int __fastcall sub_1AD6C(int result, int a2, int a3, int a4)
{
  int v4; // r6
  int i; // r4
  bool v9; // zf

  v4 = result;
  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
    {
      v9 = v4 == i;
      if ( v4 != i )
        v9 = v4 == 255;
      result = (unsigned __int8)i;
      if ( v9 )
        result = sub_74A6C((unsigned __int8)i, a2, a3, a4);
    }
  }
  return result;
}
