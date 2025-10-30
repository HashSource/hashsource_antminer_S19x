void __fastcall sub_170694(int a1)
{
  int v2; // r0
  int v3; // r3
  char v4; // r2

  sub_16FF58(a1);
  v3 = *(_DWORD *)(v2 + 24);
  v4 = *(_BYTE *)(v3 + 1);
  *(_BYTE *)v3 = 15;
  *(_DWORD *)(v2 + 20) = 1;
  *(_DWORD *)(v3 + 20) = a1;
  *(_BYTE *)(v3 + 1) = v4 | 4;
}
