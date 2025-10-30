_DWORD *__fastcall sub_32FFB8(_DWORD *a1, int a2, int *a3)
{
  char v3; // r12
  void *v4; // r11
  int v5; // r4
  int v8; // r2
  int v9; // r3
  int v10; // r9
  signed int v11; // r0
  char *v12; // r8
  signed int v13; // r4
  void *v14; // r5
  void *v15; // r0
  bool v16; // zf
  char *v17; // r4
  char *v18; // r5
  int v19; // r3
  char v20; // r6
  signed __int64 v21; // r2
  int v22; // r3
  int v23; // r1
  unsigned __int64 v24; // r2
  int v25; // r12
  int v26; // r1
  int v27; // r2
  int v28; // r3
  int v29; // r3
  int v30; // r0
  int v31; // r1
  int v32; // r2
  int v33; // r12
  int v34; // lr
  unsigned int v35; // r0
  signed __int64 v36; // r2
  signed __int64 v37; // r2
  int v38; // r3
  int v39; // r3
  void *v40; // r0
  signed __int64 v41; // r2
  int v42; // r12
  int v43; // r0
  signed __int64 v44; // r2
  signed __int64 v45; // r2
  int v46; // r2
  int v47; // r5
  unsigned __int64 v48; // r2
  int v49; // r1
  int v50; // r1
  int v51; // r5
  void *ptr; // [sp+14h] [bp-F8h]
  void *v55; // [sp+18h] [bp-F4h]
  int v56; // [sp+1Ch] [bp-F0h]
  int v57; // [sp+20h] [bp-ECh]
  int v58; // [sp+24h] [bp-E8h]
  int v59; // [sp+28h] [bp-E4h]
  int v60; // [sp+34h] [bp-D8h] BYREF
  unsigned int v61; // [sp+38h] [bp-D4h] BYREF
  int v62; // [sp+3Ch] [bp-D0h] BYREF
  unsigned int v63; // [sp+40h] [bp-CCh] BYREF
  int v64; // [sp+44h] [bp-C8h] BYREF
  int v65; // [sp+48h] [bp-C4h] BYREF
  _DWORD v66[2]; // [sp+4Ch] [bp-C0h] BYREF
  char v67; // [sp+54h] [bp-B8h]
  __int16 v68; // [sp+56h] [bp-B6h]
  int v69; // [sp+58h] [bp-B4h] BYREF
  int v70; // [sp+5Ch] [bp-B0h]
  char v71; // [sp+60h] [bp-ACh]
  __int16 v72; // [sp+62h] [bp-AAh]
  _DWORD v73[3]; // [sp+64h] [bp-A8h] BYREF
  int v74; // [sp+70h] [bp-9Ch]
  int v75; // [sp+80h] [bp-8Ch] BYREF
  int v76; // [sp+84h] [bp-88h]
  int v77; // [sp+88h] [bp-84h]
  int v78; // [sp+8Ch] [bp-80h]
  int v79; // [sp+90h] [bp-7Ch]
  int v80; // [sp+94h] [bp-78h]
  int v81; // [sp+98h] [bp-74h]
  char v82; // [sp+9Ch] [bp-70h] BYREF
  char v83; // [sp+C0h] [bp-4Ch] BYREF
  char v84; // [sp+E4h] [bp-28h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  v60 = 0;
  v61 = 0;
  v62 = 0;
  if ( (v3 & 0x70) == 0 )
  {
    v4 = (void *)*(unsigned __int16 *)(a2 + 10);
    v59 = *(int *)(a2 + 4) >> 1;
    if ( !*(_WORD *)(a2 + 10) && *(_DWORD *)a2 == 1 )
    {
      sub_32AB6C((int)a1, a2);
      a1[1] = v59;
      sub_329598(a1, a3, &v60, (int *)&v61);
      v55 = 0;
      v5 = v61;
      free(0);
      goto LABEL_39;
    }
    if ( v3 < 0 )
      goto LABEL_4;
    v8 = *(_DWORD *)a2;
    v9 = *a3 + 1;
    if ( v9 < 7 )
      v9 = 7;
    if ( v9 < v8 )
      v9 = *(_DWORD *)a2;
    v57 = v9;
    v10 = v9 + 2;
    if ( v8 > 49 )
      v11 = (((2863311531u * (unsigned __int64)(unsigned int)(v8 + 2)) >> 32) & 0xFFFFFFFE) + 10;
    else
      v11 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v8) + 5);
    if ( v11 > 36 )
    {
      v40 = malloc(v11);
      ptr = v40;
      if ( !v40 )
      {
        v5 = 16;
        v4 = 0;
        v61 = 16;
        v55 = 0;
        goto LABEL_5;
      }
      v12 = (char *)v40;
    }
    else
    {
      v12 = &v82;
      ptr = 0;
    }
    if ( v10 > 49 )
      v13 = (((2863311531u * (unsigned __int64)(unsigned int)(v57 + 4)) >> 32) & 0xFFFFFFFE) + 10;
    else
      v13 = 2 * (*((unsigned __int8 *)&dword_438B18[5] + v10) + 5);
    if ( v13 <= 36 )
    {
      v4 = 0;
      v18 = &v84;
      v55 = 0;
      v17 = &v83;
    }
    else
    {
      v14 = malloc(v13);
      v55 = v14;
      v15 = malloc(v13);
      v16 = v15 == 0;
      if ( v15 )
        v16 = v14 == 0;
      v4 = v15;
      if ( v16 )
      {
        v5 = 16;
        v61 = 16;
        goto LABEL_5;
      }
      v17 = (char *)v14;
      v18 = (char *)v15;
    }
    sub_32AB6C((int)v12, a2);
    v19 = *(_DWORD *)v12 + *((_DWORD *)v12 + 1);
    *((_DWORD *)v12 + 1) = -*(_DWORD *)v12;
    v20 = v19;
    v56 = v19;
    sub_3312AC(v73, 64);
    v73[0] = v57;
    v73[1] = 999999999;
    v73[2] = -999999999;
    v71 = 0;
    v17[8] = 0;
    v69 = 3;
    *(_DWORD *)v17 = 3;
    if ( (v20 & 1) != 0 )
    {
      v39 = *((_DWORD *)v12 + 1);
      v70 = -4;
      v72 = 819;
      *((_DWORD *)v12 + 1) = v39 - 1;
      ++v56;
      *((_WORD *)v17 + 5) = 259;
      *((_DWORD *)v17 + 1) = -2;
    }
    else
    {
      v70 = -3;
      *((_DWORD *)v17 + 1) = -3;
      v72 = 259;
      *((_WORD *)v17 + 5) = 819;
    }
    sub_32B538((int)v17, (int)v17, (int)v12, (int)v73, &v62);
    LODWORD(v21) = &v69;
    HIDWORD(v21) = v73;
    sub_32C3B0((int)v17, (int)v17, v21, 0, &v62);
    v67 = 0;
    v22 = 3;
    v66[1] = 0;
    v68 = 0;
    v71 = 0;
    v66[0] = 1;
    v69 = 1;
    v72 = 5;
    v70 = -1;
    do
    {
      LODWORD(v24) = v17;
      v23 = 2 * (v22 - 1);
      HIDWORD(v24) = v73;
      if ( v23 >= v10 )
        v25 = v10;
      else
        v25 = v23;
      v73[0] = v25;
      sub_32D3F8((int)v18, (int)v12, v24, 0x80u, &v62);
      sub_32C3B0((int)v18, (int)v18, __SPAIR64__(v73, (unsigned int)v17), 0, &v62);
      sub_32B538((int)v17, (int)v18, (int)&v69, (int)v73, &v62);
      v22 = v73[0];
    }
    while ( v73[0] < v10 );
    v63 = 0;
    v26 = a3[1];
    v27 = a3[2];
    v28 = a3[3];
    v58 = v56 / 2;
    v75 = *a3;
    v76 = v26;
    v77 = v27;
    v78 = v28;
    v29 = *(_DWORD *)v17;
    *((_DWORD *)v17 + 1) += v56 / 2;
    v30 = a3[4];
    v31 = a3[5];
    v32 = a3[6];
    v60 = 0;
    v79 = v30;
    v80 = v31;
    v81 = v32;
    v78 = 3;
    sub_328A00((int)v17, &v75, (unsigned __int16 *)v17 + 5, v29, &v60, (int *)&v63);
    sub_329598(v17, &v75, &v60, (int *)&v63);
    if ( (v63 & 0x200) != 0 )
    {
      v61 = v63;
      sub_32AB6C((int)a1, (int)v17);
      v5 = v61;
LABEL_38:
      free(ptr);
      goto LABEL_39;
    }
    v33 = *(_DWORD *)v17;
    v34 = v73[0];
    v35 = v61 | v63 & 0xFFFFF7DF;
    *((_DWORD *)v17 + 1) -= v58;
    HIDWORD(v36) = v73;
    LODWORD(v36) = &v69;
    v61 = v35;
    v73[0] = v34 - 1;
    v70 = ~v33;
    sub_32C3B0((int)v18, (int)v17, v36, 0x80u, &v62);
    v74 = 1;
    sub_32B538((int)v18, (int)v18, (int)v18, (int)v73, &v62);
    sub_32AE38((int)v18, (int)v12, (int)v18, (int)v73, 1u, &v62);
    if ( v18[8] < 0 )
    {
      HIDWORD(v45) = v73;
      LODWORD(v45) = &v69;
      ++v70;
      v72 = 1;
      sub_32C3B0((int)v17, (int)v17, v45, 0x80u, &v62);
      v42 = v77;
      v44 = __PAIR64__(&v75, (unsigned int)v17);
      v43 = v76;
    }
    else
    {
      HIDWORD(v37) = v73;
      LODWORD(v37) = &v69;
      sub_32C3B0((int)v18, (int)v17, v37, 0, &v62);
      v74 = 5;
      sub_32B538((int)v18, (int)v18, (int)v18, (int)v73, &v62);
      sub_32AE38((int)v18, (int)v18, (int)v12, (int)v73, 1u, &v62);
      if ( v18[8] >= 0 )
        goto LABEL_47;
      HIDWORD(v41) = v73;
      LODWORD(v41) = &v69;
      ++v70;
      v72 = 1;
      sub_32C3B0((int)v17, (int)v17, v41, 0, &v62);
      v42 = v77;
      v43 = v76;
      v44 = __PAIR64__(&v75, (unsigned int)v17);
    }
    v77 = v42 - v58;
    v76 = v43 - v58;
    sub_32C3B0((int)v17, (int)v66, v44, 0, &v62);
