int __fastcall sub_1A3648(int *a1, int a2, int a3, int a4)
{
  int v5; // r0
  int v6; // r0
  _DWORD v8[5]; // [sp+8h] [bp-14h] BYREF

  v5 = *a1;
  v8[3] = a2;
  v8[0] = a3;
  v8[1] = a4;
  v6 = *(_DWORD *)(v5 + 20);
  v8[2] = a1;
  return sub_3270BC(v6, sub_1A3E14, v8, a4, a3, a4);
}
