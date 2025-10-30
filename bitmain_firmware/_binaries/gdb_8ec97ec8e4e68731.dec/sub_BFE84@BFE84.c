int *__fastcall sub_BFE84(int *a1, int a2, int a3)
{
  _BYTE *v5; // r5
  char v6; // r1
  int *v8; // [sp+4h] [bp-18h] BYREF
  _DWORD v9[2]; // [sp+8h] [bp-14h] BYREF
  char v10; // [sp+10h] [bp-Ch]

  v5 = sub_9836C(0x38u);
  sub_C0900(v5, *(_DWORD *)(a3 + 4));
  v6 = v5[48];
  *a1 = (int)v5;
  v5[48] = v6 & 0xFE;
  v8 = (int *)(a3 + 16);
  v10 = 0;
  sub_BE2C0(a3, &v8, (int)v5, (int)v9);
  sub_BE0D4(*a1, v9);
  sub_C09B8(*a1, 39);
  return a1;
}
