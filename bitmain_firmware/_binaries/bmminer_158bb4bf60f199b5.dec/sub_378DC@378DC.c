int sub_378DC()
{
  int i; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v2, "[DEBUG] Check if is unbalance happen.\n");
    sub_47AB4(4, v2, 0);
  }
  for ( i = 0; i != 16; ++i )
  {
    if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 && sub_37834(i) )
      return 1;
  }
  return 0;
}
