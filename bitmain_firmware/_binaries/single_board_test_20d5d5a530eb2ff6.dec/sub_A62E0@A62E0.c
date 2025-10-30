unsigned int __fastcall sub_A62E0(unsigned int result)
{
  bool v1; // zf

  v1 = result == 116;
  if ( result != 116 )
    v1 = result == 109;
  if ( !v1 )
  {
    if ( result > 0x78 )
      return -1;
    else
      return byte_1AEE38[result];
  }
  return result;
}
