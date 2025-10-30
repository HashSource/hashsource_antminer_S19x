int sub_70C48()
{
  int v0; // r4
  int result; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  v0 = 10;
  v2 = 0;
  sub_6E060(35, &v2);
  sub_6E0BC(35, v2 & 0xFFFFFFBF);
  do
  {
    usleep(0x3E8u);
    v2 = 0;
    sub_6E060(35, &v2);
    result = 35;
    if ( (v2 & 0x40) == 0 )
      break;
    v2 = 0;
    sub_6E060(35, &v2);
    result = sub_6E0BC(35, v2 & 0xFFFFFFBF);
    --v0;
  }
  while ( v0 );
  return result;
}
