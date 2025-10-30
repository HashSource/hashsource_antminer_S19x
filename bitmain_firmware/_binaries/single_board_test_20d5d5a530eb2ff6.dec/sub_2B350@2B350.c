unsigned int __fastcall sub_2B350(int a1, unsigned int a2)
{
  unsigned int result; // r0
  unsigned int v4; // r2

  result = *(_DWORD *)(dword_223680 + 64);
  if ( result )
  {
    result = 0;
    v4 = 1;
    do
    {
      if ( !byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265271 + v4] )
      {
        *(_DWORD *)(a1 + 4 * result++) = v4;
        if ( result >= a2 )
          break;
      }
      ++v4;
    }
    while ( *(_DWORD *)(dword_223680 + 64) >= v4 );
  }
  return result;
}
