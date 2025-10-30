int __fastcall sub_1B010(
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
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33)
{
  unsigned int *p_varg_r0; // r2
  unsigned __int8 *v34; // r1
  int v35; // r12
  int v36; // r3
  int *v37; // r6
  unsigned int *v38; // r5
  int *v39; // r1
  int v40; // r3
  _DWORD var98[43]; // [sp+4h] [bp-ACh] BYREF
  unsigned int varg_r0; // [sp+B0h] [bp+0h] BYREF
  int varg_r1; // [sp+B4h] [bp+4h]
  int varg_r2; // [sp+B8h] [bp+8h]
  int varg_r3; // [sp+BCh] [bp+Ch]

  varg_r0 = a1;
  varg_r1 = a2;
  varg_r2 = a3;
  varg_r3 = a4;
  memset(&var98[2], 0, 0x8Cu);
  p_varg_r0 = &varg_r0;
  v34 = (unsigned __int8 *)&varg_r0;
  v35 = 2;
  var98[0] = bswap32(varg_r0);
  var98[1] = varg_r1;
  do
  {
    v36 = v34[9];
    v34 += 4;
    var98[v35++] = (v36 << 16) | (v34[4] << 24) | v34[7] | (v34[6] << 8);
  }
  while ( v35 != 5 );
  v37 = &var98[5];
  do
  {
    v38 = p_varg_r0 + 8;
    v39 = v37;
    do
    {
      v40 = *((unsigned __int8 *)p_varg_r0++ + 21);
      *v39++ = (v40 << 16)
             | (*((unsigned __int8 *)p_varg_r0 + 16) << 24)
             | *((unsigned __int8 *)p_varg_r0 + 19)
             | (*((unsigned __int8 *)p_varg_r0 + 18) << 8);
    }
    while ( p_varg_r0 != v38 );
    v37 += 8;
  }
  while ( p_varg_r0 != (unsigned int *)&a33 );
  return sub_708A4(var98, 148);
}
