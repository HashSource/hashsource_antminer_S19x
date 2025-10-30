int __fastcall sub_32F7D8(int a1, int a2, int a3, int *a4)
{
  char *v4; // r6
  int v6; // r10
  int v8; // r11
  void *v10; // r7
  void *v11; // r10
  int v12; // r5
  int result; // r0
  int v14; // r9
  int v15; // r0
  int v16; // r5
  char v17; // r3
  int v18; // r3
  int v19; // r6
  int v20; // r0
  int v21; // r5
  __int16 v22; // r3
  char *v23; // r1
  int v24; // r2
  int v25; // r12
  int v26; // r9
  int v27; // r0
  int v28; // r1
  int v29; // r2
  int v30; // r9
  size_t v31; // r11
  _BYTE *v32; // r9
  int v33; // r2
  int v34; // r3
  __int16 v35; // r3
  int v36; // r1
  int v37; // r11
  int v38; // r2
  int v39; // r9
  int v40; // r3
  int v41; // r3
  unsigned __int16 *v42; // r5
  char v43; // r12
  int v44; // r1
  char v45; // r0
  void *v46; // r0
  int v47; // r2
  void *v48; // r0
  int v49; // r6
  int v50; // r0
  int v51; // r2
  int v52; // [sp+8h] [bp-ACh]
  int *v53; // [sp+8h] [bp-ACh]
  unsigned __int16 v54; // [sp+Ch] [bp-A8h]
  int v55; // [sp+10h] [bp-A4h]
  int v56; // [sp+14h] [bp-A0h]
  int v57; // [sp+20h] [bp-94h] BYREF
  int v58; // [sp+24h] [bp-90h] BYREF
  _DWORD v59[2]; // [sp+28h] [bp-8Ch] BYREF
  char v60; // [sp+30h] [bp-84h]
  __int16 v61; // [sp+32h] [bp-82h]
  int v62; // [sp+34h] [bp-80h] BYREF
  char *v63; // [sp+38h] [bp-7Ch]
  int v64; // [sp+3Ch] [bp-78h]
  int v65; // [sp+40h] [bp-74h]
  int v66; // [sp+44h] [bp-70h]
  int v67; // [sp+48h] [bp-6Ch]
  int v68; // [sp+4Ch] [bp-68h]
  _BYTE v69[10]; // [sp+50h] [bp-64h] BYREF
  __int16 v70; // [sp+5Ah] [bp-5Ah]
  char v71; // [sp+80h] [bp-34h] BYREF

  v4 = (char *)a2;
  v6 = *(unsigned __int8 *)(a2 + 8);
  v8 = *(unsigned __int8 *)(a3 + 8);
  v52 = *a4;
  v57 = 0;
  v58 = 0;
  if ( ((v6 | v8) & 0x70) != 0 )
  {
    if ( (((unsigned __int8)v6 | (unsigned __int8)v8) & 0x30) != 0 )
    {
      v10 = 0;
      v11 = 0;
      sub_32AC0C(a1, a2, a3, a4, &v58);
      v12 = v58;
      goto LABEL_4;
    }
    v14 = (char)v6;
    if ( (v8 & 0x40) != 0 )
    {
      if ( (v6 & 0x80u) == 0 || !*(_WORD *)(a2 + 10) && *(_DWORD *)a2 == 1 && (v6 & 0x70) == 0 )
      {
        v10 = 0;
        v60 = 0;
        v59[1] = 0;
        v59[0] = 1;
        v61 = 1;
        sub_32B308((int)v69, a2, (int)v59, (int)a4);
        v18 = v69[8];
        *(_BYTE *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 4) = 0;
        *(_DWORD *)a1 = 1;
        *(_WORD *)(a1 + 10) = 0;
        if ( v18 < 0 )
        {
          v12 = v58;
          if ( (v8 & 0x80) != 0 )
            goto LABEL_98;
        }
        else
        {
          if ( !v70 )
          {
            v19 = *a4;
            *(_WORD *)(a1 + 10) = 1;
            if ( v19 == 1 )
              v20 = 1;
            else
              v20 = sub_32845C((char *)(a1 + 10), 1, v19 - 1);
            v21 = v58;
            v11 = 0;
            *(_DWORD *)a1 = v20;
            *(_DWORD *)(a1 + 4) = 1 - v19;
            v12 = v21 | 0x820;
            v58 = v12;
            goto LABEL_29;
          }
          v12 = v58;
          if ( (v8 & 0x80) == 0 )
          {
LABEL_98:
            v11 = 0;
            *(_BYTE *)(a1 + 8) = 64;
            goto LABEL_4;
          }
        }
        v11 = 0;
        goto LABEL_4;
      }
LABEL_36:
      v58 = 128;
      sub_327DE4(a1, 128, (int)a4);
      return a1;
    }
  }
  else
  {
    v14 = (char)v6;
  }
  v15 = sub_327B04(a3);
  v16 = v15;
  if ( v15 == 0x80000000 )
  {
    if ( (v6 & 0x40) != 0 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_WORD *)(a1 + 10) = 0;
      *(_DWORD *)a1 = 1;
      if ( v4[8] < 0 )
        goto LABEL_36;
      LOBYTE(v54) = 0;
LABEL_15:
      result = a1;
      if ( (v8 & 0x80) == 0 )
        LOBYTE(v54) = v54 | 0x40;
      *(_BYTE *)(a1 + 8) = v54;
      return result;
    }
    if ( *((_WORD *)v4 + 5) )
    {
      LOBYTE(v54) = v6 & 0x40;
      v56 = v6 & 0x40;
      goto LABEL_35;
    }
    v22 = *((_WORD *)v4 + 5);
    if ( *(_DWORD *)v4 != 1 )
    {
      v54 = *((_WORD *)v4 + 5);
      v56 = v54;
      goto LABEL_35;
    }
    v56 = *((unsigned __int16 *)v4 + 5);
    v54 = *((_WORD *)v4 + 5);
    v55 = v56;
  }
  else
  {
    if ( (v15 & ((unsigned int)v14 >> 31)) != 0 )
      v17 = 0x80;
    else
      v17 = 0;
    LOBYTE(v54) = v17;
    if ( (v6 & 0x40) != 0 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_QWORD *)a1 = 1;
      if ( !v15 )
      {
        *(_WORD *)(a1 + 10) = 1;
        return a1;
      }
      *(_WORD *)(a1 + 10) = 0;
      goto LABEL_15;
    }
    LOBYTE(v22) = (unsigned int)(v15 + 2147483646) > 1;
    v55 = (unsigned __int8)v22;
    if ( *((_WORD *)v4 + 5) || *(_DWORD *)v4 != 1 )
    {
      v56 = 1;
      goto LABEL_41;
    }
    v56 = 1;
  }
  if ( (v6 & 0x70) == 0 )
  {
    if ( v15 )
    {
      if ( (v8 & 0x80) != 0 )
        LOBYTE(v22) = v54;
      *(_DWORD *)a1 = 1;
      if ( (v8 & 0x80) != 0 )
        LOBYTE(v54) = v22 | 0x40;
      *(_DWORD *)(a1 + 4) = 0;
      *(_WORD *)(a1 + 10) = 0;
      *(_BYTE *)(a1 + 8) = v54;
      return a1;
    }
    goto LABEL_36;
  }