LABEL_47:
    *((_DWORD *)v17 + 1) += v58;
    sub_32AB6C((int)v18, (int)v17);
    sub_328804((int)v18, (int)a3, 1, 1, &v64);
    if ( 2 * *(_DWORD *)v18 - 1 > v57
      || (v65 = 0, sub_32B538((int)v18, (int)v18, (int)v18, (int)v73, &v65), (v65 & 0x200) != 0)
      || (sub_32AE38((int)&v69, (int)v18, a2, (int)v73, 1u, &v65), v72)
      || v69 != 1
      || (v71 & 0x70) != 0 )
    {
      v38 = v61 | 0x820;
      v61 |= 0x820u;
    }
    else
    {
      v46 = *((_DWORD *)v17 + 1);
      v47 = v59 - v46;
      if ( v59 - v46 >= 0 )
      {
        if ( v47 > a3[1] - *a3 + 1 - v46 && *((_BYTE *)a3 + 24) )
        {
          v47 = a3[1] - *a3 + 1 - v46;
          v61 |= 0x400u;
        }
        if ( v64 < v47 )
        {
          v47 = v64;
          v61 |= 0x400u;
        }
        if ( v47 > 0 )
        {
          HIDWORD(v48) = *(_DWORD *)v17;
          if ( *(int *)v17 <= 49 )
          {
            LODWORD(v48) = 35608;
          }
          else
          {
            LODWORD(v48) = -1431655765;
            HIDWORD(v48) += 2;
          }
          if ( *(int *)v17 <= 49 )
          {
            WORD1(v48) = 67;
            HIDWORD(v48) += v48;
          }
          else
          {
            v48 = HIDWORD(v48) * (unsigned __int64)(unsigned int)v48;
          }
          if ( *(int *)v17 > 49 )
            v49 = HIDWORD(v48) >> 1;
          else
            v49 = *(unsigned __int8 *)(HIDWORD(v48) + 20);
          sub_328630((_WORD *)v17 + 5, v49, v47);
          v38 = v61;
          v50 = *((_DWORD *)v17 + 1) + v47;
          v51 = *(_DWORD *)v17 - v47;
          *((_DWORD *)v17 + 1) = v50;
          *(_DWORD *)v17 = v51;
        }
        else
        {
          v38 = v61;
        }
      }
      else
      {
        v38 = v61 | 0x800;
        v61 |= 0x800u;
      }
    }
    if ( (v38 & 0x2000) != 0 )
    {
      if ( *(_DWORD *)(a2 + 4) + *(_DWORD *)a2 > 2 * a3[2] )
      {
        v38 &= 0xFFFFCFFF;
        v61 = v38;
      }
      if ( (v38 & 0x20) == 0 )
        v61 = v38 & 0xFFFFDFFF;
    }
    sub_32AB6C((int)a1, (int)v17);
    v5 = v61;
    goto LABEL_38;
  }
  if ( (v3 & 0x40) == 0 )
  {
    v4 = 0;
    sub_32AC0C((int)a1, a2, 0, a3, &v61);
    v5 = v61;
    v55 = 0;
    ptr = 0;
    goto LABEL_38;
  }
  if ( v3 < 0 )
  {
LABEL_4:
    v4 = 0;
    v5 = 128;
    v61 = 128;
    v55 = 0;
    ptr = 0;
LABEL_5:
    free(ptr);
    free(v55);
    free(v4);
LABEL_6:
    sub_327DE4((int)a1, v5, (int)a3);
    return a1;
  }
  v4 = 0;
  sub_32AB6C((int)a1, a2);
  v55 = 0;
  v5 = v61;
  free(0);
LABEL_39:
  free(v55);
  free(v4);
  if ( v5 )
    goto LABEL_6;
  return a1;
}
