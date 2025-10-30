_DWORD *sub_66A14()
{
  _DWORD *v2; // [sp+4h] [bp-8h]

  v2 = sub_64DA4(0x14u);
  if ( !v2 )
    return 0;
  sub_65E9C(v2, 1);
  v2[3] = 0;
  v2[2] = 8;
  v2[4] = sub_64DA4(4 * v2[2]);
  if ( v2[4] )
    return v2;
  sub_64DEC(v2);
  return 0;
}
