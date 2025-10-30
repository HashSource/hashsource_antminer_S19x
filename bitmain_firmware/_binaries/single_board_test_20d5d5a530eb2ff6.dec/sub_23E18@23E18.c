int __fastcall sub_23E18(unsigned int a1)
{
  unsigned int v2; // r4
  int v3; // r5
  unsigned int v4; // r3
  int v5; // lr
  int v6; // r2
  int v8; // lr
  unsigned int v9; // r3
  int v10; // r1
  int v11; // r2
  char *v12; // r10
  char *v13; // r3
  char *v14; // r2
  int v15; // lr
  char *v16; // r1
  int v17; // r11
  int v18; // t1
  int v19; // r2
  int v20; // r11
  int v21; // t1
  char *v22; // r0
  char *v23; // r3
  char *v24; // r10
  int v25; // r2
  int v26; // r1
  int v27; // t1
  int v28; // r11
  int v29; // r3
  int v30; // t1
  int v31; // r3
  int *v32; // r4
  _DWORD *v33; // r6
  int v34; // lr
  char *v35; // r10
  char *v36; // r3
  char *v37; // r1
  char *v38; // r2
  int v39; // r11
  int v40; // t1
  int v41; // r2
  int v42; // r11
  int v43; // t1
  char *v44; // r0
  char *v45; // r3
  char *v46; // r10
  int v47; // r2
  int v48; // r1
  int v49; // t1
  int v50; // r11
  int v51; // r3
  int v52; // t1
  int v53; // r3
  int v54; // r0
  int v55; // r1
  int v56; // r2
  int v57; // r3
  int *v58; // r4
  _DWORD *v59; // r6
  int v60; // r0
  int v61; // r1
  int v62; // r2
  int v63; // r3
  int v64; // r4
  char v65[52]; // [sp+0h] [bp-34h] BYREF

  v2 = 0;
  while ( 1 )
  {
    v3 = *(unsigned __int8 *)(dword_223680 + 89);
    if ( *(_BYTE *)(dword_223680 + 89) )
      break;
    v3 = *(unsigned __int8 *)(dword_223680 + 88);
    if ( *(_BYTE *)(dword_223680 + 88) )
    {
      LOWORD(v8) = (unsigned __int16)&unk_5FDA10;
      if ( dword_227094 )
      {
        HIWORD(v8) = (unsigned int)&unk_5FDA10 >> 16;
        v9 = 0;
        v10 = 1;
        do
        {
          v11 = (unsigned __int8)byte_2333A8[(_DWORD)&loc_40A50 * *(unsigned __int8 *)(v8 + 0xE84) + 265792 + v9];
          v9 = (unsigned __int8)(v9 + 1);
          if ( !v11 )
            v10 = 0;
        }
        while ( v9 < dword_227094 );
        if ( !v10 )
          goto LABEL_9;
      }
      else
      {
        HIWORD(v8) = (unsigned int)&unk_5FDA10 >> 16;
      }
      v12 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * *(unsigned __int8 *)(v8 + 0xE84) + 264774;
      if ( (_BYTE)dword_227094 )
      {
        v13 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * *(unsigned __int8 *)(v8 + 0xE84) + 264773;
        v14 = v13;
        v15 = -128;
        v16 = &v12[(unsigned __int8)(dword_227094 - 1)];
        do
        {
          v18 = *++v14;
          v17 = v18;
          if ( v15 < v18 )
            v15 = v17;
        }
        while ( v16 != v14 );
        v19 = 127;
        do
        {
          v21 = *++v13;
          v20 = v21;
          if ( v19 >= v21 )
            v19 = v20;
        }
        while ( v16 != v13 );
        if ( v15 - v19 < *(_DWORD *)(dword_223680 + 616) )
        {
          v22 = v12 - 1;
          v23 = v12 - 1;
          v24 = &v12[(unsigned __int8)(dword_227094 - 1)];
          v25 = 127;
          do
          {
            v27 = *++v23;
            v26 = v27;
            if ( v25 >= v27 )
              v25 = v26;
          }
          while ( v24 != v23 );
          if ( v25 <= 35 )
          {
            v28 = -128;
            do
            {
              v30 = *++v22;
              v29 = v30;
              if ( v28 < v30 )
                v28 = v29;
            }
            while ( v22 != v24 );
            v31 = sub_62120() ? 47 : 25;
            if ( v31 >= v28 )
            {
              sub_1E938(v65, 0x30u);
              LOWORD(v32) = (unsigned __int16)"Hashboard cool down, begin test ...";
              printf("%s ", v65);
              v33 = &unk_6070C4;
              printf("%s : Hashboard cool down, begin test ...\n", "wait_for_cool_down_x");
              goto LABEL_65;
            }
          }
        }
      }
    }
LABEL_9:
    ++v2;
    sleep(1u);
    sub_1E938(v65, 0x30u);
    printf("%s ", v65);
    printf("%s : Waiting for Hashboard cool down for %d seconds ...\n", "wait_for_cool_down_x", v2);
    snprintf(byte_6071C4, 0x100u, "Waiting for Hashboard cool down for %d seconds ...", v2);
    sub_3CC5C(byte_6071C4, v65);
    if ( v2 > a1 )
    {
      sub_1E938(v65, 0x30u);
      printf("%s ", v65);
      printf("%s : Wait for Hashboard cool down for %d seconds, break\n", "wait_for_cool_down_x", v2);
      snprintf(byte_6072C4, 0x100u, "Wait for Hashboard cool down for %d seconds, break", v2);
      sub_3CC5C(byte_6072C4, v65);
      return 0;
    }
  }
  if ( !dword_226084 )
    goto LABEL_9;
  v4 = 0;
  v5 = 1;
  do
  {
    v6 = (unsigned __int8)byte_2333A8[(_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 265784 + v4];
    v4 = (unsigned __int8)(v4 + 1);
    if ( !v6 )
      v5 = 0;
  }
  while ( v4 < dword_226084 );
  if ( !v5 )
    goto LABEL_9;
  v34 = -128;
  v35 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264770;
  v36 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264769;
  v37 = &v35[(unsigned __int8)(dword_226084 - 1)];
  v38 = v36;
  do
  {
    v40 = *++v38;
    v39 = v40;
    if ( v34 < v40 )
      v34 = v39;
  }
  while ( v38 != v37 );
  v41 = 127;
  do
  {
    v43 = *++v36;
    v42 = v43;
    if ( v41 >= v43 )
      v41 = v42;
  }
  while ( v36 != v37 );
  if ( *(_DWORD *)(dword_223680 + 616) <= v34 - v41 )
    goto LABEL_9;
  v44 = (char *)&unk_2337B0 + (_DWORD)&loc_40A50 * (unsigned __int8)byte_5FE894 + 264769;
  v45 = v44;
  v46 = &v35[(unsigned __int8)(dword_226084 - 1)];
  v47 = 127;
  do
  {
    v49 = *++v45;
    v48 = v49;
    if ( v47 >= v49 )
      v47 = v48;
  }
  while ( v45 != v46 );
  if ( v47 > 35 )
    goto LABEL_9;
  v50 = -128;
  do
  {
    v52 = *++v44;
    v51 = v52;
    if ( v50 < v52 )
      v50 = v51;
  }
  while ( v44 != v46 );
  v53 = sub_62120() ? 47 : 25;
  if ( v53 < v50 )
    goto LABEL_9;
  sub_1E938(v65, 0x30u);
  v33 = &unk_606FC4;
  printf("%s ", v65);
  LOWORD(v32) = 5732;
  printf("%s : Hashboard cool down, begin test ...\n", "wait_for_cool_down_x");
LABEL_65:
  HIWORD(v32) = (unsigned int)"Hashboard cool down, begin test ..." >> 16;
  v54 = *v32;
  v55 = v32[1];
  v56 = v32[2];
  v57 = v32[3];
  v58 = v32 + 4;
  *v33 = v54;
  v33[1] = v55;
  v33[2] = v56;
  v33[3] = v57;
  v59 = v33 + 4;
  v60 = *v58;
  v61 = v58[1];
  v62 = v58[2];
  v63 = v58[3];
  v64 = v58[4];
  *v59 = v60;
  v59[1] = v61;
  v59[2] = v62;
  v59[3] = v63;
  v59 += 4;
  *v59 = v64;
  sub_3CC5C(v59 - 8, v65);
  dword_21B3AC = 20;
  return v3;
}
