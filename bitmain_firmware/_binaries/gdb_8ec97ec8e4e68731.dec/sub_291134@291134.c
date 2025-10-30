int __fastcall sub_291134(int result)
{
  if ( dword_48B6BC || (dword_48AAA0 & 0x80000) != 0 )
  {
    dword_48B6BC = 0;
    return sub_291030(result);
  }
  else
  {
    dword_48B6B8 = result;
  }
  return result;
}
