int __fastcall sub_2005EC(int result)
{
  _DWORD *i; // r3

  if ( result )
  {
    if ( (*(_DWORD *)(result + 12) & 8) != 0 )
    {
      for ( i = *(_DWORD **)(dword_487D2C + 48); i; i = (_DWORD *)*i )
      {
        if ( result == i[261] )
          i[261] = 0;
      }
    }
  }
  return result;
}
