int __fastcall sub_AF1DC(int result, void **a2, int a3, _DWORD *a4, unsigned __int8 a5, int a6, int a7)
{
  int *v7; // r8
  int v9; // r3
  char *v10; // r2
  int v11; // r1
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  int v16; // r4
  int v17; // r0
  int v18; // r4
  unsigned int v19; // r0
  int v20; // r1
  int v21; // r4
  _DWORD *v22; // r11
  unsigned __int8 *v23; // r9
  int v24; // r6
  int v25; // r5
  bool v26; // zf
  int v27; // r3
  int v28; // r0
  char *v29; // r3
  int v30; // r4
  _DWORD *v31; // r10
  int v32; // r11
  int v33; // r0
  unsigned __int8 *v34; // r2
  int v35; // r0
  int v36; // r0
  int v37; // r3
  _DWORD *v38; // r8
  int v39; // r10
  int v40; // r5
  int v41; // r0
  int v42; // r0
  int v43; // r7
  int v44; // r2
  int v45; // r4
  int v46; // r10
  _DWORD *v47; // r4
  int i; // r8
  int v49; // r3
  int v50; // r0
  int v51; // r10
  int v52; // r0
  int (__fastcall *v53)(int, int *, int, _DWORD); // r3
  int v54; // r2
  int v55; // r0
  _DWORD *v56; // r5
  int v57; // r2
  int v58; // r0
  int v59; // r0
  int v60; // r0
  int v61; // r8
  unsigned __int8 *v62; // r6
  int v63; // r0
  _DWORD *v64; // r0
  int v65; // r4
  int v66; // r0
  int v67; // r0
  int (__fastcall *v68)(int, int *, int, _DWORD); // [sp+24h] [bp-50h]
  int *v69; // [sp+28h] [bp-4Ch]
  _DWORD *v71; // [sp+44h] [bp-30h]
  int v72; // [sp+4Ch] [bp-28h] BYREF
  char v73; // [sp+54h] [bp-20h] BYREF
  unsigned __int8 v74; // [sp+55h] [bp-1Fh] BYREF
  unsigned __int8 v75; // [sp+56h] [bp-1Eh] BYREF
  char v76; // [sp+57h] [bp-1Dh] BYREF
  int v77; // [sp+58h] [bp-1Ch] BYREF
  char *v78; // [sp+5Ch] [bp-18h] BYREF
  int v79; // [sp+60h] [bp-14h] BYREF
  int v80; // [sp+64h] [bp-10h] BYREF
  unsigned __int8 *v81; // [sp+68h] [bp-Ch] BYREF
  unsigned int v82; // [sp+6Ch] [bp-8h] BYREF

  v7 = (int *)result;
  v72 = a3;
  if ( !result )
    return result;
  v9 = *a4;
  v10 = (char *)*a2;
  v11 = v9 & 0xC0;
  if ( (v9 & 0x1000) != 0 )
  {
    v77 = result;
    v7 = &v77;
  }
  v78 = v10;
  if ( (v9 & 6) == 0 )
  {
    v26 = (v9 & 8) == 0;
    v27 = a4[4];
    if ( v26 )
    {
      v28 = sub_AFCF4(v7, &v78, v72, v27, -1, 0, a5, a6, a7);
      if ( !v28 )
      {
        v54 = 646;
LABEL_94:
        sub_D0048(13, 131, 58, "crypto/asn1/tasn_dec.c", v54);
        return 0;
      }
    }
    else
    {
      v28 = sub_AFCF4(v7, &v78, v72, v27, a4[1], v11, a5, a6, a7);
      if ( !v28 )
      {
        v54 = 637;
        goto LABEL_94;
      }
    }
    if ( v28 != -1 )
      goto LABEL_26;
    return -1;
  }
  if ( (v9 & 8) != 0 )
  {
    v12 = a4[1];
  }
  else
  {
    v11 = 0;
    if ( (v9 & 2) != 0 )
      v12 = 17;
    else
      v12 = 16;
  }
  v13 = sub_AE698(&v72, 0, 0, &v73, 0, (unsigned __int8 **)&v78, v72, v12, v11, a5, a6);
  v16 = v13;
  if ( !v13 )
  {
    v54 = 572;
    goto LABEL_94;
  }
  v17 = v13 + 1;
  if ( !v17 )
    return v16;
  v18 = *v7;
  if ( *v7 )
  {
    while ( sub_10C010(v18, v14, v15) > 0 )
    {
      v19 = sub_10BD80(v18);
      v20 = a4[4];
      v82 = v19;
      sub_B17DC(&v82, v20);
    }
    v67 = *v7;
  }
  else
  {
    v67 = sub_10BFCC(v17);
    *v7 = v67;
  }
  if ( !v67 )
  {
    sub_D0048(13, 131, 65, "crypto/asn1/tasn_dec.c", 591);
    return 0;
  }
  v21 = v72;
  if ( v72 <= 0 )
    goto LABEL_37;
  v22 = a4;
  v69 = v7;
  while ( 2 )
  {
    v23 = (unsigned __int8 *)v78;
    if ( v21 != 1 && !*v78 && !v78[1] )
    {
      v29 = v78 + 2;
      v78 += 2;
      if ( v73 )
        goto LABEL_27;
      sub_D0048(13, 131, 159, "crypto/asn1/tasn_dec.c", 603);
      return 0;
    }
    v24 = v22[4];
    v79 = 0;
    v80 = v21;
    v25 = *(_DWORD *)(v24 + 16);
    v81 = 0;
    if ( v25 )
      v68 = *(int (__fastcall **)(int, int *, int, _DWORD))(v25 + 16);
    else
      v68 = 0;
    if ( a7 + 1 > 30 )
    {
      v31 = v22;
      v32 = v24;
      sub_D0048(13, 120, 201, "crypto/asn1/tasn_dec.c", 160);
      goto LABEL_73;
    }
    switch ( *(_BYTE *)v24 )
    {
      case 0:
        if ( *(_DWORD *)(v24 + 8) )
          v33 = sub_AFAA0(&v79, &v78);
        else
          v33 = sub_AEB20(&v79, (void **)&v78, v21, v24, -1, 0, 0, a6);
        goto LABEL_33;
      case 1:
      case 6:
        v81 = (unsigned __int8 *)v78;
        v42 = sub_AE698(&v80, 0, 0, &v75, &v76, &v81, v21, 16, 0, 0, a6);
        if ( !v42 )
        {
          v31 = v22;
          v57 = 309;
          v32 = v24;
          goto LABEL_99;
        }
        if ( v42 == -1 )
          goto LABEL_34;
        if ( v25 && (*(_DWORD *)(v25 + 4) & 4) != 0 )
        {
          v43 = 1;
          v80 = v21 - (v81 - (unsigned __int8 *)v78);
        }
        else
        {
          v43 = v75;
        }
        if ( !v76 )
        {
          v31 = v22;
          v32 = v24;
          sub_D0048(13, 120, 149, "crypto/asn1/tasn_dec.c", 321);
          goto LABEL_73;
        }
        if ( !v79 && !sub_B1D60(&v79, v24) )
        {
          v31 = v22;
          v57 = 326;
          v32 = v24;
LABEL_99:
          sub_D0048(13, 120, 58, "crypto/asn1/tasn_dec.c", v57);
LABEL_73:
          sub_D1240(2, "Type=", *(_DWORD *)(v32 + 24));
LABEL_74:
          sub_D0048(13, 131, 58, "crypto/asn1/tasn_dec.c", 615);
          goto LABEL_75;
        }
        if ( v68 && !v68(4, &v79, v24, 0) )
          goto LABEL_72;
        v44 = *(_DWORD *)(v24 + 12);
        v45 = *(_DWORD *)(v24 + 8);
        if ( v44 <= 0 )
        {
          v46 = 0;
          goto LABEL_133;
        }
        v47 = (_DWORD *)(v45 + 80);
        for ( i = 0; i < v44; ++i )
        {
          v49 = *(v47 - 20);
          __pld(v47);
          if ( (v49 & 0x300) != 0 )
          {
            v50 = sub_B27AC(&v79, v47 - 20, 0);
            v51 = v50;
            if ( v50 )
            {
              v52 = sub_B27A4(&v79, v50);
              sub_B17E4(v52, v51);
            }
            v44 = *(_DWORD *)(v24 + 12);
          }
          v47 += 5;
        }
        v45 = *(_DWORD *)(v24 + 8);
        v46 = 0;
        if ( v44 <= 0 )
        {
LABEL_133:
          if ( !v75 )
            goto LABEL_118;
          if ( v80 > 1 && !*v81 && !v81[1] )
          {
            v81 += 2;
            goto LABEL_118;
          }
          goto LABEL_139;
        }
        v71 = v22;
        v32 = v24;
        while ( 1 )
        {
          v59 = sub_B27AC(&v79, v45, 1);
          v56 = (_DWORD *)v59;
          if ( !v59 )
          {
            v31 = v71;
            goto LABEL_73;
          }
          v60 = sub_B27A4(&v79, v59);
          v61 = v60;
          if ( !v80 )
          {
            v24 = v32;
            v22 = v71;
            if ( !v75 )
              goto LABEL_120;
LABEL_139:
            v31 = v22;
            v32 = v24;
            sub_D0048(13, 120, 137, "crypto/asn1/tasn_dec.c", 400);
            goto LABEL_73;
          }
          v62 = v81;
          if ( v80 > 1 && !*v81 && !v81[1] )
            break;
          v58 = sub_AFAA0(v60, &v81);
          if ( !v58 )
          {
            v31 = v71;
LABEL_89:
            sub_D1240(4, "Field=", v56[3]);
            goto LABEL_74;
          }
          if ( v58 == -1 )
            sub_B17E4(v61, v56);
          else
            v80 -= v81 - v62;
          ++v46;
          v45 += 20;
          if ( v46 >= *(_DWORD *)(v32 + 12) )
          {
            v24 = v32;
            v22 = v71;
            goto LABEL_133;
          }
        }
        v24 = v32;
        v22 = v71;
        v81 += 2;
        if ( !v75 )
        {
          v31 = v71;
          v32 = v24;
          sub_D0048(13, 120, 159, "crypto/asn1/tasn_dec.c", 360);
          goto LABEL_73;
        }
        v75 = 0;
        v80 -= 2;
LABEL_118:
        if ( !v43 && v80 )
        {
          v31 = v22;
          v32 = v24;
          sub_D0048(13, 120, 148, "crypto/asn1/tasn_dec.c", 405);
          goto LABEL_73;
        }
LABEL_120:
        if ( *(_DWORD *)(v24 + 12) > v46 )
        {
          while ( 1 )
          {
            ++v46;
            v64 = (_DWORD *)sub_B27AC(&v79, v45, 1);
            v45 += 20;
            v56 = v64;
            if ( !v64 )
            {
              v31 = v22;
              v32 = v24;
              goto LABEL_73;
            }
            if ( (*v64 & 1) == 0 )
              break;
            v63 = sub_B27A4(&v79, v64);
            sub_B17E4(v63, v56);
            if ( v46 >= *(_DWORD *)(v24 + 12) )
              goto LABEL_129;
          }
          v31 = v22;
          sub_D0048(13, 120, 121, "crypto/asn1/tasn_dec.c", 425);
          goto LABEL_89;
        }
LABEL_129:
        if ( !sub_B26C4(&v79, v78, v81 - (unsigned __int8 *)v78, v24) )
          goto LABEL_72;
        v53 = v68;
        if ( v68 )
          goto LABEL_71;
LABEL_131:
        v34 = v81;
        v78 = (char *)v81;
LABEL_35:
        v35 = *v69;
        v72 -= v34 - v23;
        if ( !sub_10BD3C(v35, v79) )
        {
          v31 = v22;
          sub_D0048(13, 131, 65, "crypto/asn1/tasn_dec.c", 622);
LABEL_75:
          sub_B17C4(v79, v31[4]);
          return 0;
        }
        v21 = v72;
        if ( v72 > 0 )
          continue;
LABEL_37:
        if ( v73 )
        {
          sub_D0048(13, 131, 137, "crypto/asn1/tasn_dec.c", 628);
          return 0;
        }
LABEL_26:
        v29 = v78;
LABEL_27:
        v16 = 1;
        *a2 = v29;
        return v16;
      case 2:
        if ( !v68 )
          goto LABEL_96;
        if ( !v68(4, &v79, v24, 0) )
          goto LABEL_72;
        if ( v79 )
        {
          v36 = sub_B2598(&v79, v24);
          v37 = *(_DWORD *)(v24 + 12);
          if ( v36 >= 0 && v36 < v37 )
          {
            v65 = *(_DWORD *)(v24 + 8) + 20 * v36;
            v66 = sub_B27A4(&v79, v65);
            sub_B17E4(v66, v65);
            sub_B25A0(&v79, -1, v24);
            v37 = *(_DWORD *)(v24 + 12);
          }
        }
        else
        {
LABEL_96:
          if ( !sub_B1D60(&v79, v24) )
          {
            v31 = v22;
            v57 = 249;
            v32 = v24;
            goto LABEL_99;
          }
          v37 = *(_DWORD *)(v24 + 12);
        }
        v38 = *(_DWORD **)(v24 + 8);
        v39 = 0;
        v81 = (unsigned __int8 *)v78;
        if ( v37 <= 0 )
          goto LABEL_49;
        while ( 1 )
        {
          v40 = sub_B27A4(&v79, v38);
          v41 = sub_AFAA0(v40, &v81);
          if ( v41 != -1 )
            break;
          v37 = *(_DWORD *)(v24 + 12);
          ++v39;
          v38 += 5;
          if ( v39 >= v37 )
            goto LABEL_49;
        }
        if ( v41 > 0 )
        {
          v37 = *(_DWORD *)(v24 + 12);
LABEL_49:
          if ( v39 == v37 )
          {
            v31 = v22;
            v32 = v24;
            sub_D0048(13, 120, 143, "crypto/asn1/tasn_dec.c", 284);
            goto LABEL_73;
          }
          sub_B25A0(&v79, v39, v24);
          v53 = v68;
          if ( !v68 )
            goto LABEL_131;
LABEL_71:
          if ( v53(5, &v79, v24, 0) )
            goto LABEL_131;
LABEL_72:
          v31 = v22;
          v32 = v24;
          sub_D0048(13, 120, 100, "crypto/asn1/tasn_dec.c", 441);
          goto LABEL_73;
        }
        v31 = v22;
        v32 = v24;
        v55 = v40;
        v56 = v38;
        sub_B17E4(v55, v38);
        sub_D0048(13, 120, 58, "crypto/asn1/tasn_dec.c", 272);
        if ( !v38 )
          goto LABEL_73;
        goto LABEL_89;
      case 4:
        v33 = (*(int (__fastcall **)(int *, char **, int, int, int, _DWORD, _DWORD, int))(v25 + 16))(
                &v79,
                &v78,
                v21,
                v24,
                -1,
                0,
                0,
                a6);
        goto LABEL_33;
      case 5:
        v81 = (unsigned __int8 *)v78;
        if ( sub_AE820(0, &v82, &v74, 0, 0, &v81, v21, 1, a6) )
        {
          v30 = v74;
          if ( v74 )
          {
            v31 = v22;
            v32 = v24;
            sub_D0048(13, 120, 139, "crypto/asn1/tasn_dec.c", 208);
          }
          else
          {
            if ( (sub_AF1C4(v82) & *(_DWORD *)(v24 + 4)) != 0 )
            {
              v33 = sub_AEB20(&v79, (void **)&v78, v80, v24, v82, v30, v30, a6);
LABEL_33:
              if ( v33 )
              {
LABEL_34:
                v34 = (unsigned __int8 *)v78;
                goto LABEL_35;
              }
LABEL_84:
              v31 = v22;
              goto LABEL_74;
            }
            v31 = v22;
            v32 = v24;
            sub_D0048(13, 120, 140, "crypto/asn1/tasn_dec.c", 217);
          }
          goto LABEL_73;
        }
        v31 = v22;
        v57 = 199;
        v32 = v24;
        goto LABEL_99;
      default:
        goto LABEL_84;
    }
  }
}
