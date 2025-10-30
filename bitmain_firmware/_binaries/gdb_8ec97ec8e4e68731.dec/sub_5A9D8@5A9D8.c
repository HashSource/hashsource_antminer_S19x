int __fastcall sub_5A9D8(int a1, int a2, int a3)
{
  int v3; // r4
  int v6; // r5
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v12; // r11

  v3 = a1;
  v6 = *(_DWORD *)sub_242FDC(a1);
  sub_2578AC(v6, 0);
  for ( ; v3; v3 = *(_DWORD *)v3 )
  {
    if ( *(_DWORD *)(v3 + 52) && (*(_BYTE *)(v3 + 12) & 0x40) == 0 )
    {
      sub_2578AC(v6, *(_BYTE *)(v3 + 12) & 0x40);
      v12 = sub_338BD4(*(_DWORD *)(v3 + 56), "show ") + 5;
      if ( sub_2573F0(v6) )
        sub_2575E8(v6, "prefix", v12);
      sub_5A9D8(**(_DWORD **)(v3 + 52), a2, v12);
      sub_25734C(v6, 0);
    }
    else if ( *(_DWORD *)(v3 + 8) != 16 )
    {
      sub_2578AC(v6, 0);
      sub_257380(v6, a3, v7, v8);
      sub_2575E8(v6, "name", *(_DWORD *)(v3 + 4));
      sub_257380(v6, ":  ", v9, v10);
      if ( (*(_WORD *)(v3 + 12) & 0x180) == 0x100 )
        ((void (__fastcall *)(_DWORD, int, int))loc_5A6E0)(0, a2, v3);
      else
        sub_54C5C(v3);
      sub_25734C(v6, 0);
    }
  }
  return sub_25734C(v6, 0);
}
