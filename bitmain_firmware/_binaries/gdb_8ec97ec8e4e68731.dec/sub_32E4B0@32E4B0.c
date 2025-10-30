int __fastcall sub_32E4B0(int a1, int a2, int *a3, int *a4)
{
  char v4; // r12
  void *v8; // r5
  void *v9; // r3
  int v10; // r6
  int v11; // r3
  int v12; // r3
  int v13; // r0
  int v14; // r5
  int v15; // r0
  int v17; // r0
  int v18; // r3
  int v19; // r12
  int v20; // r1
  int v21; // r2
  int v22; // r1
  int v23; // r2
  int v24; // r7
  size_t v25; // r0
  void *v26; // r0
  int *v27; // r5
  int v28; // r1
  int v29; // r2
  size_t v30; // r0
  int *v31; // r7
  size_t v32; // r0
  int *v33; // r11
  unsigned __int64 v34; // r2
  _BOOL4 v35; // r6
  int v36; // r2
  int v37; // lr
  int v38; // r1
  char v39; // r0
  int v40; // r12
  int v41; // r3
  int v42; // r3
  int v43; // r6
  int v44; // r2
  int v45; // r12
  int v46; // r9
  char v47; // r1
  int v48; // r3
  void *v49; // r0
  void *ptr; // [sp+Ch] [bp-1A8h]
  int *v51; // [sp+10h] [bp-1A4h]
  int *v52; // [sp+14h] [bp-1A0h]
  int v53; // [sp+18h] [bp-19Ch]
  int v54; // [sp+1Ch] [bp-198h]
  int v55; // [sp+20h] [bp-194h]
  int v56; // [sp+24h] [bp-190h]
  int v57; // [sp+28h] [bp-18Ch]
  int v58; // [sp+34h] [bp-180h] BYREF
  int v59; // [sp+38h] [bp-17Ch] BYREF
  _DWORD v60[2]; // [sp+3Ch] [bp-178h] BYREF
  char v61; // [sp+44h] [bp-170h]
  __int16 v62; // [sp+46h] [bp-16Eh]
  int v63; // [sp+48h] [bp-16Ch] BYREF
  int v64; // [sp+4Ch] [bp-168h]
  char v65; // [sp+50h] [bp-164h]
  __int16 v66; // [sp+52h] [bp-162h]
  int v67[6]; // [sp+60h] [bp-154h] BYREF
  char v68; // [sp+78h] [bp-13Ch]
  _DWORD v69[2]; // [sp+7Ch] [bp-138h] BYREF
  int v70; // [sp+84h] [bp-130h]
  int v71; // [sp+88h] [bp-12Ch]
  int v72; // [sp+8Ch] [bp-128h]
  int v73; // [sp+90h] [bp-124h]
  int v74; // [sp+94h] [bp-120h]
  _DWORD v75[7]; // [sp+98h] [bp-11Ch] BYREF
  char v76; // [sp+B4h] [bp-100h] BYREF
  _BYTE v77[72]; // [sp+F0h] [bp-C4h] BYREF
  int v78; // [sp+138h] [bp-7Ch] BYREF
  int v79; // [sp+13Ch] [bp-78h]
  char v80; // [sp+140h] [bp-74h]
  __int16 v81; // [sp+142h] [bp-72h]

  v4 = *(_BYTE *)(a2 + 8);
  v58 = 0;
  if ( (v4 & 0x70) == 0 )
  {
    v9 = (void *)*(unsigned __int16 *)(a2 + 10);
    v10 = a2;
    if ( !*(_WORD *)(a2 + 10) && *(_DWORD *)a2 == 1 )
    {
      v8 = (void *)*(unsigned __int16 *)(a2 + 10);
      *(_BYTE *)(a1 + 8) = (_BYTE)v9;
      *(_DWORD *)(a1 + 4) = v9;
      v51 = (int *)v9;
      *(_DWORD *)a1 = 1;
      *(_WORD *)(a1 + 10) = 1;
      free(v9);
      goto LABEL_17;
    }
    v63 = 1;
    v65 = 0;
    v11 = *a3;
    v66 = 4;
    if ( v4 < 0 )
      v12 = ~v11;
    else
      v12 = -v11;
    v64 = v12;
    v13 = sub_328EAC((int)&v63, a2, 1);
    if ( v13 == 0x80000000 )
    {
      v8 = 0;
      v51 = 0;
      *a4 |= 0x10u;
      free(0);
      goto LABEL_17;
    }
    if ( v13 >= 0 )
    {
      v14 = *a3;
      *(_DWORD *)a1 = 1;
      *(_BYTE *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_WORD *)(a1 + 10) = 1;
      if ( v14 == 1 )
        v15 = 1;
      else
        v15 = sub_32845C((char *)(a1 + 10), 1, v14 - 1);
      *(_DWORD *)a1 = v15;
      *(_DWORD *)(a1 + 4) = 1 - v14;
      v8 = 0;
      v51 = 0;
      ptr = 0;
      *a4 |= 0x820u;
      goto LABEL_16;
    }
    sub_3312AC(v67, 64);
    v17 = *(_DWORD *)(v10 + 4);
    v8 = 0;
    v18 = *(_DWORD *)v10;
    v19 = a3[1];
    v20 = a3[2];
    v21 = v17 + *(_DWORD *)v10;
    v68 = 0;
    v67[1] = v19;
    v67[2] = v20;
    if ( v21 > 8 )
    {
      v41 = *(char *)(v10 + 8);
      v78 = 1;
      v80 = 0;
      v79 = 0;
      if ( v41 >= 0 )
        v20 = 11;
      v81 = 2;
      if ( v41 < 0 )
      {
        v20 = 11;
        v51 = 0;
        ptr = 0;
        v79 = -2;
      }
      else
      {
        v51 = 0;
        ptr = 0;
      }
      v31 = (int *)v77;
      v52 = &v78;
      v54 = 8;
LABEL_68:
      v42 = *a4;
      v67[0] = v20;
      v43 = dword_438D00[v54];
      v44 = v42 & 0x2200;
      v45 = 0;
      v46 = 1;
      *((_BYTE *)v31 + 8) = 0;
      *v31 = 1;
      v31[1] = 0;
      *((_WORD *)v31 + 5) = 1;
      while ( 1 )
      {
        if ( v44 )
        {
          v38 = *((unsigned __int16 *)v31 + 5);
          if ( (v42 & 0x200) != 0 )
            goto LABEL_80;
          if ( !*((_WORD *)v31 + 5) && *v31 == 1 )
          {
            v39 = *((_BYTE *)v31 + 8);
            v47 = v39 & 0x70;
            if ( (v39 & 0x70) == 0 )
            {
              v48 = v31[1];
              v59 = *v31;
              v37 = v48;
              goto LABEL_83;
            }
          }
        }
        v43 *= 2;
        if ( v43 < 0 )
          break;
        if ( v46 == 31 )
          goto LABEL_79;
        if ( v45 )
          goto LABEL_77;
LABEL_69:
        ++v46;
      }
      sub_32B538((int)v31, (int)v31, (int)v52, (int)v67, a4);
      if ( v46 == 31 )
      {
LABEL_79:
        v38 = *((unsigned __int16 *)v31 + 5);
LABEL_80:
        v39 = *((_BYTE *)v31 + 8);
        v36 = *v31;
        v37 = v31[1];
        goto LABEL_59;
      }
LABEL_77:
      sub_32B538((int)v31, (int)v31, (int)v31, (int)v67, a4);
      v42 = *a4;
      v45 = 1;
      v44 = *a4 & 0x2200;
      goto LABEL_69;
    }
    v22 = 8 - v21;
    if ( 8 - v21 >= (v18 > 8) )
      v22 = v18 > 8;
    v23 = v21 + v22;
    v24 = -v18 - v22;
    if ( v23 < 0 )
      v24 += v23;
    v54 = v23;
    if ( v23 < 0 )
      v54 = 0;
    if ( v17 == v24 )
    {
      ptr = 0;
    }
    else
    {
      if ( v18 > 49 )
        v25 = (((2863311531u * (unsigned __int64)(unsigned int)(v18 + 2)) >> 32) & 0xFFFFFFFE) + 10;
      else
        v25 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v18) + 5);
      if ( v25 <= 0x3C )
      {
        v27 = (int *)&v76;
        ptr = 0;
      }
      else
      {
        v26 = malloc(v25);
        ptr = v26;
        if ( !v26 )
        {
          v8 = 0;
          v51 = 0;
          *a4 |= 0x10u;
          goto LABEL_16;
        }
        v27 = (int *)v26;
      }
      sub_32AB6C((int)v27, v10);
      v18 = *v27;
      v10 = (int)v27;
      v27[1] = v24;
    }
    if ( v18 < *a3 )
      v28 = v54 + *a3;
    else
      v28 = v54 + v18;
    v57 = v28;
    v29 = 2 * (v28 + 2);
    v55 = v28 + 2;
    v56 = v29;
    if ( v29 > 49 )
      v30 = (((2863311531u * (unsigned __int64)(unsigned int)(v29 + 2)) >> 32) & 0xFFFFFFFE) + 10;
    else
      v30 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v29) + 5);
    if ( v30 > 0x78 )
    {
      v49 = malloc(v30);
      v8 = v49;
      if ( !v49 )
      {
        v51 = 0;
        *a4 |= 0x10u;
        goto LABEL_16;
      }
      v31 = (int *)v49;
    }
    else
    {
      v31 = &v78;
      v8 = 0;
    }
    if ( v55 > 47 )
      v32 = 2 * ((v57 + 6) / 3 + 5);
    else
      v32 = 2 * (*((unsigned __int8 *)&dword_438B18[6] + v57) + 5);
    if ( v32 <= 0x48 )
    {
      v33 = (int *)v77;
      v51 = 0;
LABEL_52:
      sub_32AB6C((int)v33, v10);
      *v31 = 1;
      *((_WORD *)v31 + 5) = 1;
      *((_BYTE *)v31 + 8) = 0;
      v31[1] = 0;
      v66 = 2;
      v60[0] = 1;
      v63 = 1;
      v62 = 1;
      v65 = 0;
      v64 = 0;
      v61 = 0;
      v60[1] = 0;
      sub_3312AC(v69, 64);
      v75[0] = v69[0];
      v75[1] = v69[1];
      v75[2] = v70;
      v75[3] = v71;
      v70 = -999999999;
      v67[0] = v56;
      v75[4] = v72;
      v75[5] = v73;
      v75[6] = v74;
      v69[0] = v55;
      v53 = v10;
      while ( 1 )
      {
        sub_32C3B0((int)v31, (int)v31, __SPAIR64__(v67, (unsigned int)v33), 0, a4);
        sub_32B538((int)v33, (int)v33, v53, (int)v69, &v58);
        HIDWORD(v34) = v69;
        LODWORD(v34) = &v63;
        sub_32D3F8((int)v33, (int)v33, v34, 0x80u, &v58);
        v35 = *v33 + v33[1] + v55 < *v31 + v31[1];
        if ( *v31 < v55 )
          v35 = 0;
        if ( v35 )
          break;
        sub_32C3B0((int)&v63, (int)&v63, __SPAIR64__(v75, v60), 0, &v58);
      }
      v36 = *v31;
      v37 = v31[1];
      if ( !v54 )
      {
        v38 = *((unsigned __int16 *)v31 + 5);
        v39 = *((_BYTE *)v31 + 8);
LABEL_59:
        v59 = 1;
        if ( !v38 && v36 == 1 )
        {
          v47 = v39 & 0x70;
LABEL_83:
          if ( !v47 )
            v59 = 0;
          v36 = 1;
        }
        v40 = *a3;
        *(_BYTE *)(a1 + 8) = v39;
        *(_DWORD *)(a1 + 4) = v37;
        v67[0] = v40;
        sub_328A00(a1, v67, (unsigned __int16 *)v31 + 5, v36, &v59, a4);
        sub_329598((_DWORD *)a1, a3, &v59, a4);
        goto LABEL_16;
      }
      v52 = v31;
      v31 = v33;
      v20 = v57 + 4;
      goto LABEL_68;
    }
    v51 = (int *)malloc(v32);
    if ( v51 )
    {
      v33 = v51;
      goto LABEL_52;
    }
    *a4 |= 0x10u;
LABEL_16:
    free(ptr);
    goto LABEL_17;
  }
  if ( (v4 & 0x40) != 0 )
  {
    v8 = 0;
    if ( v4 < 0 )
    {
      *(_BYTE *)(a1 + 8) = 0;
      v51 = 0;
      *(_DWORD *)(a1 + 4) = 0;
      *(_WORD *)(a1 + 10) = 0;
      *(_DWORD *)a1 = 1;
    }
    else
    {
      sub_32AB6C(a1, a2);
      v51 = 0;
    }
    free(0);
  }
  else
  {
    v8 = 0;
    sub_32AC0C(a1, a2, 0, a3, a4);
    v51 = 0;
    free(0);
  }
LABEL_17:
  free(v8);
  free(v51);
  return a1;
}
