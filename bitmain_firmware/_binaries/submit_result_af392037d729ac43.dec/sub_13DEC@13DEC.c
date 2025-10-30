_DWORD *sub_13DEC()
{
  _DWORD *v0; // r4

  v0 = sub_13828((void *)0x24);
  if ( !v0 )
    return v0;
  if ( !dword_27DF4 )
    sub_127A8(0);
  *v0 = 0;
  v0[1] = 1;
  if ( !sub_12408(v0 + 2) )
    return v0;
  sub_1383C(v0);
  return 0;
}
