int sub_49FC8()
{
  int v0; // r4
  char v2[2048]; // [sp+0h] [bp-800h] BYREF

  if ( (unsigned int)off_AFC24 > 4 )
  {
    strcpy(v2, "[DEBUG] Check if is unbalance happen.\n");
    sub_3AF5C(4, v2, 0, *(unsigned __int16 *)"");
  }
  v0 = 0;
  while ( !sub_266F0(v0) || !sub_49F20(v0) )
  {
    if ( ++v0 == 4 )
      return 0;
  }
  return 1;
}
