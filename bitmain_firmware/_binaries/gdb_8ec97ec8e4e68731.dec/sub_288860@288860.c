int sub_288860()
{
  if ( dword_48ADA0 )
  {
    --dword_48ADA0;
    byte_48AAFC = *(_BYTE *)(dword_48ADA8 + dword_48ADA0);
  }
  else
  {
    sub_288824((int)"$endif without matching $if");
  }
  return 0;
}
