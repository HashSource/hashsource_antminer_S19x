int sub_19E10()
{
  int v0; // r4
  int result; // r0

  v0 = 0;
  while ( 1 )
  {
    if ( sub_266F0(v0) )
    {
      result = *(unsigned __int8 *)(dword_B0F4C + v0 + 20);
      if ( !*(_BYTE *)(dword_B0F4C + v0 + 20) )
        break;
    }
    if ( ++v0 == 4 )
      return 1;
  }
  return result;
}
