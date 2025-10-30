_DWORD *sub_76A14()
{
  _DWORD *v2; // [sp+4h] [bp-8h]

  v2 = sub_74DA0(0x14u);
  if ( !v2 )
    return 0;
  sub_75E9C(v2, 1);
  v2[3] = 0;
  v2[2] = 8;
  v2[4] = sub_74DA0(4 * v2[2]);
  if ( v2[4] )
    return v2;
  sub_74DE8(v2);
  return 0;
}
