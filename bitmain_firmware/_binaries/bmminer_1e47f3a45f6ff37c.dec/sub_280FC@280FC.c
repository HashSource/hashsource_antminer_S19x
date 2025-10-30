int __fastcall sub_280FC(
        unsigned int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        char a17)
{
  unsigned int *p_varg_r0; // r3
  unsigned int *v18; // r2
  _DWORD *v19; // lr
  int v20; // r12
  _DWORD *v21; // r12
  int v22; // r0
  _DWORD s[37]; // [sp+4h] [bp-98h] BYREF
  unsigned int varg_r0; // [sp+A8h] [bp+Ch] BYREF
  int varg_r1; // [sp+ACh] [bp+10h]
  int varg_r2; // [sp+B0h] [bp+14h]
  int varg_r3; // [sp+B4h] [bp+18h] BYREF

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  memset(s, 0, sizeof(s));
  p_varg_r0 = &varg_r0;
  v18 = &varg_r0;
  s[0] = _byteswap_ulong(varg_r0);
  s[1] = varg_r1;
  v19 = &s[1];
  do
  {
    v20 = *((unsigned __int8 *)v18++ + 9);
    v19[1] = (v20 << 16)
           | (*((unsigned __int8 *)v18 + 4) << 24)
           | *((unsigned __int8 *)v18 + 7)
           | (*((unsigned __int8 *)v18 + 6) << 8);
    ++v19;
  }
  while ( v18 != (unsigned int *)&varg_r3 );
  v21 = &s[4];
  do
  {
    v22 = *((unsigned __int8 *)p_varg_r0++ + 21);
    v21[1] = (v22 << 16)
           | (*((unsigned __int8 *)p_varg_r0 + 16) << 24)
           | *((unsigned __int8 *)p_varg_r0 + 19)
           | (*((unsigned __int8 *)p_varg_r0 + 18) << 8);
    ++v21;
  }
  while ( p_varg_r0 != (unsigned int *)&a17 );
  return sub_6B004(s, 84);
}
