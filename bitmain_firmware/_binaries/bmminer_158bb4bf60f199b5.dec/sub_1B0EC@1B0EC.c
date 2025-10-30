int __fastcall sub_1B0EC(int a1, int a2)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
      result = sub_75C4C((unsigned __int8)i, a2, 0);
  }
  return result;
}
