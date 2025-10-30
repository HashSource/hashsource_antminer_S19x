_DWORD *__fastcall sub_23E050(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v6; // r2

  v5 = sub_9836C(0x154u);
  sub_23DEA4(v5, a1, a2, a3, a4);
  v6 = dword_48A4D4;
  if ( dword_48A4D4 )
  {
    while ( *(_DWORD *)(v6 + 4) )
      v6 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)(v6 + 4) = v5;
  }
  else
  {
    dword_48A4D4 = (int)v5;
  }
  return v5;
}
