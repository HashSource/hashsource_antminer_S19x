int __fastcall sub_70CA0(int result)
{
  if ( result == 115200 )
    return 26;
  if ( result == 1000000 )
    return 2;
  if ( (double)result == 1500000.0 )
    return 1;
  if ( (_UNKNOWN *)result == &unk_2DC6C0 )
    return 0;
  if ( (_UNKNOWN *)result == &unk_5B8D80 )
    return 3;
  if ( result == 12000000 )
    return 4;
  if ( result == 25000000 )
    return 5;
  return result;
}
