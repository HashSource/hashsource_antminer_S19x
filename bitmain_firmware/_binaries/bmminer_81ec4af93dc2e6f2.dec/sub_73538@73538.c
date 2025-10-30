_DWORD *sub_73538()
{
  _DWORD *v2; // [sp+4h] [bp-8h]

  v2 = sub_7188C(0x14u);
  if ( !v2 )
    return 0;
  sub_729B8(v2, 1);
  v2[3] = 0;
  v2[2] = 8;
  v2[4] = sub_7188C(4 * v2[2]);
  if ( v2[4] )
    return v2;
  sub_718D4(v2);
  return 0;
}
