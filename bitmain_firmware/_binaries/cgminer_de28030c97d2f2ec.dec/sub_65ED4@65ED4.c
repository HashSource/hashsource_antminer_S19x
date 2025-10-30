_DWORD *sub_65ED4()
{
  _DWORD *v2; // [sp+4h] [bp-8h]

  v2 = sub_64DA4(0x24u);
  if ( !v2 )
    return 0;
  if ( !dword_91DE0 )
    sub_626CC(0);
  sub_65E9C(v2, 0);
  if ( !sub_61E04(v2 + 2) )
    return v2;
  sub_64DEC(v2);
  return 0;
}
