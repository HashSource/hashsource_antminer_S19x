_DWORD *sub_651D4()
{
  _DWORD *v2; // [sp+4h] [bp-8h]

  v2 = sub_64070(0x24u);
  if ( !v2 )
    return 0;
  if ( !dword_90C48 )
    sub_61970(0);
  sub_65198(v2, 0);
  if ( !sub_610B4(v2 + 2) )
    return v2;
  sub_640B8(v2);
  return 0;
}
