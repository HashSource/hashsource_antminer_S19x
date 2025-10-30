int __fastcall sub_7F378(_DWORD *a1, _DWORD *a2, _BYTE *a3, int a4)
{
  int v7; // r8
  _DWORD *v8; // r10
  int v9; // r6
  int v10; // r0
  signed int v11; // r0
  void *v12; // r6
  size_t v13; // r4
  int v14; // r5
  int v16; // r6
  int v17; // r0
  signed int v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // lr
  int v22; // r0
  size_t v23; // r3
  int v24; // r12
  int v25; // r8
  size_t v26; // r4
  _BYTE *v27; // r7
  int v28; // r12
  int v29; // [sp+4h] [bp-78h]
  int v30; // [sp+8h] [bp-74h]
  void *src; // [sp+1Ch] [bp-60h]
  char v32; // [sp+27h] [bp-55h] BYREF
  size_t n; // [sp+28h] [bp-54h] BYREF
  _BYTE dest[80]; // [sp+2Ch] [bp-50h] BYREF

  if ( a4 )
  {
    v7 = a1[256];
    v8 = a1 + 970;
    v9 = a1[31];
    v10 = sub_D8D8C(v7);
    v11 = sub_D8C78(v10);
    v12 = (void *)(v9 + 76);
    if ( v11 < 0 )
      return 0;
    n = v11;
    v13 = v11 * sub_189090(48, v11);
    v14 = sub_D14F4();
    if ( !v14 )
      return 0;
  }
  else
  {
    v7 = a1[248];
    v8 = a1 + 968;
    v16 = a1[31];
    v17 = sub_D8D8C(v7);
    v18 = sub_D8C78(v17);
    v12 = (void *)(v16 + 8);
    if ( v18 < 0 )
      return 0;
    n = v18;
    v13 = v18 * sub_189090(48, v18);
    v19 = sub_D8920(a1[243]);
    if ( (sub_D8928(v19) & 0xF0007) == 2 && sub_819C8(v7) )
    {
      memcpy(dest, v12, n);
      memcpy(
        &dest[n],
        "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
        "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl/record/ssl3_record.c",
        v13);
      v21 = a2[2];
      v22 = v7;
      v23 = n;
      v24 = a2[3];
      v25 = a2[1];
      src = (void *)a2[6];
      v26 = v13 + n;
      v29 = n + v21;
      v27 = &dest[v26 + 76];
      v30 = v24;
      v28 = v8[1];
      *(_DWORD *)&dest[v26] = *v8;
      *(_DWORD *)&dest[v26 + 4] = v28;
      *(v27 - 68) = v25;
      *(v27 - 66) = v21;
      *(v27 - 67) = BYTE1(v21);
      if ( sub_819EC(v22, (int)a3, (int)&n, (int)dest, src, v29, v30, v12, v23, 1) > 0 )
        goto LABEL_23;
      return 0;
    }
    v14 = sub_D14F4();
    if ( !v14 )
      return 0;
  }
  v20 = a2[2] >> 8;
  v32 = a2[1];
  *a3 = v20;
  a3[1] = a2[2];
  if ( ((int (*)(void))sub_D17B4)() > 0
    && sub_D16D8(v14, v12, n) > 0
    && sub_D16D8(
         v14,
         "666666666666666666666666666666666666666666666666\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\"
         "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl/record/ssl3_record.c",
         v13) > 0
    && sub_D16D8(v14, v8, 8) > 0
    && sub_D16D8(v14, &v32, 1) > 0
    && sub_D16D8(v14, a3, 2) > 0
    && sub_D16D8(v14, a2[6], a2[2]) > 0
    && sub_D16E4(v14, a3, 0) > 0
    && sub_D17B4(v14, v7) > 0
    && sub_D16D8(v14, v12, n) > 0
    && sub_D16D8(
         v14,
         "\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\\ssl/record/ssl3_record.c",
         v13) > 0
    && sub_D16D8(v14, a3, n) > 0
    && sub_D16E4(v14, a3, dest) > 0 )
  {
    sub_D1504(v14);
LABEL_23:
    sub_7EF30(v8);
    return 1;
  }
  sub_D1504(v14);
  return 0;
}
