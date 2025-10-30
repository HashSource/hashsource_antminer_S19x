int __fastcall sub_6274C(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r0
  int v9; // r0

  v4 = a2 + 8;
  v5 = sub_16F654(a1);
  sub_2575E8(a1, "id", v4);
  sub_2575E8(a1, "target-name", v4);
  sub_2575E8(a1, "host-name", a2 + 520);
  v6 = sub_257504(a1, "symbols-loaded", *(unsigned __int8 *)(a2 + 1040));
  v7 = sub_16F654(v6);
  if ( !((int (__fastcall *)(int))loc_16D884)(v7) )
  {
    v9 = sub_183688(0);
    sub_257694(a1, "thread-group", "i%d", *(_DWORD *)(v9 + 8));
  }
  sub_2578AC(a1, 1);
  sub_2578AC(a1, 0);
  if ( *(_DWORD *)(a2 + 1060) )
  {
    sub_257630(a1, "from", v5, *(_DWORD *)(a2 + 1056));
    sub_257630(a1, "to", v5, *(_DWORD *)(a2 + 1060));
  }
  sub_25734C(a1, 0);
  return sub_25734C(a1, 1);
}
