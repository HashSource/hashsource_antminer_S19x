unsigned __int64 __fastcall sub_11BE0(int a1, int a2)
{
  __int64 v2; // r0
  __int64 v3; // r2
  __int64 v4; // r0
  __int64 v5; // r2
  unsigned __int64 v6; // r0
  unsigned __int64 v7; // r0
  __int64 v9; // [sp+10h] [bp-D4h]
  unsigned __int64 v10; // [sp+28h] [bp-BCh]
  __int64 v11; // [sp+50h] [bp-94h]
  __int64 v14; // [sp+70h] [bp-74h]
  unsigned __int64 v15; // [sp+78h] [bp-6Ch]
  __int64 v16; // [sp+80h] [bp-64h]
  __int64 v17; // [sp+88h] [bp-5Ch]
  unsigned __int64 v18; // [sp+90h] [bp-54h]
  unsigned __int64 v19; // [sp+98h] [bp-4Ch]
  __int64 v20; // [sp+A0h] [bp-44h]
  unsigned __int64 v21; // [sp+A8h] [bp-3Ch]
  __int64 v22; // [sp+B0h] [bp-34h]
  __int64 v23; // [sp+B8h] [bp-2Ch]
  __int64 v24; // [sp+C0h] [bp-24h]

  v24 = (unsigned int)(2 * a2) - 0x651E95C4D06FBFB1LL;
  v2 = sub_11490((const void *)a1);
  v3 = 797982799LL * (unsigned int)v2;
  HIDWORD(v3) += 797982799 * HIDWORD(v2) - 1696503237 * v2;
  v23 = v3;
  v22 = sub_11490((const void *)(a1 + 8));
  v21 = sub_11490((const void *)(a1 + a2 - 8)) * v24;
  v4 = sub_11490((const void *)(a1 + a2 - 16));
  v5 = 797982799LL * (unsigned int)v4;
  HIDWORD(v5) += 797982799 * HIDWORD(v4) - 1696503237 * v4;
  v20 = v5;
  v6 = sub_11514(v23 + v22, 43);
  v19 = v20 + v6 + sub_11514(v21, 30);
  v11 = sub_11514(v22 - 0x651E95C4D06FBFB1LL, 18) + v23 + v21;
  v18 = sub_11598(v19, SHIDWORD(v19), v11, v24);
  v17 = sub_11490((const void *)(a1 + 16)) * v24;
  v16 = sub_11490((const void *)(a1 + 24));
  v15 = (sub_11490((const void *)(a1 + a2 - 32)) + v19) * v24;
  v14 = (sub_11490((const void *)(a1 + a2 - 24)) + v18) * v24;
  v7 = sub_11514(v17 + v16, 43);
  v10 = v7 + sub_11514(v15, 30) + v14;
  v9 = sub_11514(v16 + v23, 18) + v17 + v15;
  return sub_11598(v10, SHIDWORD(v10), v9, v24);
}
