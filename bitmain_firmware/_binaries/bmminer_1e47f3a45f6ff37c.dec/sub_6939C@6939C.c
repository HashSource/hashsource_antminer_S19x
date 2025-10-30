int __fastcall sub_6939C(int a1)
{
  int v1; // r0
  int result; // r0
  int v3; // r0
  int v4; // r0
  unsigned int i; // [sp+4h] [bp-8h]

  v1 = sub_69D38(a1);
  result = sub_69D6C(v1 & 0xFFFFFFBF);
  for ( i = 0; i <= 9; ++i )
  {
    v3 = usleep(0x3E8u);
    result = sub_69D38(v3);
    if ( (result & 0x40) == 0 )
      break;
    v4 = sub_69D38(result);
    result = sub_69D6C(v4 & 0xFFFFFFBF);
  }
  return result;
}
