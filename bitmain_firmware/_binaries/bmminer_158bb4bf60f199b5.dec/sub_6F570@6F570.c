int __fastcall sub_6F570(int result)
{
  if ( result == 115200 )
    return 26;
  if ( (double)result == 1500000.0 )
    return 1;
  switch ( result )
  {
    case 3000000:
      return 0;
    case 6000000:
      return 3;
    case 12000000:
      return 4;
    case 25000000:
      return 5;
  }
  return result;
}
