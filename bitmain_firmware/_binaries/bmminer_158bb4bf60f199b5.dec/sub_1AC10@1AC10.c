int __fastcall sub_1AC10(int a1)
{
  int v2; // r4
  int result; // r0
  int v4; // r3

  v2 = 0;
  do
  {
    while ( 1 )
    {
      result = (unsigned __int8)v2;
      v4 = dword_A0D68 + 4 * v2++;
      if ( *(_DWORD *)(v4 + 4) == 1 )
        break;
      if ( v2 == 16 )
        return result;
    }
    result = sub_74D64(result, a1);
  }
  while ( v2 != 16 );
  return result;
}
