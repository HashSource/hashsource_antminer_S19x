int __fastcall sub_6F610(int a1)
{
  int v2; // r4
  int result; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  sub_66908(27, a1);
  if ( a1 >= 0 )
    return sub_6688C(27, &v4);
  v2 = 3001;
  do
  {
    sub_6688C(27, &v4);
    result = 1000;
    if ( v4 >= 0 )
      break;
    result = usleep(0x3E8u);
    --v2;
  }
  while ( v2 );
  return result;
}
