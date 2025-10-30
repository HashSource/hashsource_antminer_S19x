int *__fastcall sub_BFF2C(int *a1, int a2, int a3, int a4)
{
  _BYTE *v8; // r4
  char v9; // r2
  _DWORD v11[4]; // [sp+0h] [bp-10h] BYREF

  v8 = sub_9836C(0x38u);
  sub_C0900(v8, a3);
  v9 = v8[48];
  *a1 = (int)v8;
  *((_DWORD *)v8 + 13) = a4;
  v8[48] = v9 | 1;
  ((void (__fastcall *)(int, _BYTE *, _DWORD *, int))loc_16DE08)(a3, v8, v11, a2);
  sub_BD9D0(*a1, v11);
  sub_C09B8(*a1, 39);
  return a1;
}
