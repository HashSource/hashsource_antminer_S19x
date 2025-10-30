int __fastcall sub_32EC90(int a1, int a2, int *a3, int *a4)
{
  char v4; // r12
  void *v7; // r2
  int v9; // r3
  int v10; // r4
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int *v14; // r11
  int v15; // r1
  int v16; // r2
  char *v17; // r1
  int v18; // r8
  size_t v19; // r0
  char *v20; // r5
  int v21; // r4
  char *v22; // r4
  size_t v23; // r0
  char *v24; // r4
  int v25; // r0
  int v26; // r3
  int v27; // r0
  int v28; // r2
  int v29; // r6
  int v30; // r2
  int v31; // r3
  int v32; // r10
  int v33; // r3
  bool v34; // zf
  int v35; // r3
  signed __int64 v36; // r2
  int v37; // r0
  int v38; // r1
  int v39; // r12
  char v40; // r0
  int v41; // lr
  char *v42; // r3
  int *v43; // r1
  int v44; // r2
  int v45; // r3
  bool v46; // zf
  void *v47; // r0
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int *v51; // r11
  int v52; // r1
  int v53; // r2
  void *v55; // [sp+10h] [bp-DCh]
  void *ptr; // [sp+14h] [bp-D8h]
  unsigned int v58; // [sp+1Ch] [bp-D0h]
  int v59; // [sp+24h] [bp-C8h] BYREF
  _BOOL4 v60; // [sp+28h] [bp-C4h] BYREF
  _DWORD v61[2]; // [sp+2Ch] [bp-C0h] BYREF
  char v62; // [sp+34h] [bp-B8h]
  __int16 v63; // [sp+36h] [bp-B6h]
  char v64[10]; // [sp+38h] [bp-B4h] BYREF
  unsigned __int16 v65; // [sp+42h] [bp-AAh]
  int v66; // [sp+44h] [bp-A8h] BYREF
  int v67; // [sp+48h] [bp-A4h]
  int v68; // [sp+4Ch] [bp-A0h]
  int v69; // [sp+50h] [bp-9Ch]
  int v70; // [sp+54h] [bp-98h]
  int v71; // [sp+58h] [bp-94h]
  int v72; // [sp+5Ch] [bp-90h]
  int v73[7]; // [sp+60h] [bp-8Ch] BYREF
  char v74; // [sp+7Ch] [bp-70h] BYREF
  char v75; // [sp+ACh] [bp-40h] BYREF

  v4 = *(_BYTE *)(a2 + 8);
  v59 = 0;
  if ( (v4 & 0x70) != 0 )
  {
    if ( (v4 & 0x40) == 0 )
    {
      v55 = 0;
      sub_32AC0C(a1, a2, 0, a3, a4);
      free(0);
      goto LABEL_6;
    }
    if ( (v4 & 0x80) == 0 )
    {
      v55 = 0;
      sub_32AB6C(a1, a2);
      free(0);
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  v7 = (void *)*(unsigned __int16 *)(a2 + 10);
  if ( !*(_WORD *)(a2 + 10) && *(_DWORD *)a2 == 1 )
  {
    v55 = (void *)*(unsigned __int16 *)(a2 + 10);
    *(_DWORD *)(a1 + 4) = v7;
    *(_DWORD *)a1 = 1;
    *(_WORD *)(a1 + 10) = (_WORD)v7;
    *(_BYTE *)(a1 + 8) = -64;
    free(v7);
    goto LABEL_6;
  }
  if ( v4 < 0 )
  {
LABEL_4:
    v55 = 0;
    ptr = 0;
    *a4 |= 0x80u;
    goto LABEL_5;
  }
  v9 = *a3;
  v10 = *(_DWORD *)a2;
  if ( !*(_DWORD *)(a2 + 4) && v9 <= 40 )
  {
    if ( v7 == (void *)10 )
    {
      if ( v10 == 2 )
      {
        v48 = *a3;
        v49 = a3[1];
        v50 = a3[2];
        v51 = a3 + 4;
        v55 = *(void **)(a2 + 4);
        ptr = v55;
        v66 = v48;
        v67 = v49;
        v68 = v50;
        v69 = 3;
        v52 = v51[1];
        v53 = v51[2];
        v70 = *v51;
        v71 = v52;
        v72 = v53;
        v17 = "2.302585092994045684017991454684364207601";
        goto LABEL_15;
      }
    }
    else if ( v7 == (void *)2 && v10 == 1 )
    {
      v11 = *a3;
      v12 = a3[1];
      v13 = a3[2];
      v14 = a3 + 4;
      v55 = *(void **)(a2 + 4);
      ptr = v55;
      v66 = v11;
      v67 = v12;
      v68 = v13;
      v69 = 3;
      v15 = v14[1];
      v16 = v14[2];
      v70 = *v14;
      v71 = v15;
      v72 = v16;
      v17 = "0.6931471805599453094172321214581765680755";
LABEL_15:
      sub_329A10(a1, (unsigned __int8 *)v17, (int)&v66);
      *a4 |= 0x820u;
      goto LABEL_5;
    }
  }
  if ( v9 < 7 )
    v9 = 7;
  if ( v9 < v10 )
    v9 = *(_DWORD *)a2;
  v18 = v9 + 2;
  if ( v9 + 2 <= 49 )
  {
    if ( v18 < 16 )
      v42 = (char *)&dword_438B18[4];
    else
      v42 = (char *)dword_438B18 + v18;
    v19 = 2 * ((unsigned __int8)v42[20] + 5);
  }
  else
  {
    v19 = (((2863311531u * (unsigned __int64)(unsigned int)(v9 + 4)) >> 32) & 0xFFFFFFFE) + 10;
  }
  if ( v19 > 0x30 )
  {
    v47 = malloc(v19);
    ptr = v47;
    if ( !v47 )
    {
      v55 = 0;
      *a4 |= 0x10u;
      goto LABEL_5;
    }
    v20 = (char *)v47;
  }
  else
  {
    v20 = &v74;
    ptr = 0;
  }
  v21 = v18 + v10;
  if ( v21 > 49 )
  {
    v23 = (((2863311531u * (unsigned __int64)(unsigned int)(v21 + 2)) >> 32) & 0xFFFFFFFE) + 10;
  }
  else
  {
    if ( v21 < 16 )
      v22 = (char *)&dword_438B18[4];
    else
      v22 = (char *)dword_438B18 + v21;
    v23 = 2 * ((unsigned __int8)v22[20] + 5);
  }
  if ( v23 <= 0x3C )
  {
    v24 = &v75;
    v55 = 0;
  }
  else
  {
    v55 = malloc(v23);
    if ( !v55 )
    {
      *a4 |= 0x10u;
      goto LABEL_5;
    }
    v24 = (char *)v55;
  }
  sub_3312AC(&v66, 64);
  sub_329718((int)v20, *(_DWORD *)(a2 + 4) + *(_DWORD *)a2);
  v24[8] = 0;
  *((_DWORD *)v24 + 1) = 0;
  *((_WORD *)v24 + 5) = 0;
  *(_DWORD *)v24 = 1;
  sub_3290C0((int *)v24, (unsigned int)&loc_232278 + 1);
  *((_DWORD *)v24 + 1) = -6;
  sub_32B538((int)v20, (int)v20, (int)v24, (int)&v66, &v59);
  v25 = *(_DWORD *)(a2 + 4);
  v26 = *(_DWORD *)a2;
  v24[8] = *(_BYTE *)(a2 + 8);
  *((_DWORD *)v24 + 1) = v25;
  v69 = 5;
  v66 = 2;
  v60 = 0;
  sub_328A00((int)v24, &v66, (unsigned __int16 *)(a2 + 10), v26, (int *)&v60, &v59);
  *((_DWORD *)v24 + 1) = 0;
  v27 = sub_327B04((int)v24);
  v28 = v27;
  if ( v27 <= 9 )
    v28 = 10 * v27;
  v58 = *((unsigned __int16 *)&dword_438B18[16] + v28);
  sub_329718((int)v24, v58 >> 2);
  v24[8] = 0x80;
  v66 = 16;
  *((_DWORD *)v24 + 1) = -3 - (v58 & 3);
  v29 = 9;
  v69 = 3;
  sub_32C3B0((int)v20, (int)v20, __SPAIR64__(&v66, (unsigned int)v24), 0, &v59);
  v30 = a3[1];
  v31 = a3[2];
  LOBYTE(v72) = 0;
  v62 = 0;
  v67 = v30;
  v68 = v31;
  v61[1] = 0;
  v32 = *(_DWORD *)a2;
  v73[3] = v69;
  v66 = 9;
  v73[1] = 1999998;
  v73[2] = -1999998;
  v73[4] = v70;
  v73[5] = v71;
  v73[6] = v72;
  v73[0] = v32 + 9;
  v61[0] = 1;
  v63 = 1;
  while ( 1 )
  {
    v20[8] = ~(v20[8] ^ 0x7F);
    sub_32E4B0((int)v24, (int)v20, v73, &v59);
    v20[8] = ~(v20[8] ^ 0x7F);
    sub_32B538((int)v24, (int)v24, a2, (int)v73, &v59);
    HIDWORD(v36) = v73;
    LODWORD(v36) = v61;
    sub_32C3B0((int)v24, (int)v24, v36, 0x80u, &v59);
    v37 = *(_DWORD *)v24;
    v38 = *(_DWORD *)v20;
    if ( *((_WORD *)v24 + 5) || v37 != 1 || (v24[8] & 0x70) != 0 )
    {
      if ( v37 + *((_DWORD *)v24 + 1) + *a3 >= v38 + *((_DWORD *)v20 + 1) )
        goto LABEL_48;
      v33 = *((unsigned __int16 *)v20 + 5);
      if ( v18 == v38 )
        goto LABEL_56;
    }
    else
    {
      v33 = *((unsigned __int16 *)v20 + 5);
      if ( v18 == v38 )
      {
LABEL_56:
        v39 = *((_DWORD *)v20 + 1);
        v40 = v20[8];
        v60 = 1;
        goto LABEL_57;
      }
    }
    v34 = v38 == 1;
    if ( v38 == 1 )
      v34 = v33 == 0;
    if ( v34 && (v20[8] & 0x70) == 0 )
      break;
    if ( !*((_WORD *)v24 + 5) && v37 == 1 && (v24[8] & 0x70) == 0 )
      *((_DWORD *)v24 + 1) = *((_DWORD *)v20 + 1) - v18;
LABEL_48:
    sub_32C3B0((int)v20, (int)v20, __SPAIR64__(&v66, (unsigned int)v24), 0, &v59);
    if ( v18 != v29 )
    {
      v29 *= 2;
      if ( v18 < v29 )
        v29 = v18;
      v35 = *(_DWORD *)a2 + v29;
      v66 = v29;
      v73[0] = v35;
    }
  }
  sub_32AE38((int)v64, a2, (int)v61, (int)&v66, 1u, &v59);
  v39 = v65;
  v40 = v20[8];
  v46 = v65 == 0;
  if ( v65 )
    v43 = a4;
  else
    v45 = *((unsigned __int16 *)v20 + 5);
  if ( v65 )
  {
    v45 = *((unsigned __int16 *)v20 + 5);
    v44 = *v43;
  }
  else
  {
    *((_DWORD *)v20 + 1) = 0;
    v18 = *(_DWORD *)v20;
  }
  if ( !v46 )
  {
    v18 = *(_DWORD *)v20;
    *v43 = v44 | 0x820;
    v39 = *((_DWORD *)v20 + 1);
  }
  v60 = 1;
  if ( !v45 && v18 == 1 )
    v60 = (v40 & 0x70) != 0;
LABEL_57:
  v41 = *a3;
  *(_BYTE *)(a1 + 8) = v40;
  *(_DWORD *)(a1 + 4) = v39;
  v66 = v41;
  sub_328A00(a1, &v66, (unsigned __int16 *)v20 + 5, v18, (int *)&v60, a4);
  sub_329598((_DWORD *)a1, a3, (int *)&v60, a4);
LABEL_5:
  free(ptr);
LABEL_6:
  free(v55);
  return a1;
}