LABEL_41:
  if ( v55 )
  {
    if ( !v15 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)a1 = 1;
      *(_DWORD *)(a1 + 4) = 0;
      *(_WORD *)(a1 + 10) = 1;
      return a1;
    }
    v23 = (char *)a4[1];
    v24 = a4[2];
    v25 = *(_DWORD *)a3;
    v26 = *(_DWORD *)(a3 + 4);
    v62 = *a4;
    v63 = v23;
    v64 = v24;
    v65 = 3;
    v27 = a4[4];
    v28 = a4[5];
    v29 = a4[6];
    v30 = v25 + v26 + v52 + 2;
    v62 = v30;
    v66 = v27;
    v67 = v28;
    v68 = v29;
    if ( v30 > 999999999 )
      goto LABEL_36;
    if ( v16 < 0 )
      v16 = -v16;
    goto LABEL_50;
  }
LABEL_35:
  if ( v14 < 0 )
    goto LABEL_36;
  if ( sub_327A48((int *)v4, a4, &v58) || sub_327A48((int *)a3, a4, &v58) )
  {
    v10 = 0;
    v12 = v58;
    v11 = 0;
    goto LABEL_4;
  }
  v55 = 0;
  sub_3312AC(&v62, 64);
  v39 = *a4;
  v40 = *(_DWORD *)v4;
  LOBYTE(v68) = 0;
  v63 = (char *)&loc_F423C + 3;
  if ( v40 >= v39 )
    v39 = v40;
  v64 = -999999;
  v30 = v39 + 10;
  v62 = v30;
