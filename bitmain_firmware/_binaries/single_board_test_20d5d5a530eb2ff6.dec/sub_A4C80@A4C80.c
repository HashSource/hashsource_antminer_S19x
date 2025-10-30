int __fastcall sub_A4C80(int a1)
{
  int v2; // r3
  int v3; // r2
  int v4; // r3
  int v5; // r5
  int v6; // r4
  int v7; // r0
  int v8; // r7
  int v9; // r0
  int v10; // r5

  if ( *(_DWORD *)(*(_DWORD *)(a1 + 1028) + 12) == 2 )
  {
    v5 = 80;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 124);
    v3 = *(_DWORD *)(v2 + 528);
    if ( (*(_DWORD *)(v3 + 20) & 0x14) != 0 )
    {
      if ( *(_DWORD *)(v3 + 56) == 256 )
        v5 = 128;
      else
        v5 = 80;
    }
    else
    {
      v4 = *(_DWORD *)(v2 + 612);
      if ( !v4 )
        return 0;
      v5 = sub_D9AE4(*(_DWORD *)(v4 + 4));
    }
  }
  v6 = sub_BFD20();
  if ( !v6 )
    return 0;
  v7 = sub_B822C();
  v8 = v7;
  if ( !v7 || !sub_B8930(v7, 2) )
  {
    sub_BFB8C(v6);
    sub_B895C(v8);
    return 0;
  }
  v9 = sub_853A4(a1, 0, 0);
  if ( v9 < v5 )
    v9 = v5;
  if ( v9 > 191 )
  {
    v10 = sub_B8148(0);
  }
  else if ( v9 > 151 )
  {
    v10 = sub_B8118(0);
  }
  else if ( v9 > 127 )
  {
    v10 = sub_B8100(0);
  }
  else if ( v9 <= 111 )
  {
    v10 = sub_B80C0(0);
  }
  else
  {
    v10 = sub_B80E8(0);
  }
  if ( v10 && sub_BFDBC(v6, v10, 0, v8) )
    return v6;
  sub_BFB8C(v6);
  sub_B895C(v10);
  sub_B895C(v8);
  return 0;
}
