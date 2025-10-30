_BYTE *__fastcall sub_26D7D8(int a1, int a2, unsigned int a3, int a4, __int64 a5, __int64 a6)
{
  int v8; // r0
  __int64 v9; // kr00_8
  char v10; // r10
  unsigned __int8 *v11; // r5
  int v12; // r3
  bool v13; // zf
  int v14; // r9
  int v15; // r12
  int v16; // r9
  unsigned int v17; // r7
  int v18; // r1
  int v19; // r0
  char *v21; // r0
  unsigned int v22; // [sp+0h] [bp-1Ch]
  unsigned int v23; // [sp+4h] [bp-18h]
  int v24; // [sp+8h] [bp-14h]
  int v25; // [sp+Ch] [bp-10h]

  v8 = sub_170040(a1);
  v24 = ((int (__fastcall *)(int))loc_165BB8)(v8);
  v23 = 0xFFFFFFFF >> (64 - a6);
  v9 = a5 % 8;
  v10 = a5 % 8;
  v22 = v23 | (-1 << (a6 - 32)) | (0xFFFFFFFF >> (32 - a6));
  v11 = (unsigned __int8 *)(a2 + a5 / 8);
  v12 = (v23 >> 1) | a4;
  v13 = v12 == -1;
  if ( v12 == -1 )
    v13 = ((((0xFFFFFFFF >> (64 - a6)) | (-1 << (a6 - 32)) | (0xFFFFFFFF >> (32 - a6))) >> 1)
         | (0xFFFFFFFF >> (64 - a6) << 31)
         | a3) == -1;
  if ( v13 )
  {
    v14 = a3 & v22;
    v15 = a4 & v23;
    a3 &= v22;
    a4 &= v23;
  }
  else
  {
    v14 = a3;
    v15 = a4;
  }
  if ( v14 & ~v22 | v15 & ~v23 )
  {
    a3 = v22 & v14;
    a4 = v23 & v15;
    v21 = sub_988AC(a6);
    sub_946B0("Value does not fit in %s bits.", v21);
  }
  v16 = (a6 + v9 + 7) / 8;
  v17 = sub_15C250(v11, v16, v24);
  v25 = v18;
  v19 = sub_170040(a1);
  if ( ((int (__fastcall *)(int))loc_165D78)(v19) )
    v10 = 8 * v16 - v9 - a6;
  return sub_15C34C(
           v11,
           v16,
           v24,
           (v23 << v10) | (v22 << (v10 - 32)) | (v22 >> (32 - v10)),
           v17 & ~(v22 << v10) | (a3 << v10),
           (a4 << v10)
         | (a3 << (v10 - 32))
         | (a3 >> (32 - v10))
         | v25 & ~((v23 << v10) | (v22 << (v10 - 32)) | (v22 >> (32 - v10))));
}
