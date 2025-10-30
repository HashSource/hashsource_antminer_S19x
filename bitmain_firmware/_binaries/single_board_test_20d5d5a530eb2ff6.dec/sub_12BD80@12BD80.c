int __fastcall sub_12BD80(char *a1, int a2, int a3, _DWORD *a4)
{
  int result; // r0
  unsigned int v8; // r11
  char *v9; // r6
  int v10; // r7
  size_t *v11; // r5
  int v12; // r5
  _DWORD *v13; // r6
  int *v14; // r10
  int v15; // r8
  int v16; // r0
  int v17; // r0
  bool v18; // cc
  unsigned int v19; // r1
  int v20; // r8
  int *v21; // r0
  _BYTE *v22; // r1
  _BYTE *v23; // r3
  void *v24; // r6
  char v25; // r0
  int v26; // r1
  int v27; // r3
  int v28; // r7
  _DWORD *v29; // r5
  int v30; // r3
  int v31; // r2
  int v32; // r6
  _BYTE *v33; // r0
  void *v34; // r9
  int v35; // r7
  int *v36; // r5
  int v37; // r6
  int v38; // r3
  int v39; // r2
  int v40; // r1
  _BYTE *v41; // r3
  int v42; // r2
  int v43; // r5
  size_t *v44; // r0
  int v45; // r0
  int v46; // r7
  int v47; // r0
  int v48; // r2
  char **v49; // r0
  size_t *v50; // r0
  bool v51; // zf
  int v52; // r0
  _BYTE *v53; // r0
  _DWORD *v54; // r3
  int v55; // [sp+14h] [bp-1E0h]
  size_t n; // [sp+18h] [bp-1DCh]
  void *v57; // [sp+1Ch] [bp-1D8h]
  unsigned __int8 *v58; // [sp+24h] [bp-1D0h] BYREF
  unsigned __int8 *v59; // [sp+28h] [bp-1CCh] BYREF
  _BYTE *v60; // [sp+2Ch] [bp-1C8h] BYREF
  void *v61; // [sp+30h] [bp-1C4h] BYREF
  int v62; // [sp+34h] [bp-1C0h] BYREF
  int v63; // [sp+38h] [bp-1BCh] BYREF
  _BYTE *v64[3]; // [sp+3Ch] [bp-1B8h] BYREF
  int v65; // [sp+48h] [bp-1ACh] BYREF
  int v66; // [sp+4Ch] [bp-1A8h]
  unsigned int v67; // [sp+50h] [bp-1A4h]
  int v68; // [sp+54h] [bp-1A0h]
  _DWORD *v69; // [sp+58h] [bp-19Ch]
  int v70; // [sp+1ECh] [bp-8h]
  _BYTE v71[4]; // [sp+1F0h] [bp-4h] BYREF

  v68 = 1;
  v58 = 0;
  v65 = -1;
  v66 = -1;
  v70 = 0;
  v62 = 0;
  result = sub_BBEDC(a1, 44, 1, (int (__fastcall *)(const char *, int, int))sub_12C560, (int)&v65);
  if ( result )
  {
    *a4 = 194;
    return 0;
  }
  v8 = v67;
  if ( v67 - 16 <= 1 )
  {
    if ( !a2 )
    {
      *a4 = 192;
      return 0;
    }
    v12 = 0;
    if ( a3 > 49 )
    {
      *a4 = 181;
      return result;
    }
    v13 = v69;
    v64[0] = 0;
    v14 = (int *)sub_10BFCC();
    if ( !v14 )
    {
      v13 = 0;
      v11 = 0;
      v23 = v64[0];
      goto LABEL_23;
    }
    if ( v13 )
    {
      v13 = (_DWORD *)sub_11BB1C(a2);
      if ( !v13 )
      {
LABEL_91:
        v11 = 0;
        v23 = v64[0];
LABEL_23:
        CRYPTO_free(v23);
        sub_10BFDC((int)v14, (void (__fastcall *)(int))ASN1_TYPE_free);
        sub_11BB68(a2, (int)v13);
        goto LABEL_24;
      }
      v15 = a3 + 1;
      while ( 1 )
      {
        v18 = v12 < sub_10C010((int)v13);
        v19 = v12++;
        if ( !v18 )
          break;
        v16 = sub_10C01C(v13, v19);
        v17 = sub_12BD80(*(_DWORD *)(v16 + 8), a2, v15, a4);
        if ( !v17 || !sub_10BD3C(v14, v17) )
          goto LABEL_91;
      }
    }
    if ( v8 == 17 )
      v20 = sub_B2584((size_t *)v14, v64);
    else
      v20 = sub_B2554((size_t *)v14, v64);
    if ( v20 >= 0 )
    {
      v11 = (size_t *)sub_B2408();
      if ( v11 )
      {
        v21 = (int *)sub_AE194(v8);
        v11[1] = (size_t)v21;
        if ( v21 )
        {
          v22 = v64[0];
          *v11 = v8;
          v23 = 0;
          *v21 = v20;
          v21[2] = (int)v22;
          v64[0] = 0;
        }
        else
        {
          v23 = v64[0];
        }
      }
      else
      {
        v23 = v64[0];
      }
      goto LABEL_23;
    }
    goto LABEL_91;
  }
  v9 = (char *)v69;
  v10 = v68;
  v11 = (size_t *)sub_B2408();
  if ( !v11 )
  {
    sub_D0048(13, 179, 65, (int)"crypto/asn1/asn1_gen.c", 587);
    return 0;
  }
  if ( !v9 )
    v9 = &byte_1A4198;
  switch ( v8 )
  {
    case 1u:
      if ( v10 != 1 )
      {
        sub_D0048(13, 179, 190, (int)"crypto/asn1/asn1_gen.c", 605);
        goto LABEL_87;
      }
      v64[2] = v9;
      v64[1] = 0;
      v64[0] = 0;
      if ( sub_1225E0((int)v64, v11 + 1) )
        goto LABEL_84;
      sub_D0048(13, 179, 176, (int)"crypto/asn1/asn1_gen.c", 612);
      goto LABEL_86;
    case 2u:
    case 0xAu:
      if ( v10 != 1 )
      {
        sub_D0048(13, 179, 185, (int)"crypto/asn1/asn1_gen.c", 620);
        goto LABEL_87;
      }
      v52 = sub_122498(0, (unsigned __int8 *)v9);
      v11[1] = v52;
      if ( v52 )
        goto LABEL_84;
      sub_D0048(13, 179, 180, (int)"crypto/asn1/asn1_gen.c", 625);
      goto LABEL_86;
    case 3u:
    case 4u:
      v50 = (size_t *)sub_AE1D0();
      v11[1] = (size_t)v50;
      if ( !v50 )
      {
        sub_D0048(13, 179, 65, (int)"crypto/asn1/asn1_gen.c", 692);
        goto LABEL_87;
      }
      if ( v10 == 3 )
      {
        v53 = sub_E9FB4(v9, &v63);
        if ( !v53 )
        {
          sub_D0048(13, 179, 178, (int)"crypto/asn1/asn1_gen.c", 698);
          goto LABEL_86;
        }
        v54 = (_DWORD *)v11[1];
        *v54 = v63;
        v54[2] = v53;
        v54[1] = v8;
        goto LABEL_98;
      }
      if ( v10 == 1 )
      {
        sub_AE088(v50, v9, -1);
LABEL_98:
        if ( v8 == 3 )
          *(_DWORD *)(v11[1] + 12) = *(_DWORD *)(v11[1] + 12) & 0xFFFFFFF0 | 8;
        goto LABEL_84;
      }
      v51 = v10 == 4;
      if ( v10 == 4 )
        v51 = v8 == 3;
      if ( !v51 )
      {
        sub_D0048(13, 179, 175, (int)"crypto/asn1/asn1_gen.c", 716);
        goto LABEL_87;
      }
      if ( !sub_BBEDC(v9, 44, 1, (int (__fastcall *)(const char *, int, int))sub_12C42C, (int)v50) )
      {
        sub_D0048(13, 179, 188, (int)"crypto/asn1/asn1_gen.c", 710);
        goto LABEL_86;
      }
LABEL_84:
      *v11 = v8;
LABEL_24:
      if ( !v11 )
        return 0;
      if ( v65 != -1 || (result = (int)v11, v70) )
      {
        v24 = (void *)sub_B23F4(v11, &v58);
        ASN1_TYPE_free((int)v11);
        v59 = v58;
        if ( v65 == -1 )
        {
          n = (size_t)v24;
          v55 = 0;
        }
        else
        {
          v25 = sub_ADD48(&v59, &v62, &v63, (int *)v64, (int)v24);
          v26 = v25 & 0x80;
          if ( v25 < 0 )
            goto LABEL_90;
          n = (size_t)v24 - (v59 - v58);
          if ( (v25 & 1) != 0 )
          {
            v62 = 0;
            v27 = 2;
          }
          else
          {
            v26 = v62;
            v27 = v25 & 0x20;
          }
          v55 = v27;
          v24 = (void *)sub_AE038(0, v26, v65);
        }
        if ( v70 > 0 )
        {
          v28 = 0;
          v29 = &v71[20 * v70 - 444];
          do
          {
            v30 = v29[8];
            v31 = v29[5];
            ++v28;
            v29 -= 5;
            v32 = (int)v24 + v30;
            v29[14] = v32;
            v24 = (void *)sub_AE038(0, v32, v31);
          }
          while ( v70 > v28 );
        }
        v33 = CRYPTO_malloc(v24);
        v34 = v33;
        if ( v33 )
        {
          v60 = v33;
          if ( v70 > 0 )
          {
            v35 = 0;
            v36 = &v65;
            v57 = v24;
            do
            {
              v37 = v36[6];
              v38 = v36[5];
              ++v35;
              v39 = v36[9];
              v40 = v36[7];
              __pld(v36 + 41);
              v36 += 5;
              sub_ADE9C(&v60, v40, v39, v38, v37);
              if ( v36[3] )
              {
                v41 = v60++;
                *v41 = 0;
              }
            }
            while ( v70 > v35 );
            v24 = v57;
          }
          if ( v65 != -1 )
          {
            if ( !v66 )
            {
              v42 = v55;
              if ( (unsigned int)(v65 - 16) <= 1 )
                v42 = 32;
              v55 = v42;
            }
            sub_ADE9C(&v60, v55, v62, v65, v66);
          }
          memcpy(v60, v59, n);
          v61 = v34;
          v43 = sub_B23D8(0, &v61, (int)v24);
          goto LABEL_51;
        }
LABEL_90:
        v34 = 0;
        v43 = 0;
LABEL_51:
        CRYPTO_free(v58);
        CRYPTO_free(v34);
        return v43;
      }
      return result;
    case 5u:
      if ( !*v9 )
        goto LABEL_84;
      sub_D0048(13, 179, 182, (int)"crypto/asn1/asn1_gen.c", 598);
      goto LABEL_87;
    case 6u:
      if ( v10 != 1 )
      {
        sub_D0048(13, 179, 191, (int)"crypto/asn1/asn1_gen.c", 632);
        goto LABEL_87;
      }
      v49 = sub_EB03C(v9, 0);
      v11[1] = (size_t)v49;
      if ( v49 )
        goto LABEL_84;
      sub_D0048(13, 179, 183, (int)"crypto/asn1/asn1_gen.c", 636);
      goto LABEL_86;
    case 0xCu:
    case 0x12u:
    case 0x13u:
    case 0x14u:
    case 0x16u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Cu:
    case 0x1Eu:
      if ( v10 == 1 )
      {
        v46 = 4097;
      }
      else
      {
        if ( v10 != 2 )
        {
          sub_D0048(13, 179, 177, (int)"crypto/asn1/asn1_gen.c", 677);
          goto LABEL_87;
        }
        v46 = 4096;
      }
      v47 = sub_AF1C4(v8);
      if ( sub_1714AC(v11 + 1, v9, -1, v46, v47) > 0 )
        goto LABEL_84;
      v48 = 683;
      goto LABEL_64;
    case 0x17u:
    case 0x18u:
      if ( v10 != 1 )
      {
        sub_D0048(13, 179, 193, (int)"crypto/asn1/asn1_gen.c", 644);
LABEL_87:
        ASN1_TYPE_free((int)v11);
        return 0;
      }
      v44 = (size_t *)sub_AE1D0();
      v11[1] = (size_t)v44;
      if ( v44 )
      {
        if ( sub_AE088(v44, v9, -1) )
        {
          v45 = v11[1];
          *(_DWORD *)(v45 + 4) = v8;
          if ( sub_12B10C(v45) )
            goto LABEL_84;
          sub_D0048(13, 179, 184, (int)"crypto/asn1/asn1_gen.c", 657);
          goto LABEL_86;
        }
        v48 = 652;
      }
      else
      {
        v48 = 648;
      }
LABEL_64:
      sub_D0048(13, 179, 65, (int)"crypto/asn1/asn1_gen.c", v48);
LABEL_86:
      sub_D1240(2, "string=", v9);
      goto LABEL_87;
    default:
      sub_D0048(13, 179, 196, (int)"crypto/asn1/asn1_gen.c", 729);
      goto LABEL_86;
  }
}