LABEL_50:
  if ( v30 > 49 )
    v31 = (((2863311531u * (unsigned __int64)(unsigned int)(v30 + 2)) >> 32) & 0xFFFFFFFE) + 10;
  else
    v31 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v30) + 5);
  if ( v31 > 0x30 )
  {
    v46 = malloc(v31);
    v11 = v46;
    if ( !v46 )
      goto LABEL_101;
    v32 = v46;
  }
  else
  {
    v32 = v69;
    v11 = 0;
  }
  if ( !v55 )
  {
    v53 = &v58;
    v42 = (unsigned __int16 *)(v32 + 10);
    sub_32EC90((int)v32, (int)v4, &v62, &v58);
    if ( *((_WORD *)v32 + 5) || (v41 = *(_DWORD *)v32, *(_DWORD *)v32 != 1) || (v43 = v32[8], (v43 & 0x70) != 0) )
    {
      v47 = a3;
      v10 = 0;
      sub_32B538((int)v32, (int)v32, v47, (int)&v62, &v58);
      sub_32E4B0((int)v32, (int)v32, &v62, &v58);
      v41 = *(_DWORD *)v32;
      v43 = v32[8];
    }
    else
    {
      *((_WORD *)v32 + 5) = 1;
      if ( v56 )
      {
        v10 = 0;
      }
      else
      {
        v49 = *a4;
        if ( *a4 == 1 )
        {
          v50 = 1;
        }
        else
        {
          v50 = sub_32845C(v32 + 10, 1, *a4 - 1);
          v43 = v32[8];
        }
        v51 = v58;
        *((_DWORD *)v32 + 1) = 1 - v49;
        v41 = v50;
        *(_DWORD *)v32 = v50;
        v10 = 0;
        v58 = v51 | 0x820;
      }
    }
LABEL_91:
    v44 = *((_DWORD *)v32 + 1);
    *(_BYTE *)(a1 + 8) = v43;
    *(_DWORD *)(a1 + 4) = v44;
    sub_328A00(a1, a4, v42, v41, &v57, v53);
    sub_329598((_DWORD *)a1, a4, &v57, v53);
    v12 = v58;
    goto LABEL_4;
  }
  v33 = *(char *)(a3 + 8);
  v10 = 0;
  v34 = 1;
  v32[8] = 0;
  *(_DWORD *)v32 = 1;
  *((_WORD *)v32 + 5) = 1;
  if ( v33 >= 0 )
    v34 = (int)&v58;
  *((_DWORD *)v32 + 1) = 0;
  if ( v33 < 0 )
  {
    v53 = &v58;
    sub_32AB6C((int)v59, (int)v32);
    sub_32D3F8((int)v32, (int)v59, __PAIR64__(&v62, (unsigned int)v4), 0x80u, &v58);
    if ( v31 <= 0x30 )
    {
      v4 = &v71;
      goto LABEL_111;
    }
    v48 = malloc(v31);
    v10 = v48;
    if ( v48 )
    {
      v4 = (char *)v48;
LABEL_111:
      sub_32AB6C((int)v4, (int)v32);
      sub_32AB6C((int)v32, (int)v59);
      goto LABEL_61;
    }
LABEL_101:
    v12 = v58 | 0x10;
    v58 |= 0x10u;
LABEL_29:
    free(v11);
    goto LABEL_30;
  }
  v53 = (int *)v34;
LABEL_61:
  v35 = v58;
  v36 = 0;
  v37 = 1;
  v38 = v58 & 0x2200;
  while ( 1 )
  {
    if ( v38 )
    {
      if ( (v35 & 0x200) != 0 )
      {
        v45 = v32[8];
        goto LABEL_93;
      }
      if ( !*((_WORD *)v32 + 5) && *(_DWORD *)v32 == 1 )
      {
        v45 = v32[8];
        if ( (v45 & 0x70) == 0 )
          goto LABEL_93;
      }
    }
    v16 *= 2;
    if ( v16 < 0 )
      break;
    if ( v37 == 31 )
      goto LABEL_89;
    if ( v36 )
      goto LABEL_70;
LABEL_62:
    ++v37;
  }
  sub_32B538((int)v32, (int)v32, (int)v4, (int)&v62, v53);
  if ( v37 != 31 )
  {
LABEL_70:
    sub_32B538((int)v32, (int)v32, (int)v32, (int)&v62, v53);
    v35 = v58;
    v36 = v55;
    v38 = v58 & 0x2200;
    goto LABEL_62;
  }
  v35 = v58;
LABEL_89:
  if ( (v35 & 0x2200) == 0 )
  {
    v41 = *(_DWORD *)v32;
    v42 = (unsigned __int16 *)(v32 + 10);
    v43 = v32[8];
    goto LABEL_91;
  }
  v45 = v32[8];
LABEL_93:
  v32[8] = v45 & 0x7F | v54;
  sub_329598(v32, a4, &v57, v53);
  sub_32AB6C(a1, (int)v32);
  v12 = v58;
LABEL_4:
  free(v11);
  free(v10);
  if ( !v12 )
    return a1;
LABEL_30:
  sub_327DE4(a1, v12, (int)a4);
  return a1;
}
