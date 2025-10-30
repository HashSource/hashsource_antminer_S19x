int __fastcall sub_1023A4(
        int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6,
        void *block,
        void *a8,
        int *a9,
        int a10,
        int a11)
{
  int v11; // r4
  int v15; // r8
  int v16; // r4
  int v17; // r0
  _BYTE v19[4]; // [sp+20h] [bp-14h] BYREF
  _BYTE v20[4]; // [sp+24h] [bp-10h] BYREF
  _BYTE v21[12]; // [sp+28h] [bp-Ch] BYREF

  v11 = a1;
  if ( ((int (__fastcall *)(void *, unsigned int, int))loc_26B3D8)(a8, 8 * a3, 8 * *(_DWORD *)(a1 + 20)) )
  {
    v15 = v11;
  }
  else
  {
    v16 = sub_26DD30(v11, a2 + a3, a3 + a5);
    v15 = sub_26BC70(v16);
    v17 = sub_FC6D8(v16, (int)v19, (int)v21, (int)v20);
    if ( v17 )
      v11 = v17;
    else
      v11 = v15;
  }
  return sub_10134C(v15, v11, __SPAIR64__(a4, a3), a5, a6, (int)block, a8, a9, a10, a11);
}
