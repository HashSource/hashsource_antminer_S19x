int __fastcall sub_66480(int a1)
{
  int v2; // r4
  unsigned int v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+4h] [bp-8h] BYREF

  v4 = 0;
  v2 = 6;
  sub_6688C(0, &v5);
  v5 = (unsigned __int16)v5;
  while ( 1 )
  {
    sub_6688C(1, &v4);
    if ( ((v4 >> 8) & 7) == a1 )
      break;
    usleep(0x2710u);
    if ( !--v2 )
      return -1;
  }
  if ( v5 == 45093 )
    return 240 * (unsigned __int8)v4;
  else
    return 120 * (unsigned __int8)v4;
}
