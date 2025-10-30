int __fastcall sub_197F34(int a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v5; // r11
  int v6; // r10
  int v7; // r9
  int v8; // r8
  int v10; // [sp+4h] [bp-10h]
  int v11; // [sp+8h] [bp-Ch]
  int v12; // [sp+Ch] [bp-8h]

  v2 = a2 + 2;
  v5 = a2[1];
  v6 = a2[30];
  v10 = a2[2];
  v11 = a2[3];
  v12 = a2[4];
  v7 = a2[31];
  v8 = a2[29];
  ((void (__fastcall *)(int, _DWORD *))loc_197DFC)(a1, a2);
  a2[1] = v5;
  *v2 = v10;
  v2[1] = v11;
  v2[2] = v12;
  a2[30] = v6;
  a2[31] = v7;
  a2[29] = v8;
  return a1;
}
