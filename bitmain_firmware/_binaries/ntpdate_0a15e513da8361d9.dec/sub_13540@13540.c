bool __fastcall sub_13540(int a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v7; // r0
  _DWORD v9[2]; // [sp+4h] [bp-18h] BYREF
  _DWORD v10[2]; // [sp+Ch] [bp-10h] BYREF
  _DWORD v11[2]; // [sp+14h] [bp-8h] BYREF
  _BYTE v12[64]; // [sp+1Ch] [bp+0h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  v9[0] = v12;
  v9[1] = 64;
  v11[0] = a4;
  v11[1] = a5;
  v7 = sub_130EC(v9, a1, v10, v11);
  if ( v7 >= 0x14 )
    v7 = 20;
  if ( v7 + 4 == a6 )
    return sub_1A274(v12, a4 + a5 + 4, v7) == 0;
  sub_ABF8((_BYTE *)&dword_0 + 3, "MAC decrypt: MAC length error");
  return 0;
}
