int __fastcall sub_70D20(int a1)
{
  int result; // r0
  int v3; // r4
  int v4; // [sp+4h] [bp-4h] BYREF

  sub_6E0BC(27, a1);
  if ( a1 >= 0 )
    return sub_6E060(27, &v4);
  v3 = 3001;
  do
  {
    sub_6E060(27, &v4);
    result = 1000;
    if ( v4 >= 0 )
      break;
    result = usleep(0x3E8u);
    --v3;
  }
  while ( v3 );
  return result;
}
