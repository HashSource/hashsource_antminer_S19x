void sub_279FC()
{
  int v0; // r0
  int v1; // r1
  unsigned int v2[2]; // [sp+4h] [bp-10h] BYREF

  v2[1] = 0;
  v2[0] = 0;
  if ( sys_leap == 3 )
  {
    hostval = 0;
  }
  else
  {
    v0 = sub_5F724(v2);
    hostval = bswap32(v2[0]);
    if ( hostval )
      sub_26E50(v0, v1);
  }
}
