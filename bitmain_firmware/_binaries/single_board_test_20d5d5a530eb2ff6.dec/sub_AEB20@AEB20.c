int __fastcall sub_AEB20(int *a1, void **a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8)
{
  int *v8; // r11
  char *v9; // r10
  int v12; // r6
  char *v13; // r5
  int v14; // r3
  int v15; // r1
  int v16; // r0
  int v17; // r2
  int v18; // r2
  int result; // r0
  char *v20; // r3
  int v21; // r1
  int v22; // r3
  char *v23; // r3
  int v24; // r1
  int v25; // r3
  int v26; // r2
  char v27; // cc
  char *v28; // r4
  int v29; // r5
  int v30; // r2
  int (__fastcall *v31)(int *, char *, int, int, unsigned __int8 *, int); // r6
  int v32; // r0
  int v33; // r2
  int v34; // r5
  bool v35; // cc
  int v36; // r4
  _DWORD *v37; // r4
  int *v38; // r6
  int v39; // r1
  size_t *v40; // r7
  char *v41; // r0
  int v42; // r5
  int v43; // r0
  int v44; // r2
  char *v45; // r3
  int v46; // r2
  int v47; // r0
  int v48; // r2
  int v49; // r0
  int v50; // r0
  int v51; // [sp+18h] [bp-28h]
  int v52; // [sp+18h] [bp-28h]
  int v53; // [sp+18h] [bp-28h]
  int v54; // [sp+18h] [bp-28h]
  int v55; // [sp+18h] [bp-28h]
  int v56; // [sp+18h] [bp-28h]
  unsigned __int8 v57; // [sp+27h] [bp-19h] BYREF
  unsigned int v58; // [sp+28h] [bp-18h] BYREF
  char *v59; // [sp+2Ch] [bp-14h] BYREF
  int v60; // [sp+30h] [bp-10h] BYREF
  int v61; // [sp+34h] [bp-Ch] BYREF
  int v62; // [sp+38h] [bp-8h] BYREF
  char *s; // [sp+3Ch] [bp-4h] BYREF
  int v64; // [sp+40h] [bp+0h] BYREF
  char *v65; // [sp+44h] [bp+4h]
  int v66; // [sp+48h] [bp+8h]
  int v67; // [sp+4Ch] [bp+Ch]

  v8 = a1;
  v57 = 0;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  v9 = (char *)a7;
  if ( !a1 )
  {
    sub_D0048(13, 108, 125, "crypto/asn1/tasn_dec.c", 672);
    return 0;
  }
  v12 = a3;
  if ( *(_BYTE *)a4 == 5 )
  {
    v58 = a5;
    if ( a5 != -4 )
      goto LABEL_23;
    a5 = -1;
    goto LABEL_53;
  }
  v58 = *(_DWORD *)(a4 + 4);
  if ( v58 == -4 )
  {
    if ( a5 >= 0 )
    {
      sub_D0048(13, 108, 127, "crypto/asn1/tasn_dec.c", 686);
      return 0;
    }
LABEL_53:
    if ( a7 )
    {
      sub_D0048(13, 108, 126, "crypto/asn1/tasn_dec.c", 691);
      return 0;
    }
    v59 = (char *)*a2;
    if ( !sub_AE820(0, &v58, &s, 0, 0, (unsigned __int8 **)&v59, a3, 0, a8) )
    {
      v18 = 698;
      goto LABEL_16;
    }
    if ( (_BYTE)s )
      v58 = -3;
  }
  if ( a5 != -1 )
    goto LABEL_5;
  a5 = v58;
LABEL_23:
  a6 = 0;
LABEL_5:
  v13 = (char *)*a2;
  v59 = v13;
  s = v13;
  if ( a8 )
  {
    if ( *(_BYTE *)a8 )
    {
      v14 = *(_DWORD *)(a8 + 20);
      v15 = *(_DWORD *)(a8 + 8);
      v60 = *(_DWORD *)(a8 + 12);
      v16 = *(_DWORD *)(a8 + 4);
      v17 = *(_DWORD *)(a8 + 16);
      s = &v13[v14];
      v62 = v15;
      v61 = v17;
    }
    else
    {
      v16 = sub_ADD48((unsigned __int8 **)&s, &v62, &v60, &v61, v12);
      v20 = s;
      v17 = v62;
      *(_DWORD *)(a8 + 16) = v61;
      v21 = v60;
      v22 = v20 - v13;
      *(_DWORD *)(a8 + 4) = v16;
      *(_DWORD *)(a8 + 20) = v22;
      *(_DWORD *)(a8 + 12) = v21;
      *(_DWORD *)(a8 + 8) = v17;
      *(_BYTE *)a8 = 1;
      if ( (v16 & 0x81) == 0 && v12 < v22 + v17 )
      {
        sub_D0048(13, 104, 155, "crypto/asn1/tasn_dec.c", 1129);
        *(_BYTE *)a8 = 0;
        goto LABEL_15;
      }
    }
    if ( (v16 & 0x80) == 0 )
      goto LABEL_9;
    sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
    *(_BYTE *)a8 = 0;
LABEL_15:
    v18 = 713;
LABEL_16:
    sub_D0048(13, 108, 58, "crypto/asn1/tasn_dec.c", v18);
    return 0;
  }
  v16 = sub_ADD48((unsigned __int8 **)&s, &v62, &v60, &v61, v12);
  if ( (v16 & 0x80) != 0 )
  {
    sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
    goto LABEL_15;
  }
LABEL_9:
  if ( a5 >= 0 )
  {
    if ( a5 == v60 )
    {
      v17 = a6;
      if ( a6 == v61 )
      {
        if ( a8 )
          *(_BYTE *)a8 = 0;
        goto LABEL_29;
      }
    }
    if ( a7 )
      return -1;
    if ( a8 )
      *(_BYTE *)a8 = 0;
    sub_D0048(13, 104, 168, "crypto/asn1/tasn_dec.c", 1149);
    goto LABEL_15;
  }
LABEL_29:
  v23 = (char *)(v16 << 31);
  v16 = (unsigned __int8)v16;
  if ( (v16 & 1) != 0 )
    v23 = s;
  else
    v9 = s;
  v24 = v16 & 0x20;
  if ( (v16 & 1) != 0 )
  {
    v17 = v23 - v13;
    v9 = v23;
  }
  else
  {
    v12 = v62;
  }
  v25 = v58;
  if ( (v16 & 1) != 0 )
    v12 -= v17;
  v59 = v9;
  v26 = v16 & 1;
  v51 = v16 & 0x20;
  v27 = (v58 != -3) & __CFADD__(v58, 3);
  if ( v58 != -3 )
    v27 = v58 - 16 > 1;
  if ( v27 )
  {
    if ( (v16 & 0x20) != 0 )
    {
      v35 = v58 > 0xA;
      if ( v58 != 10 )
        v35 = (v58 & 0xFFFFFFFB) - 1 > 1;
      v36 = !v35;
      if ( !v35 )
      {
        sub_D0048(13, 108, 195, "crypto/asn1/tasn_dec.c", 749);
        return 0;
      }
      v57 = 1;
      v32 = sub_AE95C(&v64, (void **)&v59, v12, v16 & 1, v36);
      if ( !v32 )
      {
LABEL_49:
        v33 = v57;
        v34 = v32;
        goto LABEL_50;
      }
      v29 = v64;
      v16 = sub_BAF60(&v64);
      if ( !v16 )
      {
        v34 = 0;
        sub_D0048(13, 108, 65, "crypto/asn1/tasn_dec.c", 767);
        v33 = v57;
        goto LABEL_50;
      }
      v65[v29] = v36;
      v28 = v65;
      v25 = v58;
    }
    else
    {
      v29 = v12;
      v28 = v9;
      v59 = &v9[v12];
    }
    goto LABEL_46;
  }
  v16 = v58 + 3;
  if ( v58 == -3 )
  {
    if ( a8 )
      *(_BYTE *)a8 = 0;
  }
  else if ( !v24 )
  {
    sub_D0048(13, 108, 156, "crypto/asn1/tasn_dec.c", 731);
    return v51;
  }
  v28 = (char *)*a2;
  if ( !v26 )
  {
    v29 = v9 - v28 + v12;
    v59 = &v9[v12];
    goto LABEL_46;
  }
  if ( v12 <= 0 )
  {
LABEL_120:
    sub_D0048(13, 190, 137, "crypto/asn1/tasn_dec.c", 980);
    goto LABEL_83;
  }
  v42 = 1;
  while ( v12 != 1 && !*v9 && !v9[1] )
  {
    --v42;
    v9 += 2;
    if ( !v42 )
    {
      v59 = v9;
      v29 = v9 - v28;
      v25 = v58;
LABEL_46:
      v30 = *(_DWORD *)(a4 + 16);
      s = v28;
      if ( v30 )
      {
        v31 = *(int (__fastcall **)(int *, char *, int, int, unsigned __int8 *, int))(v30 + 20);
        if ( v31 )
        {
          v32 = v31(v8, v28, v29, v25, &v57, a4);
          if ( !v32 )
            goto LABEL_49;
LABEL_73:
          v33 = v57;
LABEL_74:
          v34 = 1;
          *a2 = v59;
          goto LABEL_50;
        }
      }
      if ( *(_DWORD *)(a4 + 4) == -4 )
      {
        v37 = (_DWORD *)*v8;
        if ( !*v8 )
        {
          v55 = v25;
          v49 = sub_B2408(v16);
          v37 = (_DWORD *)v49;
          if ( !v49 )
          {
            ((void (*)(void))ASN1_TYPE_free)();
            goto LABEL_83;
          }
          *v8 = v49;
          v25 = v55;
        }
        if ( *v37 != v25 )
        {
          v54 = v25;
          sub_AD794(v37, v25, 0);
          v25 = v54;
        }
        v38 = v8;
        v8 = v37 + 1;
      }
      else
      {
        v37 = 0;
        v38 = 0;
      }
      switch ( v25 )
      {
        case 1:
          if ( v29 == 1 )
          {
            *v8 = (unsigned __int8)*s;
            goto LABEL_73;
          }
          sub_D0048(13, 204, 106, "crypto/asn1/tasn_dec.c", 837);
          goto LABEL_81;
        case 2:
        case 10:
          v52 = v25;
          if ( !sub_126740(v8, &s, v29) )
            goto LABEL_81;
          v25 = v52;
          v33 = v57;
          *(_DWORD *)(*v8 + 4) = *(_DWORD *)(*v8 + 4) & 0x100 | v52;
          goto LABEL_86;
        case 3:
          if ( sub_125908(v8, &s, v29) )
            goto LABEL_73;
          goto LABEL_81;
        case 5:
          if ( !v29 )
          {
            *v8 = 1;
            v33 = v57;
            goto LABEL_86;
          }
          sub_D0048(13, 204, 144, "crypto/asn1/tasn_dec.c", 829);
          goto LABEL_81;
        case 6:
          if ( sub_127E94(v8, &s, v29) )
            goto LABEL_73;
          goto LABEL_81;
        default:
          if ( v25 == 30 )
          {
            if ( (v29 & 1) != 0 )
            {
              sub_D0048(13, 204, 214, "crypto/asn1/tasn_dec.c", 879);
              goto LABEL_81;
            }
          }
          else if ( v25 == 28 && v29 << 30 )
          {
            sub_D0048(13, 204, 215, "crypto/asn1/tasn_dec.c", 884);
            goto LABEL_81;
          }
          v40 = (size_t *)*v8;
          if ( *v8 )
          {
            v40[1] = v25;
          }
          else
          {
            v56 = v25;
            v50 = sub_AE194(v25);
            v25 = v56;
            v40 = (size_t *)v50;
            if ( !v50 )
            {
              sub_D0048(13, 204, 65, "crypto/asn1/tasn_dec.c", 891);
LABEL_81:
              ASN1_TYPE_free(v37);
              if ( v38 )
                *v38 = 0;
              goto LABEL_83;
            }
            *v8 = v50;
          }
          v53 = v25;
          if ( v57 )
          {
            CRYPTO_free(v40[2], "crypto/asn1/tasn_dec.c", 901);
            v41 = s;
            *v40 = v29;
            v33 = 0;
            v57 = 0;
            v40[2] = (size_t)v41;
            v25 = v53;
          }
          else
          {
            v47 = sub_AE088(v40, s, v29);
            v25 = v53;
            v33 = 0;
            if ( !v47 )
            {
              sub_D0048(13, 204, 65, "crypto/asn1/tasn_dec.c", 907);
              ASN1_STRING_free((int)v40);
              *v8 = 0;
              goto LABEL_81;
            }
          }
LABEL_86:
          v39 = (int)v37;
          if ( v37 )
            v39 = 1;
          if ( v25 != 5 )
            v39 = 0;
          if ( v39 )
            v37[1] = 0;
          goto LABEL_74;
      }
    }
    v12 -= 2;
LABEL_119:
    if ( v12 <= 0 )
      goto LABEL_120;
  }
  s = v9;
  v43 = sub_ADD48((unsigned __int8 **)&s, &v62, &v60, &v61, v12);
  v44 = v43 << 24;
  if ( (v43 & 0x80) != 0 )
  {
    sub_D0048(13, 104, 102, "crypto/asn1/tasn_dec.c", 1137);
    v48 = 965;
    goto LABEL_136;
  }
  v16 = v43 & 1;
  if ( !v16 )
    v44 = v62;
  v45 = s;
  if ( !v16 )
  {
    v45 = &s[v44];
    goto LABEL_127;
  }
  if ( v42 != -1 )
  {
    ++v42;
LABEL_127:
    v46 = v45 - v9;
    v9 = v45;
    v12 -= v46;
    goto LABEL_119;
  }
  v48 = 970;
LABEL_136:
  sub_D0048(13, 190, 58, "crypto/asn1/tasn_dec.c", v48);
LABEL_83:
  v33 = v57;
  v34 = 0;
LABEL_50:
  result = v34;
  if ( v33 )
  {
    CRYPTO_free(v65, "crypto/asn1/tasn_dec.c", 787);
    return v34;
  }
  return result;
}
