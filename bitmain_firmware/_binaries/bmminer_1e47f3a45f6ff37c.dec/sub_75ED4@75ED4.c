_DWORD *sub_75ED4()
{
  _DWORD *v2; // [sp+4h] [bp-8h]

  v2 = sub_74DA0(0x24u);
  if ( !v2 )
    return 0;
  if ( !dword_5369E0 )
    sub_726C8(0);
  sub_75E9C(v2, 0);
  if ( !sub_71E00(v2 + 2) )
    return v2;
  sub_74DE8(v2);
  return 0;
}
