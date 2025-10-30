int sub_1A260()
{
  int v0; // r4
  int result; // r0

  v0 = 0;
  while ( 1 )
  {
    if ( sub_26C0C(v0) )
    {
      result = *(unsigned __int8 *)(dword_B3CC0 + v0 + 20);
      if ( !*(_BYTE *)(dword_B3CC0 + v0 + 20) )
        break;
    }
    if ( ++v0 == 4 )
      return 1;
  }
  return result;
}
