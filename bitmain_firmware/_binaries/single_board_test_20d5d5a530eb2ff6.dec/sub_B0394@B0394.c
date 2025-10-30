int __fastcall sub_B0394(int *a1, void **a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8)
{
  _DWORD *v8; // r4
  int v10; // r8
  void **v12; // r9
  int (__fastcall *v13)(int, int *, _DWORD *, _DWORD); // r10
  int v14; // r2
  int v15; // r6
  int *v17; // r3
  bool v18; // zf
  int v19; // r0
  int v20; // r2
  int v21; // r7
  int v22; // r8
  _DWORD *v23; // r7
  int i; // r6
  int v25; // r3
  int v26; // r0
  int v27; // r8
  int v28; // r0
  int v29; // r0
  int v30; // r3
  int *v31; // r6
  int v32; // r11
  int v33; // r8
  int v34; // r0
  int v35; // r2
  int v36; // r2
  _DWORD *v37; // r10
  int v38; // r1
  int v39; // r0
  int v40; // r0
  int v41; // r0
  int v42; // r9
  char *v43; // r4
  int v44; // r6
  int v45; // r0
  int *v46; // r0
  int v47; // r6
  int v48; // r0
  int v49; // [sp+24h] [bp-20h]
  int (__fastcall *v50)(int, int *, _DWORD *, _DWORD); // [sp+28h] [bp-1Ch]
  void **v51; // [sp+2Ch] [bp-18h]
  unsigned __int8 v52; // [sp+31h] [bp-13h] BYREF
  unsigned __int8 v53; // [sp+32h] [bp-12h] BYREF
  char v54; // [sp+33h] [bp-11h] BYREF
  int v55; // [sp+34h] [bp-10h] BYREF
  char *v56; // [sp+38h] [bp-Ch] BYREF
  unsigned int v57; // [sp+3Ch] [bp-8h] BYREF

  v8 = (_DWORD *)a4;
  v55 = a3;
  v10 = *(_DWORD *)(a4 + 16);
  v56 = 0;
  if ( a1 )
  {
    v12 = a2;
    v13 = (int (__fastcall *)(int, int *, _DWORD *, _DWORD))v10;
    if ( v10 )
      v13 = *(int (__fastcall **)(int, int *, _DWORD *, _DWORD))(v10 + 16);
    switch ( *(_BYTE *)a4 )
    {
      case 0:
        v17 = *(int **)(a4 + 8);
        if ( v17 )
        {
          v18 = a7 == 0;
          if ( !a7 )
            v18 = a5 == -1;
          if ( !v18 )
          {
            sub_D0048(13, 120, 170, "crypto/asn1/tasn_dec.c", 175);
            goto LABEL_8;
          }
          v15 = sub_AFAA0((int)a1, a2, a3, v17, 0, a8, 1);
        }
        else
        {
          v15 = sub_AEB20(a1, a2, a3, (int)v8, a5, a6, a7, a8);
        }
        goto LABEL_39;
      case 1:
      case 6:
        v56 = (char *)*a2;
        if ( a5 == -1 )
        {
          a6 = 0;
          a5 = 16;
        }
        v19 = sub_AE698(&v55, 0, 0, &v53, &v54, (unsigned __int8 **)&v56, a3, a5, a6, a7, a8);
        if ( !v19 )
        {
          v35 = 309;
          goto LABEL_59;
        }
        if ( v19 == -1 )
          goto LABEL_120;
        if ( v10 && (*(_DWORD *)(v10 + 4) & 4) != 0 )
        {
          v49 = 1;
          v55 = a3 - (v56 - (_BYTE *)*v12);
        }
        else
        {
          v49 = v53;
        }
        if ( !v54 )
        {
          sub_D0048(13, 120, 149, "crypto/asn1/tasn_dec.c", 321);
          goto LABEL_8;
        }
        if ( !*a1 && !sub_B1D60(a1, v8) )
        {
          v35 = 326;
          goto LABEL_59;
        }
        if ( v13 && !v13(4, a1, v8, 0) )
          goto LABEL_62;
        v20 = v8[3];
        v21 = v8[2];
        if ( v20 <= 0 )
        {
          v22 = 0;
          goto LABEL_101;
        }
        v23 = (_DWORD *)(v21 + 80);
        for ( i = 0; i < v20; ++i )
        {
          v25 = *(v23 - 20);
          __pld(v23);
          if ( (v25 & 0x300) != 0 )
          {
            v26 = sub_B27AC(a1, v23 - 20, 0);
            v27 = v26;
            if ( v26 )
            {
              v28 = sub_B27A4(a1, v26);
              sub_B17E4(v28, v27);
            }
            v20 = v8[3];
          }
          v23 += 5;
        }
        v21 = v8[2];
        v22 = 0;
        if ( v20 <= 0 )
          goto LABEL_101;
        v50 = v13;
        v37 = v8;
        v51 = v12;
        while ( 1 )
        {
          v40 = sub_B27AC(a1, v21, 1);
          v31 = (int *)v40;
          if ( !v40 )
          {
            v8 = v37;
            goto LABEL_8;
          }
          v41 = sub_B27A4(a1, v40);
          v42 = v41;
          if ( !v55 )
          {
            v8 = v37;
            v12 = v51;
            v13 = v50;
            if ( v53 )
              goto LABEL_107;
            goto LABEL_87;
          }
          v43 = v56;
          if ( v55 > 1 && !*v56 && !v56[1] )
            break;
          if ( v22 == v37[3] - 1 )
            LOBYTE(v38) = 0;
          else
            v38 = *v31 & 1;
          v39 = sub_AFAA0(v41, (void **)&v56, v55, v31, v38, a8, 1);
          if ( !v39 )
          {
            v8 = v37;
            goto LABEL_61;
          }
          if ( v39 == -1 )
            sub_B17E4(v42, v31);
          else
            v55 -= v56 - v43;
          ++v22;
          v21 += 20;
          if ( v22 >= v37[3] )
          {
            v8 = v37;
            v12 = v51;
            v13 = v50;
LABEL_101:
            if ( v53 )
            {
              if ( v55 > 1 && !*v56 && !v56[1] )
              {
                v56 += 2;
                goto LABEL_85;
              }
LABEL_107:
              sub_D0048(13, 120, 137, "crypto/asn1/tasn_dec.c", 400);
              goto LABEL_8;
            }
            goto LABEL_85;
          }
        }
        v8 = v37;
        v12 = v51;
        v13 = v50;
        v56 += 2;
        if ( !v53 )
        {
          sub_D0048(13, 120, 159, "crypto/asn1/tasn_dec.c", 360);
          goto LABEL_8;
        }
        v53 = 0;
        v55 -= 2;
LABEL_85:
        if ( !v49 && v55 )
        {
          sub_D0048(13, 120, 148, "crypto/asn1/tasn_dec.c", 405);
          goto LABEL_8;
        }
LABEL_87:
        while ( v22 < v8[3] )
        {
          ++v22;
          v46 = (int *)sub_B27AC(a1, v21, 1);
          v21 += 20;
          v31 = v46;
          if ( !v46 )
            goto LABEL_8;
          if ( (*v46 & 1) == 0 )
          {
            sub_D0048(13, 120, 121, "crypto/asn1/tasn_dec.c", 425);
            goto LABEL_61;
          }
          v45 = sub_B27A4(a1, v46);
          sub_B17E4(v45, v31);
        }
        if ( !sub_B26C4(a1, *v12, v56 - (_BYTE *)*v12, v8) )
          goto LABEL_62;
        if ( v13 )
          goto LABEL_95;
        goto LABEL_96;
      case 2:
        if ( a5 != -1 )
        {
          v14 = 233;
          goto LABEL_7;
        }
        if ( v13 && !v13(4, a1, (_DWORD *)a4, 0) )
          goto LABEL_62;
        if ( *a1 )
        {
          v29 = sub_B2598(a1, v8);
          v30 = v8[3];
          if ( v29 >= 0 && v29 < v30 )
          {
            v47 = v8[2] + 20 * v29;
            v48 = sub_B27A4(a1, v47);
            sub_B17E4(v48, v47);
            sub_B25A0(a1, -1, v8);
            v30 = v8[3];
          }
        }
        else
        {
          if ( !sub_B1D60(a1, v8) )
          {
            v35 = 249;
            goto LABEL_59;
          }
          v30 = v8[3];
        }
        v31 = (int *)v8[2];
        v32 = 0;
        v56 = (char *)*v12;
        if ( v30 <= 0 )
          goto LABEL_53;
        break;
      case 4:
        v15 = (*(int (__fastcall **)(int *, void **, int, int, int, int, _DWORD, int))(v10 + 16))(
                a1,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8);
        goto LABEL_39;
      case 5:
        if ( a5 != -1 )
        {
          v14 = 190;
LABEL_7:
          sub_D0048(13, 120, 230, "crypto/asn1/tasn_dec.c", v14);
          goto LABEL_8;
        }
        v56 = (char *)*a2;
        if ( !sub_AE820(0, &v57, &v52, 0, 0, (unsigned __int8 **)&v56, a3, 1, a8) )
        {
          v35 = 199;
LABEL_59:
          sub_D0048(13, 120, 58, "crypto/asn1/tasn_dec.c", v35);
          goto LABEL_8;
        }
        v44 = v52;
        if ( v52 )
        {
          if ( a7 )
            goto LABEL_120;
          sub_D0048(13, 120, 139, "crypto/asn1/tasn_dec.c", 208);
        }
        else
        {
          if ( (sub_AF1C4(v57) & v8[1]) != 0 )
          {
            v15 = sub_AEB20(a1, v12, v55, (int)v8, v57, v44, v44, a8);
LABEL_39:
            if ( v15 > 0 )
              return v15;
            goto LABEL_9;
          }
          if ( a7 )
            goto LABEL_120;
          sub_D0048(13, 120, 140, "crypto/asn1/tasn_dec.c", 217);
        }
        goto LABEL_8;
      default:
        v15 = 0;
        goto LABEL_9;
    }
    while ( 1 )
    {
      v33 = sub_B27A4(a1, v31);
      v34 = sub_AFAA0(v33, (void **)&v56, v55, v31, 1u, a8, 1);
      if ( v34 != -1 )
        break;
      v30 = v8[3];
      ++v32;
      v31 += 5;
      if ( v32 >= v30 )
        goto LABEL_53;
    }
    if ( v34 <= 0 )
    {
      sub_B17E4(v33, v31);
      sub_D0048(13, 120, 58, "crypto/asn1/tasn_dec.c", 272);
      if ( !v31 )
        goto LABEL_8;
LABEL_61:
      v36 = v31[3];
      v15 = 0;
      sub_D1240(4, "Field=", v36);
      goto LABEL_9;
    }
    v30 = v8[3];
LABEL_53:
    if ( v32 == v30 )
    {
      if ( !a7 )
      {
        sub_D0048(13, 120, 143, "crypto/asn1/tasn_dec.c", 284);
        goto LABEL_8;
      }
      sub_B17DC(a1, v8);
LABEL_120:
      v15 = -1;
    }
    else
    {
      sub_B25A0(a1, v32, v8);
      if ( !v13 )
        goto LABEL_96;
LABEL_95:
      if ( v13(5, a1, v8, 0) )
      {
LABEL_96:
        v15 = 1;
        *v12 = v56;
        return v15;
      }
LABEL_62:
      sub_D0048(13, 120, 100, "crypto/asn1/tasn_dec.c", 441);
LABEL_8:
      v15 = 0;
      sub_D1240(2, "Type=", v8[6]);
    }
  }
  else
  {
    v15 = 0;
  }
LABEL_9:
  sub_B17DC(a1, v8);
  return v15;
}
