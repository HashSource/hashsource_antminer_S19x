int __fastcall sub_5C5DC(int a1)
{
  int result; // r0
  unsigned int v3; // [sp+Ch] [bp-8h]

  v3 = 0;
  sub_52EA0(27, a1);
  if ( a1 >= 0 )
    return sub_5C5B0();
  do
  {
    result = sub_5C5B0();
    if ( result >= 0 )
      break;
    result = usleep(0x3E8u);
    ++v3;
  }
  while ( v3 <= 0xBB8 );
  return result;
}
