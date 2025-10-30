int __fastcall sub_AFAA0(int result, void **a2, int a3, int *a4, unsigned __int8 a5, int a6, int a7)
{
  int v7; // r9
  unsigned __int8 *v9; // r7
  int v12; // r11
  int v13; // r3
  int v14; // r1
  int v15; // r0
  int v16; // r2
  unsigned __int8 *v17; // r3
  int v18; // r2
  int v19; // r1
  int v20; // r3
  unsigned __int8 *v21; // r10
  char v22; // r11
  unsigned __int8 *v23; // r7
  unsigned __int8 *v24; // r3
  int v25; // r7
  int v26; // [sp+10h] [bp-24h]
  unsigned __int8 *v27; // [sp+1Ch] [bp-18h] BYREF
  int v28; // [sp+20h] [bp-14h] BYREF
  int v29; // [sp+24h] [bp-10h] BYREF
  unsigned __int8 *v30; // [sp+28h] [bp-Ch] BYREF
  unsigned __int8 *v31[2]; // [sp+2Ch] [bp-8h] BYREF

  if ( !result )
    return result;
  v7 = *a4;
  v9 = (unsigned __int8 *)*a2;
  v26 = result;
  v27 = (unsigned __int8 *)*a2;
  if ( (v7 & 0x10) == 0 )
    return sub_AF1DC(result, a2, a3, a4, a5, a6, a7);
  v31[0] = v9;
  v12 = a4[1];
  if ( a6 )
  {
    if ( *(_BYTE *)a6 )
    {
      v13 = *(_DWORD *)(a6 + 20);
      v14 = *(_DWORD *)(a6 + 8);
      v28 = *(_DWORD *)(a6 + 12);
      v15 = *(_DWORD *)(a6 + 4);
      v16 = *(_DWORD *)(a6 + 16);
      v31[0] = &v9[v13];
      v30 = (unsigned __int8 *)v14;
      v29 = v16;
    }
    else
    {
      v15 = sub_ADD48(v31, (int *)&v30, &v28, &v29, a3);
      v17 = v31[0];
      v18 = (int)v30;
      *(_DWORD *)(a6 + 16) = v29;
      v19 = v28;
      v20 = v17 - v9;
      *(_DWORD *)(a6 + 4) = v15;
      *(_DWORD *)(a6 + 20) = v20;
      *(_DWORD *)(a6 + 12) = v19;
      *(_DWORD *)(a6 + 8) = v18;
      *(_BYTE *)a6 = 1;
      if ( (v15 & 0x81) == 0 && a3 < v20 + v18 )
      {
        sub_D0048(13, 104, 155, "crypto/asn1/tasn_dec.c", 1129);
        *(_BYTE *)a6 = 0;
        goto LABEL_13;
      }
    }
    if ( (v15 & 0x80) != 0 )
    {
      sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
      *(_BYTE *)a6 = 0;
      goto LABEL_13;
    }
  }
  else
  {
    LOBYTE(v15) = sub_ADD48(v31, (int *)&v30, &v28, &v29, a3);
    if ( (v15 & 0x80) != 0 )
    {
      sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
      goto LABEL_13;
    }
  }
  if ( v12 < 0 )
    goto LABEL_21;
  if ( v12 != v28 || (v7 & 0xC0) != v29 )
  {
    if ( a5 )
      return -1;
    if ( a6 )
      *(_BYTE *)a6 = 0;
    sub_D0048(13, 104, 168, "crypto/asn1/tasn_dec.c", 1149);
LABEL_13:
    sub_D0048(13, 132, 58, "crypto/asn1/tasn_dec.c", 484);
    return 0;
  }
  if ( a6 )
    *(_BYTE *)a6 = 0;
LABEL_21:
  v21 = v31[0];
  v22 = v15;
  if ( (v15 & 1) != 0 )
    v23 = (unsigned __int8 *)(v31[0] - v9);
  else
    v23 = v30;
  v27 = v31[0];
  if ( (v15 & 1) != 0 )
    v23 = (unsigned __int8 *)(a3 - (_DWORD)v23);
  if ( (v15 & 0x20) == 0 )
  {
    sub_D0048(13, 132, 120, "crypto/asn1/tasn_dec.c", 490);
    return v22 & 0x20;
  }
  if ( sub_AF1DC(v26, (void **)&v27, (int)v23, a4, 0, a6, a7) )
  {
    v24 = v27;
    v25 = (int)&v23[-(v27 - v21)];
    if ( (v22 & 1) != 0 )
    {
      if ( v25 <= 1 || *v27 || (v24 = v27 + 2, v27[1]) )
      {
        sub_D0048(13, 132, 137, "crypto/asn1/tasn_dec.c", 504);
        return 0;
      }
      goto LABEL_37;
    }
    if ( !v25 )
    {
LABEL_37:
      *a2 = v24;
      return 1;
    }
    sub_D0048(13, 132, 119, "crypto/asn1/tasn_dec.c", 513);
    return 0;
  }
  else
  {
    sub_D0048(13, 132, 58, "crypto/asn1/tasn_dec.c", 496);
    return 0;
  }
}
