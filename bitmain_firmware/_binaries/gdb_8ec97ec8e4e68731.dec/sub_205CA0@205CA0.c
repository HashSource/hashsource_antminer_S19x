int __fastcall sub_205CA0(_BYTE **a1, int a2)
{
  _BYTE *i; // r3
  int v5; // r3
  bool v6; // zf

  if ( dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "couldn't parse type; debugger out of date?");
  for ( i = *a1; ; *a1 = i )
  {
    while ( *i )
      *a1 = ++i;
    v5 = (unsigned __int8)*(i - 1);
    v6 = v5 == 63;
    if ( v5 != 63 )
      v6 = v5 == 92;
    if ( !v6 )
      break;
    i = (_BYTE *)off_478984(a2);
  }
  return *(_DWORD *)(sub_1780C4(a2) + 64);
}
