int __fastcall sub_52700(int a1)
{
  int v4; // [sp+80Ch] [bp-10h] BYREF
  int v5; // [sp+810h] [bp-Ch] BYREF
  int i; // [sp+814h] [bp-8h]

  v5 = 0;
  sub_52E24(0, &v4);
  v4 = (unsigned __int16)v4;
  for ( i = 0; ; ++i )
  {
    if ( i > 5 )
      return -1;
    sub_52E24(1, &v5);
    if ( a1 == (BYTE1(v5) & 7) )
      break;
    usleep(0x2710u);
  }
  if ( v4 == 45093 )
    return 240 * (unsigned __int8)v5;
  else
    return 120 * (unsigned __int8)v5;
}
