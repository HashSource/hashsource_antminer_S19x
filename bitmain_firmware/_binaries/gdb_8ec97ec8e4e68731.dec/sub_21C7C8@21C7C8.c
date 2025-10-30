int __fastcall sub_21C7C8(int result)
{
  if ( result )
  {
    if ( (*(_BYTE *)(result + 33) & 1) != 0 )
      JUMPOUT(0x21C1E0);
  }
  return result;
}
