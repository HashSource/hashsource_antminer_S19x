int __fastcall sub_AE698(
        _DWORD *a1,
        _DWORD *a2,
        _BYTE *a3,
        _BYTE *a4,
        _BYTE *a5,
        unsigned __int8 **a6,
        int a7,
        int a8,
        int a9,
        char a10,
        int a11)
{
  unsigned __int8 *v15; // r5
  int v16; // r3
  int v17; // r1
  int v18; // r0
  int v19; // r2
  int v20; // r6
  unsigned __int8 *v22; // r3
  int v23; // r2
  int v24; // r1
  int v25; // r3
  unsigned __int8 *v26; // r3
  int v27; // [sp+8h] [bp-14h] BYREF
  int v28; // [sp+Ch] [bp-10h] BYREF
  int v29; // [sp+10h] [bp-Ch] BYREF
  unsigned __int8 *v30[2]; // [sp+14h] [bp-8h] BYREF

  v15 = *a6;
  v30[0] = *a6;
  if ( a11 )
  {
    if ( *(_BYTE *)a11 )
    {
      v16 = *(_DWORD *)(a11 + 20);
      v17 = *(_DWORD *)(a11 + 8);
      v27 = *(_DWORD *)(a11 + 12);
      v18 = *(_DWORD *)(a11 + 4);
      v19 = *(_DWORD *)(a11 + 16);
      v30[0] = &v15[v16];
      v29 = v17;
      v28 = v19;
    }
    else
    {
      v18 = sub_ADD48(v30, &v29, &v27, &v28, a7);
      v22 = v30[0];
      v23 = v29;
      *(_DWORD *)(a11 + 16) = v28;
      v24 = v27;
      v25 = v22 - v15;
      *(_BYTE *)a11 = 1;
      v20 = v18 & 0x81;
      *(_DWORD *)(a11 + 4) = v18;
      *(_DWORD *)(a11 + 20) = v25;
      *(_DWORD *)(a11 + 8) = v23;
      *(_DWORD *)(a11 + 12) = v24;
      if ( (v18 & 0x81) == 0 && a7 < v25 + v23 )
      {
        sub_D0048(13, 104, 155, "crypto/asn1/tasn_dec.c", 1129);
        *(_BYTE *)a11 = v20;
        return v20;
      }
    }
    if ( (v18 & 0x80) != 0 )
    {
      sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
      *(_BYTE *)a11 = 0;
      return 0;
    }
  }
  else
  {
    LOBYTE(v18) = sub_ADD48(v30, &v29, &v27, &v28, a7);
    if ( (v18 & 0x80) != 0 )
    {
      v20 = 0;
      sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
      return v20;
    }
  }
  if ( a8 >= 0 )
  {
    if ( a8 == v27 && v28 == a9 )
    {
      if ( a11 )
        *(_BYTE *)a11 = 0;
      goto LABEL_19;
    }
    if ( a10 )
      return -1;
    if ( a11 )
      *(_BYTE *)a11 = 0;
    v20 = 0;
    sub_D0048(13, 104, 168, "crypto/asn1/tasn_dec.c", 1149);
    return v20;
  }
LABEL_19:
  v26 = v30[0];
  if ( (v18 & 1) != 0 )
    v29 = a7 - (v30[0] - v15);
  if ( a4 )
    *a4 = v18 & 1;
  if ( a5 )
    *a5 = v18 & 0x20;
  if ( a1 )
    *a1 = v29;
  if ( a3 )
    *a3 = v28;
  if ( a2 )
    *a2 = v27;
  *a6 = v26;
  return 1;
}
