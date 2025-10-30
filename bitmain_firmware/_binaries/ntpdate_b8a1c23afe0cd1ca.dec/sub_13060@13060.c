bool __fastcall sub_13060(int a1, int a2, int a3, int a4, int a5, int a6)
{
  unsigned int v7; // r0
  int v8; // r2
  _DWORD v10[2]; // [sp+4h] [bp-5Ch] BYREF
  _DWORD v11[2]; // [sp+Ch] [bp-54h] BYREF
  _DWORD v12[2]; // [sp+14h] [bp-4Ch] BYREF
  _BYTE v13[64]; // [sp+1Ch] [bp-44h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  v10[0] = v13;
  v10[1] = 64;
  v12[0] = a4;
  v12[1] = a5;
  v7 = sub_12C00(v10, a1, v11, v12);
  if ( v7 >= 0x14 )
    v8 = 20;
  else
    v8 = v7;
  if ( v8 + 4 == a6 )
    return sub_19C68(v13, a4 + a5 + 4) == 0;
  sub_A828((_BYTE *)&dword_0 + 3, "MAC decrypt: MAC length error");
  return 0;
}
