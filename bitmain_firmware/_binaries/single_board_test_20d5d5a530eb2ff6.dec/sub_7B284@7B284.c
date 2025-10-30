_DWORD *sub_7B284()
{
  _DWORD *v0; // r4

  v0 = sub_7ACC4((void *)0x24);
  if ( !v0 )
    return v0;
  if ( !dword_6DF268 )
    sub_79C44(0);
  *v0 = 0;
  v0[1] = 1;
  if ( !sub_798A4(v0 + 2) )
    return v0;
  sub_7ACD8(v0);
  return 0;
}
