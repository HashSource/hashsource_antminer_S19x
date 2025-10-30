int __fastcall sub_A735C(int *a1, int a2)
{
  int v3; // r0
  int v4; // r10
  int v5; // r0
  bool v6; // zf
  int v7; // r6
  int v8; // r4
  int v9; // r4
  int v10; // r0
  int v11; // r6
  void (__fastcall *v12)(_DWORD, _DWORD, int, int, int, int *, int); // r7
  int v13; // r2
  int v14; // r4
  int v16; // r1
  unsigned int v17; // r7
  unsigned int v18; // r0
  unsigned int v19; // r6
  bool v20; // zf
  int v21; // r0
  void (__fastcall *v22)(int, int, int, int, unsigned int, int *, int); // r8
  unsigned int v23; // r3
  char *v24; // r2
  unsigned int v25; // r0
  bool v26; // cc
  unsigned int v27; // r1
  unsigned int v28; // r6
  int v29; // r3
  unsigned int v30; // r6
  unsigned int v31; // r2
  int v32; // r1
  int (__fastcall *v33)(int *, int); // r3
  _WORD *v34; // r3
  int (__fastcall *v35)(int *, _BYTE *, unsigned int *); // r3
  int v36; // r3
  int v37; // r0
  int v38; // r1
  int v39; // r1
  int v40; // r1
  int v41; // r1
  int v42; // r1
  int v43; // r1
  char v44; // r3
  void (__fastcall *v45)(int, _DWORD, int, int, int, int *, int); // r6
  int v46; // r0
  int v47; // r6
  int v48; // r0
  int v49; // r2
  int *v50; // [sp+10h] [bp-14Ch]
  int v51; // [sp+14h] [bp-148h]
  int v53; // [sp+1Ch] [bp-140h]
  int v54; // [sp+20h] [bp-13Ch]
  int v55; // [sp+24h] [bp-138h]
  int v56; // [sp+28h] [bp-134h]
  unsigned int v57; // [sp+30h] [bp-12Ch] BYREF
  int v58; // [sp+34h] [bp-128h] BYREF
  int v59[2]; // [sp+38h] [bp-124h] BYREF
  _BYTE v60[24]; // [sp+40h] [bp-11Ch] BYREF
  _BYTE v61[260]; // [sp+58h] [bp-104h] BYREF

  if ( !a1[6] )
    sub_8B1D4(a1);
  v3 = sub_8B034((int)a1);
  if ( !v3 )
    return -1;
  sub_D00F0(v3);
  v4 = sub_882E0((int)a1);
  v5 = sub_882E4((int)a1);
  v6 = v5 == 0;
  if ( v5 )
    v6 = v4 == 0;
  v54 = v5;
  v7 = v6;
  if ( v6 )
  {
    sub_D0048(20, 350, 128, "ssl/d1_lib.c", 474);
    return -1;
  }
  if ( (*a1 & 0xFF00) != 0xFE00 )
  {
    sub_D0048(20, 350, 259, "ssl/d1_lib.c", 486);
    return -1;
  }
  if ( !sub_7F140(a1) )
    return -1;
  v8 = a1[409];
  v51 = v7;
  v53 = a1[414];
  v55 = (3 - (_BYTE)v8) & 7;
  v9 = v8 + v55;
  v50 = _errno_location();
  do
  {
    *v50 = v51;
    v10 = sub_B6740(v4, v9, 16397);
    v11 = v10;
    if ( v10 <= 0 )
    {
      if ( sub_B6708(v4, 8) )
        goto LABEL_95;
      return -1;
    }
    if ( v10 <= 12 )
    {
      v14 = 0;
      sub_D0048(20, 350, 298, "ssl/d1_lib.c", 540);
      goto LABEL_20;
    }
    v12 = (void (__fastcall *)(_DWORD, _DWORD, int, int, int, int *, int))a1[33];
    if ( v12 )
      v12(0, 0, 256, v9, 13, a1, a1[34]);
    if ( v11 == 1 )
    {
      v13 = 551;
      goto LABEL_19;
    }
    if ( *(_BYTE *)v9 != 22 )
    {
      v49 = 556;
      goto LABEL_106;
    }
    if ( *(unsigned __int8 *)(v9 + 1) != 254 )
    {
      v14 = 0;
      sub_D0048(20, 350, 116, "ssl/d1_lib.c", 565);
      goto LABEL_20;
    }
    if ( (unsigned int)(v11 - 2) <= 8
      || (v16 = *(_DWORD *)(v9 + 7), v59[0] = *(_DWORD *)(v9 + 3), v59[1] = v16, (unsigned int)(v11 - 11) <= 1)
      || (v17 = *(unsigned __int8 *)(v9 + 12) | (*(unsigned __int8 *)(v9 + 11) << 8), v17 > v11 - 13) )
    {
      v13 = 573;
      goto LABEL_19;
    }
    if ( LOWORD(v59[0]) )
    {
      v49 = 584;
      goto LABEL_106;
    }
    if ( !v17
      || v17 - 1 <= 2
      || (v18 = (*(unsigned __int8 *)(v9 + 15) << 8)
              | (*(unsigned __int8 *)(v9 + 14) << 16)
              | *(unsigned __int8 *)(v9 + 16),
          v17 - 4 <= 1)
      || v17 - 6 <= 2
      || v17 - 9 <= 2
      || (v19 = *(unsigned __int8 *)(v9 + 24)
              | (*(unsigned __int8 *)(v9 + 23) << 8)
              | (*(unsigned __int8 *)(v9 + 22) << 16),
          v19 > v17 - 12)
      || v19 != v17 - 12 )
    {
      v13 = 599;
      goto LABEL_19;
    }
    if ( *(_BYTE *)(v9 + 13) != 1 )
    {
      v49 = 604;
LABEL_106:
      sub_D0048(20, 350, 244, "ssl/d1_lib.c", v49);
      v14 = 0;
      goto LABEL_20;
    }
    if ( (*(unsigned __int8 *)(v9 + 18) | (*(unsigned __int8 *)(v9 + 17) << 8)) > 2u )
    {
      v14 = 0;
      sub_D0048(20, 350, 402, "ssl/d1_lib.c", 610);
      goto LABEL_20;
    }
    v20 = v18 == v19;
    if ( v18 >= v19 )
      v20 = (*(unsigned __int8 *)(v9 + 21) | (*(unsigned __int8 *)(v9 + 20) << 8)
                                           | (*(unsigned __int8 *)(v9 + 19) << 16)) == 0;
    v21 = !v20;
    if ( !v20 )
    {
      v14 = 0;
      sub_D0048(20, 350, 401, "ssl/d1_lib.c", 623);
      goto LABEL_20;
    }
    v22 = (void (__fastcall *)(int, int, int, int, unsigned int, int *, int))a1[33];
    if ( v22 )
      v22(v21, *a1, 22, v9 + 13, v17, a1, a1[34]);
    if ( v19 <= 1 )
    {
      v13 = 633;
LABEL_19:
      v14 = 0;
      sub_D0048(20, 350, 159, "ssl/d1_lib.c", v13);
LABEL_20:
      sub_B3688(0);
      return v14;
    }
    v23 = *(unsigned __int8 *)(v9 + 26) | (*(unsigned __int8 *)(v9 + 25) << 8);
    if ( v23 != 256 )
    {
      v24 = *(char **)a1[1];
      if ( v24 == (char *)256 )
      {
        v25 = 65280;
LABEL_51:
        v26 = v24 > (char *)&loc_1FFFC + 3;
        if ( v24 != (char *)&loc_1FFFC + 3 )
          v26 = v23 > v25;
        if ( v26 )
        {
          v14 = 0;
          sub_D0048(20, 350, 267, "ssl/d1_lib.c", 642);
          goto LABEL_20;
        }
        goto LABEL_54;
      }
LABEL_50:
      v25 = (unsigned int)v24;
      goto LABEL_51;
    }
    v24 = *(char **)a1[1];
    if ( v24 != (char *)256 )
    {
      v23 = 65280;
      goto LABEL_50;
    }
LABEL_54:
    if ( v19 - 2 <= 0x20
      || (v27 = *(unsigned __int8 *)(v9 + 59), v28 = v19 - 35, v29 = v9 + 60, v27 > v28)
      || (v30 = v28 - v27) == 0
      || (v31 = *(unsigned __int8 *)(v29 + v27), v32 = v27 + v29 + 1, v31 > v30 - 1) )
    {
      v13 = 653;
      goto LABEL_19;
    }
    if ( v31 )
    {
      v33 = *(int (__fastcall **)(int *, int))(a1[308] + 128);
      if ( !v33 )
      {
        sub_D0048(20, 350, 403, "ssl/d1_lib.c", 668);
        return -1;
      }
      if ( v33(a1, v32) )
      {
        v34 = (_WORD *)a1[32];
        v34[134] = 1;
        v34[132] = 1;
        v34[133] = 1;
        sub_7C634((int)(a1 + 404), v59);
        sub_8B878((int)a1, 0x2000);
        sub_95E30(a1);
        if ( sub_B6ECC(v4, 46, 0, a2) <= 0 )
          sub_B3698(a2);
        if ( sub_8126C(a1, v17, v59, v55) )
        {
          v14 = 1;
          goto LABEL_20;
        }
        return -1;
      }
    }
    v35 = *(int (__fastcall **)(int *, _BYTE *, unsigned int *))(a1[308] + 124);
    if ( !v35 || !v35(a1, v61, &v57) || v57 > 0xFF )
    {
      sub_D0048(20, 350, 400, "ssl/d1_lib.c", 700);
      return -1;
    }
    if ( *(_UNKNOWN **)a1[1] == (_UNKNOWN *)((char *)&loc_1FFFC + 3) )
      v36 = 65279;
    else
      v36 = *a1;
    v56 = v36;
    v37 = sub_8CD40((int)a1);
    if ( !sub_A82D4(v60, v53, v37 + 13, 0)
      || !sub_A8450(v60, v38, 22, 0, 1)
      || !sub_A8450(v60, v39, v56, 0, 2)
      || !sub_A851C(v60)
      || !sub_A8398(v60, 2)
      || !sub_A8450(v60, v40, 3, 0, 1)
      || !sub_A8450(v60, v41, 0, 0, 3)
      || !sub_A8450(v60, v42, 0, 0, 2)
      || !sub_A8450(v60, v43, 0, 0, 3)
      || !sub_A8398(v60, 3)
      || !sub_A0000((int)v60, (int)v61, v57)
      || !sub_A7EDC(v60)
      || !sub_A7EDC(v60)
      || !sub_A820C(v60, &v58)
      || !sub_A8054(v60) )
    {
      sub_D0048(20, 350, 68, "ssl/d1_lib.c", 763);
      sub_A8640(v60);
      return -1;
    }
    v44 = *(_BYTE *)(v53 + 24);
    *(_WORD *)(v53 + 14) = *(_WORD *)(v53 + 22);
    *(_BYTE *)(v53 + 16) = v44;
    v45 = (void (__fastcall *)(int, _DWORD, int, int, int, int *, int))a1[33];
    if ( v45 )
      v45(1, 0, 256, v9, 13, a1, a1[34]);
    v46 = sub_B3650();
    v47 = v46;
    if ( !v46 )
    {
      sub_D0048(20, 350, 65, "ssl/d1_lib.c", 785);
      goto LABEL_95;
    }
    if ( sub_B6ECC(v4, 46, 0, v46) > 0 )
      sub_B6ECC(v54, 44, 0, v47);
    sub_B3688(v47);
    v48 = sub_B69CC(v54, v53, v58);
  }
  while ( v48 >= v58 && sub_B6ECC(v54, 11, 0, 0) > 0 );
  if ( sub_B6708(v54, 8) )
  {
LABEL_95:
    v14 = 0;
    goto LABEL_20;
  }
  return -1;
}
