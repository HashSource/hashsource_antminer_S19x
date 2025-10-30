int __fastcall sub_1E1B60(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  int v5; // r2
  int v6; // r3

  v3 = dword_488C8C;
  v4 = *(_DWORD *)sub_242FDC(a1);
  sub_2578AC(v4, 0);
  for ( ; v3; v3 = *(_DWORD *)v3 )
  {
    if ( strcmp(*(const char **)(v3 + 4), "Z-packet") && (*(_WORD *)(v3 + 12) & 0x180) != 0 )
    {
      sub_2578AC(v4, 0);
      sub_2575E8(v4, "name", *(_DWORD *)(v3 + 4));
      sub_257380(v4, ":  ", v5, v6);
      if ( (*(_WORD *)(v3 + 12) & 0x180) == 0x100 )
        ((void (__fastcall *)(_DWORD, int, int))loc_5A6E0)(0, a2, v3);
      else
        sub_54C5C(v3);
      sub_25734C(v4, 0);
    }
  }
  return sub_25734C(v4, 0);
}
