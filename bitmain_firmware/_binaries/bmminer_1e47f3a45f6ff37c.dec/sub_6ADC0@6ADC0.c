int __fastcall sub_6ADC0(int a1)
{
  int result; // r0
  unsigned int v3; // [sp+Ch] [bp-8h]

  v3 = 0;
  sub_5485C();
  if ( a1 >= 0 )
    return sub_6AD94();
  do
  {
    result = sub_6AD94();
    if ( result >= 0 )
      break;
    result = usleep(0x3E8u);
    ++v3;
  }
  while ( v3 <= 0xBB8 );
  return result;
}
