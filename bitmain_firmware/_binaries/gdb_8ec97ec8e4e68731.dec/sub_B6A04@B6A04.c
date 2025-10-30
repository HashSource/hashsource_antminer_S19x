int __fastcall sub_B6A04(int a1, int a2)
{
  int v3; // r5
  int v5; // r7
  int v6; // r0
  int v7; // r1
  const char *v8; // r3
  const char *v9; // r2
  int v10; // r0
  int v12; // [sp+0h] [bp-1Ch]

  v3 = *(_DWORD *)(a2 + 88);
  v5 = a1 + 8;
  v6 = ((int (__fastcall *)(int))loc_26FE7C)(v3);
  v7 = *(_DWORD *)(v3 + 76);
  v8 = (const char *)v6;
  v9 = *(const char **)v3;
  v10 = *(_DWORD *)(v3 + 80);
  v12 = *(_DWORD *)(a2 + 72);
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = 0;
  *(_BYTE *)(a1 + 8) = 0;
  sub_B5F80(v10, v7, v9, v8, v12, 0, 0, 0, a1);
  return a1;
}
