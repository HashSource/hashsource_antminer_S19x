int *__fastcall sub_BFDD4(int *a1, int a2, int a3, int a4)
{
  _BYTE *v7; // r4
  char v8; // r1
  int *v10; // [sp+4h] [bp-14h] BYREF
  _DWORD v11[2]; // [sp+8h] [bp-10h] BYREF
  char v12; // [sp+10h] [bp-8h]

  v7 = sub_9836C(0x38u);
  sub_C0900(v7, *(_DWORD *)(a3 + 4));
  v8 = v7[48];
  *a1 = (int)v7;
  v7[48] = v8 | 1;
  *((_DWORD *)v7 + 13) = a4;
  v10 = (int *)(a3 + 16);
  v12 = 0;
  sub_BE2C0(a3, &v10, (int)v7, (int)v11);
  sub_BD9D0(*a1, v11);
  sub_C09B8(*a1, 39);
  return a1;
}
