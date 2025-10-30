int __fastcall sub_15D818(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r3
  int v7; // r3
  int v9; // r2

  v4 = sub_D8934(a1);
  sub_13F3E8(a2, v4);
  v5 = sub_D8934(a1);
  v6 = a2[3];
  *(_DWORD *)(v5 + 128) = a2[2];
  *(_DWORD *)(v5 + 132) = v6;
  v7 = sub_D8934(a1);
  v9 = a2[5];
  *(_DWORD *)(v7 + 136) = a2[4];
  *(_DWORD *)(v7 + 140) = v9;
  return 1;
}
