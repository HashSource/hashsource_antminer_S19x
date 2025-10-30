int __fastcall sub_27FF8(unsigned int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, char a9)
{
  char *v9; // r3
  int *v10; // r2
  _DWORD *v11; // lr
  int v12; // r12
  _DWORD *v13; // r12
  int v14; // r0
  unsigned int v16; // [sp+4h] [bp-38h] BYREF
  _DWORD v17[3]; // [sp+8h] [bp-34h] BYREF
  _DWORD v18[9]; // [sp+14h] [bp-28h] BYREF
  _DWORD varg_r0[3]; // [sp+48h] [bp+Ch] BYREF
  int varg_r3; // [sp+54h] [bp+18h] BYREF

  v17[1] = 0;
  varg_r0[0] = a1;
  varg_r0[1] = a2;
  varg_r0[2] = a3;
  varg_r3 = a4;
  v9 = (char *)varg_r0;
  v10 = varg_r0;
  v17[2] = 0;
  memset(v18, 0, sizeof(v18));
  v16 = _byteswap_ulong(a1);
  v17[0] = a2;
  v11 = v17;
  do
  {
    v12 = *((unsigned __int8 *)v10++ + 9);
    v11[1] = (v12 << 16)
           | (*((unsigned __int8 *)v10 + 4) << 24)
           | *((unsigned __int8 *)v10 + 7)
           | (*((unsigned __int8 *)v10 + 6) << 8);
    ++v11;
  }
  while ( v10 != &varg_r3 );
  v13 = v18;
  do
  {
    v14 = (unsigned __int8)v9[21];
    v9 += 4;
    v13[1] = (v14 << 16) | ((unsigned __int8)v9[16] << 24) | (unsigned __int8)v9[19] | ((unsigned __int8)v9[18] << 8);
    ++v13;
  }
  while ( v9 != &a9 );
  return sub_6B004(&v16, 52);
}
