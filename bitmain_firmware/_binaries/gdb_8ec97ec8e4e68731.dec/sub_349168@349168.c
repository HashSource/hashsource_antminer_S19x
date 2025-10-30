int __fastcall sub_349168(int a1, unsigned int *a2)
{
  int v2; // r2
  int v3; // r4
  int v4; // r3
  int v6[2]; // [sp+4h] [bp-10h] BYREF
  char v7; // [sp+Ch] [bp-8h]
  char v8; // [sp+Dh] [bp-7h]

  v2 = *(_DWORD *)(a1 + 76);
  v3 = v2 + 8;
  v4 = *(_DWORD *)(v2 + 4);
  v7 = 3;
  LOBYTE(v2) = *(_BYTE *)(v2 + 7);
  v6[1] = v3;
  v8 = v2;
  v6[0] = v4 << 8;
  return sub_348E74(a2, v6);
}
