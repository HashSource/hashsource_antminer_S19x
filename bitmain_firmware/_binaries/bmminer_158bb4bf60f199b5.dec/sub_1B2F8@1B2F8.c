int __fastcall sub_1B2F8(int result)
{
  int v1; // r6
  int i; // r4

  v1 = result;
  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
      result = sub_75548((unsigned __int8)i, v1);
  }
  return result;
}
