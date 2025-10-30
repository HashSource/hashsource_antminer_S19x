int __fastcall sub_330C80(int a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // lr
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v13[5]; // [sp+4h] [bp-20h] BYREF
  int v14; // [sp+18h] [bp-Ch]
  int v15; // [sp+1Ch] [bp-8h]

  v3 = a3;
  v7 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v10 = v3[3];
  v3 += 4;
  v13[0] = v7;
  v13[1] = v8;
  v13[2] = v9;
  v13[3] = v10;
  v11 = v3[2];
  v14 = v3[1];
  v15 = v11;
  v13[4] = 0;
  sub_330B90(a1, a2, v13);
  a3[5] |= v14 & 0x80;
  return a1;
}
