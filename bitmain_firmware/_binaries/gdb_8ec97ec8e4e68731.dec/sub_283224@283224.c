int sub_283224()
{
  int v0; // r12
  int v2; // r3
  int v3; // lr

  v0 = dword_48ABB8;
  dword_48ABA8 = 0;
  if ( !dword_48ABB8 )
  {
    v0 = sub_283524();
    v2 = v0;
    dword_48ABB8 = v0;
    do
    {
      *(_DWORD *)(v2 + 260) = sub_280F0C;
      v2 += 8;
    }
    while ( v2 != v0 + 1800 );
    v3 = (unsigned __int8)byte_46DF50;
    *(_DWORD *)(v0 + 1020) = sub_280BCC;
    *(_DWORD *)(v0 + 220) = sub_282054;
    *(_DWORD *)(v0 + 108) = sub_295A9C;
    *(_DWORD *)(v0 + 84) = sub_295A9C;
    if ( !v3 && off_46DF54 == sub_296014 )
      *(_DWORD *)(v0 + 68) = sub_280BCC;
  }
  off_46DED0 = (_UNKNOWN *)v0;
  return 0;
}
