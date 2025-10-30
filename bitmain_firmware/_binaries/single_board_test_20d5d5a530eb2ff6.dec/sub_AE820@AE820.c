int __fastcall sub_AE820(
        _DWORD *a1,
        _DWORD *a2,
        _BYTE *a3,
        _BYTE *a4,
        _BYTE *a5,
        unsigned __int8 **a6,
        int a7,
        int a8,
        int a9)
{
  unsigned __int8 *v13; // r5
  int v14; // r3
  int v15; // r1
  int v16; // r0
  unsigned __int8 *v17; // r3
  int v18; // r2
  int v19; // r6
  int v21; // r2
  int v22; // r6
  int v23; // [sp+8h] [bp-14h] BYREF
  int v24; // [sp+Ch] [bp-10h] BYREF
  int v25; // [sp+10h] [bp-Ch] BYREF
  unsigned __int8 *v26[2]; // [sp+14h] [bp-8h] BYREF

  v13 = *a6;
  v26[0] = *a6;
  if ( !a9 )
  {
    LOBYTE(v16) = sub_ADD48(v26, &v25, &v23, &v24, a7);
    if ( (v16 & 0x80) == 0 )
    {
      v17 = v26[0];
      goto LABEL_5;
    }
    v19 = 0;
    sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
    return v19;
  }
  if ( *(_BYTE *)a9 )
  {
    v14 = *(_DWORD *)(a9 + 20);
    v15 = *(_DWORD *)(a9 + 16);
    v25 = *(_DWORD *)(a9 + 8);
    v16 = *(_DWORD *)(a9 + 4);
    v17 = &v13[v14];
    v18 = *(_DWORD *)(a9 + 12);
    v26[0] = v17;
    v24 = v15;
    v23 = v18;
    goto LABEL_4;
  }
  v16 = sub_ADD48(v26, &v25, &v23, &v24, a7);
  v17 = v26[0];
  v21 = v25;
  *(_DWORD *)(a9 + 16) = v24;
  v22 = v23;
  *(_DWORD *)(a9 + 4) = v16;
  *(_DWORD *)(a9 + 20) = v17 - v13;
  *(_DWORD *)(a9 + 12) = v22;
  v19 = v16 & 0x81;
  *(_DWORD *)(a9 + 8) = v21;
  *(_BYTE *)a9 = 1;
  if ( (v16 & 0x81) == 0 && a7 < v21 + v17 - v13 )
  {
    sub_D0048(13, 104, 155, "crypto/asn1/tasn_dec.c", 1129);
    *(_BYTE *)a9 = v19;
    return v19;
  }
LABEL_4:
  if ( (v16 & 0x80) == 0 )
  {
LABEL_5:
    if ( (v16 & 1) != 0 )
      v25 = a7 - (v17 - v13);
    if ( a4 )
      *a4 = v16 & 1;
    if ( a5 )
      *a5 = v16 & 0x20;
    if ( a1 )
      *a1 = v25;
    if ( a3 )
      *a3 = v24;
    if ( a2 )
      *a2 = v23;
    v19 = 1;
    *a6 = v17;
    return v19;
  }
  sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
  *(_BYTE *)a9 = 0;
  return 0;
}
