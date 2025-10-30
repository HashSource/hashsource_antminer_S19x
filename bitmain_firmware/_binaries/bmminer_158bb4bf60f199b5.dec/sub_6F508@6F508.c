int sub_6F508()
{
  int v0; // r4
  int result; // r0
  int v2; // [sp+4h] [bp-4h] BYREF

  v0 = 10;
  v2 = 0;
  sub_6688C(35, &v2);
  sub_66908(35, v2 & 0xFFFFFFBF);
  do
  {
    usleep(0x3E8u);
    v2 = 0;
    result = sub_6688C(35, &v2);
    if ( (v2 & 0x40) == 0 )
      break;
    --v0;
  }
  while ( v0 );
  return result;
}
