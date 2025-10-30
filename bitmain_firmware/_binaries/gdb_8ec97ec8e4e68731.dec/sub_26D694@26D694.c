int __fastcall sub_26D694(
        int *a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  _DWORD *v10; // r7
  int v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r11
  unsigned int v17; // r10
  _BYTE *v18; // r0
  int v19; // r3
  int v20; // r4
  int v21; // r7
  int v23; // [sp+8h] [bp-Ch]

  v10 = (_DWORD *)a1[16];
  v13 = sub_170040((int)v10);
  v23 = ((int (__fastcall *)(int))loc_165BB8)(v13);
  if ( a6 )
  {
    v14 = sub_26A738(v10, a6 + a8, __SPAIR64__(a4, a3), a5);
    v16 = v15;
    v17 = v14;
    v18 = (_BYTE *)sub_26BCB8(a1);
    sub_15C2E8(v18, v10[5], v23, v19, v17, v16);
  }
  v20 = a3 + 8 * a8;
  if ( v23 )
    v21 = 0;
  else
    v21 = v10[5];
  if ( !v23 )
    v21 = 8 * v21 - a5;
  sub_26B24C((int)(a1 + 24), v21, *(unsigned int **)(a10 + 96), v20, a5);
  return sub_26B24C((int)(a1 + 25), v21, *(unsigned int **)(a10 + 100), v20, a5);
}
