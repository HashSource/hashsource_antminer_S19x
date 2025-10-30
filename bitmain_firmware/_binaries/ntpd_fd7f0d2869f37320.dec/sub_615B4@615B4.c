size_t __fastcall sub_615B4(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v6; // r0
  size_t v7; // r5
  _DWORD v9[2]; // [sp+4h] [bp-60h] BYREF
  _DWORD v10[2]; // [sp+Ch] [bp-58h] BYREF
  _DWORD v11[2]; // [sp+14h] [bp-50h] BYREF
  _BYTE v12[64]; // [sp+1Ch] [bp-48h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  v9[0] = v12;
  v9[1] = 64;
  v11[1] = a5;
  v11[0] = a4;
  v6 = sub_61200(v9, a1, v10, v11);
  if ( v6 >= 0x14 )
    v7 = 20;
  else
    v7 = v6;
  memcpy((void *)(a4 + a5 + 4), v12, v7);
  return v7 + 4;
}
