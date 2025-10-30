int __fastcall sub_AFCF4(int result, void **a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8, int a9)
{
  int v9; // r7
  int v12; // r2
  int *v13; // r3
  bool v14; // zf
  int v15; // r9
  int v16; // r0
  int v17; // r2
  int v18; // r7
  int v19; // r10
  _DWORD *v20; // r7
  int i; // r8
  int v22; // r3
  int v23; // r0
  int v24; // r9
  int v25; // r0
  int v26; // r0
  int v27; // r3
  int *v28; // r9
  int v29; // r7
  int v30; // r0
  int v31; // r2
  int v32; // r1
  int v33; // r0
  int v34; // r0
  int *v35; // r6
  int v36; // r0
  int v37; // r8
  char *v38; // r4
  int v39; // r6
  int *v40; // r0
  int v41; // r0
  int *v42; // r0
  int *v43; // r6
  int (__fastcall *v44)(int, int *, int, _DWORD); // r3
  int v45; // r7
  int v46; // r0
  int *v47; // [sp+20h] [bp-2Ch]
  int (__fastcall *v48)(int, int *, int, _DWORD); // [sp+24h] [bp-28h]
  int v49; // [sp+2Ch] [bp-20h]
  int v50; // [sp+2Ch] [bp-20h]
  int v51; // [sp+34h] [bp-18h] BYREF
  unsigned __int8 v52; // [sp+3Dh] [bp-Fh] BYREF
  unsigned __int8 v53; // [sp+3Eh] [bp-Eh] BYREF
  char v54; // [sp+3Fh] [bp-Dh] BYREF
  char *v55; // [sp+40h] [bp-Ch] BYREF
  unsigned int v56; // [sp+44h] [bp-8h] BYREF

  v9 = *(_DWORD *)(a4 + 16);
  v51 = a3;
  v55 = 0;
  if ( !result )
    return result;
  if ( v9 )
    v48 = *(int (__fastcall **)(int, int *, int, _DWORD))(v9 + 16);
  else
    v48 = 0;
  v47 = (int *)result;
  if ( a9 + 1 > 30 )
  {
    sub_D0048(13, 120, 201, "crypto/asn1/tasn_dec.c", 160);
    goto LABEL_7;
  }
  switch ( *(_BYTE *)a4 )
  {
    case 0:
      v13 = *(int **)(a4 + 8);
      if ( !v13 )
        return sub_AEB20((int *)result, a2, v51, a4, a5, a6, a7, a8);
      v14 = a7 == 0;
      if ( !a7 )
        v14 = a5 == -1;
      if ( !v14 )
      {
        sub_D0048(13, 120, 170, "crypto/asn1/tasn_dec.c", 175);
        goto LABEL_7;
      }
      return sub_AFAA0(result, a2, v51, v13, 0, a8, a9 + 1);
    case 1:
    case 6:
      v15 = v51;
      v55 = (char *)*a2;
      if ( a5 == -1 )
      {
        a6 = 0;
        a5 = 16;
      }
      v16 = sub_AE698(&v51, 0, 0, &v53, &v54, (unsigned __int8 **)&v55, v51, a5, a6, a7, a8);
      if ( !v16 )
      {
        v31 = 309;
        goto LABEL_58;
      }
      if ( v16 == -1 )
        return -1;
      if ( v9 && (*(_DWORD *)(v9 + 4) & 4) != 0 )
      {
        v49 = 1;
        v51 = v15 - (v55 - (_BYTE *)*a2);
      }
      else
      {
        v49 = v53;
      }
      if ( !v54 )
      {
        sub_D0048(13, 120, 149, "crypto/asn1/tasn_dec.c", 321);
        goto LABEL_7;
      }
      if ( !*v47 && !sub_B1D60(v47, a4) )
      {
        v31 = 326;
LABEL_58:
        sub_D0048(13, 120, 58, "crypto/asn1/tasn_dec.c", v31);
        goto LABEL_7;
      }
      if ( v48 && !v48(4, v47, a4, 0) )
        goto LABEL_56;
      v17 = *(_DWORD *)(a4 + 12);
      v18 = *(_DWORD *)(a4 + 8);
      if ( v17 > 0 )
      {
        v20 = (_DWORD *)(v18 + 80);
        for ( i = 0; i < v17; ++i )
        {
          v22 = *(v20 - 20);
          __pld(v20);
          if ( (v22 & 0x300) != 0 )
          {
            v23 = sub_B27AC(v47, v20 - 20, 0);
            v24 = v23;
            if ( v23 )
            {
              v25 = sub_B27A4(v47, v23);
              sub_B17E4(v25, v24);
            }
            v17 = *(_DWORD *)(a4 + 12);
          }
          v20 += 5;
        }
        v18 = *(_DWORD *)(a4 + 8);
        v19 = 0;
        if ( v17 > 0 )
        {
          while ( 1 )
          {
            v34 = sub_B27AC(v47, v18, 1);
            v35 = (int *)v34;
            if ( !v34 )
              goto LABEL_7;
            v36 = sub_B27A4(v47, v34);
            v37 = v36;
            if ( !v51 )
              break;
            v38 = v55;
            if ( v51 > 1 && !*v55 && !v55[1] )
            {
              v55 += 2;
              if ( v53 )
              {
                v53 = 0;
                v51 -= 2;
LABEL_80:
                if ( v49 || !v51 )
                {
LABEL_82:
                  if ( *(_DWORD *)(a4 + 12) > v19 )
                  {
                    do
                    {
                      ++v19;
                      v42 = (int *)sub_B27AC(v47, v18, 1);
                      v18 += 20;
                      v43 = v42;
                      if ( !v42 )
                        goto LABEL_7;
                      if ( (*v42 & 1) == 0 )
                      {
                        v28 = v42;
                        sub_D0048(13, 120, 121, "crypto/asn1/tasn_dec.c", 425);
                        goto LABEL_89;
                      }
                      v41 = sub_B27A4(v47, v42);
                      sub_B17E4(v41, v43);
                    }
                    while ( *(_DWORD *)(a4 + 12) > v19 );
                    v40 = v47;
                  }
                  else
                  {
                    v40 = v47;
                  }
                  if ( sub_B26C4(v40, *a2, v55 - (_BYTE *)*a2, a4) )
                  {
                    v44 = v48;
                    if ( !v48 )
                      goto LABEL_93;
                    goto LABEL_92;
                  }
                  goto LABEL_56;
                }
                sub_D0048(13, 120, 148, "crypto/asn1/tasn_dec.c", 405);
              }
              else
              {
                sub_D0048(13, 120, 159, "crypto/asn1/tasn_dec.c", 360);
              }
LABEL_7:
              sub_D1240(2, "Type=", *(_DWORD *)(a4 + 24));
              return 0;
            }
            if ( *(_DWORD *)(a4 + 12) - 1 == v19 )
              LOBYTE(v32) = 0;
            else
              v32 = *v35 & 1;
            v33 = sub_AFAA0(v36, (void **)&v55, v51, v35, v32, a8, a9 + 1);
            if ( !v33 )
            {
              v28 = v35;
LABEL_89:
              sub_D1240(4, "Field=", v28[3]);
              return 0;
            }
            if ( v33 == -1 )
              sub_B17E4(v37, v35);
            else
              v51 -= v55 - v38;
            ++v19;
            v18 += 20;
            if ( *(_DWORD *)(a4 + 12) <= v19 )
              goto LABEL_97;
          }
          if ( !v53 )
            goto LABEL_82;
LABEL_103:
          sub_D0048(13, 120, 137, "crypto/asn1/tasn_dec.c", 400);
          goto LABEL_7;
        }
      }
      else
      {
        v19 = 0;
      }
LABEL_97:
      if ( !v53 )
        goto LABEL_80;
      if ( v51 > 1 && !*v55 && !v55[1] )
      {
        v55 += 2;
        goto LABEL_80;
      }
      goto LABEL_103;
    case 2:
      if ( a5 != -1 )
      {
        v12 = 233;
        goto LABEL_12;
      }
      if ( v48 && !v48(4, (int *)result, a4, 0) )
        goto LABEL_56;
      if ( *v47 )
      {
        v26 = sub_B2598(v47, a4);
        v27 = *(_DWORD *)(a4 + 12);
        if ( v26 >= 0 && v26 < v27 )
        {
          v45 = *(_DWORD *)(a4 + 8) + 20 * v26;
          v46 = sub_B27A4(v47, v45);
          sub_B17E4(v46, v45);
          sub_B25A0(v47, -1, a4);
          v27 = *(_DWORD *)(a4 + 12);
        }
      }
      else
      {
        if ( !sub_B1D60(v47, a4) )
        {
          v31 = 249;
          goto LABEL_58;
        }
        v27 = *(_DWORD *)(a4 + 12);
      }
      v28 = *(int **)(a4 + 8);
      v29 = 0;
      v55 = (char *)*a2;
      if ( v27 <= 0 )
        goto LABEL_52;
      while ( 1 )
      {
        v50 = sub_B27A4(v47, v28);
        v30 = sub_AFAA0(v50, (void **)&v55, v51, v28, 1u, a8, a9 + 1);
        if ( v30 != -1 )
          break;
        v27 = *(_DWORD *)(a4 + 12);
        ++v29;
        v28 += 5;
        if ( v27 <= v29 )
          goto LABEL_52;
      }
      if ( v30 <= 0 )
      {
        sub_B17E4(v50, v28);
        sub_D0048(13, 120, 58, "crypto/asn1/tasn_dec.c", 272);
        if ( v28 )
          goto LABEL_89;
        goto LABEL_7;
      }
      v27 = *(_DWORD *)(a4 + 12);
LABEL_52:
      if ( v29 != v27 )
      {
        sub_B25A0(v47, v29, a4);
        v44 = v48;
        if ( !v48 )
          goto LABEL_93;
LABEL_92:
        if ( v44(5, v47, a4, 0) )
        {
LABEL_93:
          *a2 = v55;
          return 1;
        }
LABEL_56:
        sub_D0048(13, 120, 100, "crypto/asn1/tasn_dec.c", 441);
        goto LABEL_7;
      }
      if ( !a7 )
      {
        sub_D0048(13, 120, 143, "crypto/asn1/tasn_dec.c", 284);
        goto LABEL_7;
      }
      sub_B17DC(v47, a4);
      return -1;
    case 4:
      return (*(int (__fastcall **)(int, void **, int, int, int, int, _DWORD, int))(v9 + 16))(
               result,
               a2,
               v51,
               a4,
               a5,
               a6,
               a7,
               a8);
    case 5:
      if ( a5 == -1 )
      {
        v55 = (char *)*a2;
        if ( !sub_AE820(0, &v56, &v52, 0, 0, (unsigned __int8 **)&v55, v51, 1, a8) )
        {
          v31 = 199;
          goto LABEL_58;
        }
        v39 = v52;
        if ( v52 )
        {
          if ( a7 )
            return -1;
          sub_D0048(13, 120, 139, "crypto/asn1/tasn_dec.c", 208);
        }
        else
        {
          if ( (sub_AF1C4(v56) & *(_DWORD *)(a4 + 4)) != 0 )
            return sub_AEB20(v47, a2, v51, a4, v56, v39, v39, a8);
          if ( a7 )
            return -1;
          sub_D0048(13, 120, 140, "crypto/asn1/tasn_dec.c", 217);
        }
      }
      else
      {
        v12 = 190;
LABEL_12:
        sub_D0048(13, 120, 230, "crypto/asn1/tasn_dec.c", v12);
      }
      goto LABEL_7;
    default:
      return 0;
  }
}
