int __fastcall sub_1AF48(unsigned int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int *p_varg_r0; // r2
  unsigned __int8 *v10; // r1
  int v11; // r12
  int v12; // r3
  int *v13; // r1
  int v14; // r3
  _DWORD var34[17]; // [sp+4h] [bp-34h] BYREF
  unsigned int varg_r0; // [sp+48h] [bp+10h] BYREF
  int varg_r1; // [sp+4Ch] [bp+14h]
  int varg_r2; // [sp+50h] [bp+18h]
  int varg_r3; // [sp+54h] [bp+1Ch]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  memset(&var34[2], 0, 0x2Cu);
  p_varg_r0 = &varg_r0;
  v10 = (unsigned __int8 *)&varg_r0;
  v11 = 2;
  var34[0] = bswap32(varg_r0);
  var34[1] = varg_r1;
  do
  {
    v12 = v10[9];
    v10 += 4;
    var34[v11++] = (v12 << 16) | (v10[4] << 24) | v10[7] | (v10[6] << 8);
  }
  while ( v11 != 5 );
  v13 = &var34[5];
  do
  {
    v14 = *((unsigned __int8 *)p_varg_r0++ + 21);
    *v13++ = (v14 << 16)
           | (*((unsigned __int8 *)p_varg_r0 + 16) << 24)
           | *((unsigned __int8 *)p_varg_r0 + 19)
           | (*((unsigned __int8 *)p_varg_r0 + 18) << 8);
  }
  while ( p_varg_r0 != (unsigned int *)&a9 );
  return sub_708A4(var34, 52);
}
