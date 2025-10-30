int sub_15DA8()
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 16; ++i )
  {
    while ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) != 1 )
    {
      if ( ++i == 16 )
        goto LABEL_6;
    }
    result = sub_146C4(i);
    if ( result )
      return result;
  }
LABEL_6:
  remove("/tmp/check_chip_type_failed");
  return 0;
}
