int __fastcall sub_A2F90(_DWORD *a1, int a2, int a3)
{
  int v6; // r8
  int *v7; // r2
  int v8; // lr
  char **v9; // r4
  int v10; // r3
  _BOOL4 v11; // r2
  char *v12; // r3
  bool v13; // zf
  char *v14; // r3
  bool v15; // zf
  int v16; // r3
  _DWORD *v17; // r0
  int v18; // r3
  _BOOL4 v20; // r1
  int v21; // r0
  int v22; // r0
  unsigned __int16 *v23; // r3
  int v24; // r2
  int v25; // r7
  unsigned __int16 *v26; // r1
  int v27; // r3
  int *v28; // r3
  int v29; // r0
  int v30; // r0
  int v31; // r0
  char *v32; // r3
  bool v33; // zf
  int v34; // r2
  int v35; // r3
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r1
  int v40; // r3
  int v41; // r2
  int v42; // r1
  int v43; // r3
  _BOOL4 v44; // r1
  int v45; // r9
  int v46; // r8
  int v47; // r1
  int *v48; // r3
  int v49; // r3
  _BOOL4 v50; // r2
  int v51; // r0
  int v52; // r0
  int v53; // r1
  unsigned __int8 *v54; // r3
  int v55; // r2
  unsigned __int8 *v56; // r2
  unsigned __int8 *v57; // r3
  int v58; // t1
  int v59; // [sp+4h] [bp-20h]
  unsigned __int16 *v60; // [sp+10h] [bp-14h] BYREF
  int v61; // [sp+14h] [bp-10h] BYREF
  char *v62; // [sp+18h] [bp-Ch] BYREF
  int v63; // [sp+1Ch] [bp-8h] BYREF

  v61 = 0;
  v6 = sub_DA19C(a3);
  if ( v6 != -1 )
  {
    v7 = (int *)a1[1];
    v8 = *(_DWORD *)(v7[25] + 48) & 8;
    if ( !v8 )
    {
      v20 = *v7 >= 772;
      if ( *v7 == 0x10000 )
        v20 = 0;
      if ( v20 )
      {
        if ( v6 == 116 )
        {
          v6 = 0;
          sub_95494(a1, 47, 333, 370, (int)"ssl/t1_lib.c", 1041);
          return v6;
        }
        if ( v6 == 6 )
          v6 = 912;
      }
    }
    v9 = &off_202A94;
    while ( *((unsigned __int16 *)v9 + 2) != a2 )
    {
      v9 += 8;
      if ( v9 == &off_202DD4 )
        goto LABEL_17;
    }
    if ( !v8 )
    {
      v10 = *v7;
      v11 = *v7 != 0x10000;
      if ( v10 < 772 )
        v11 = 0;
      if ( v11 )
      {
        v12 = v9[2];
        v13 = v12 == (char *)675;
        if ( v12 != (char *)675 )
          v13 = v12 == (char *)64;
        if ( v13 )
          goto LABEL_17;
      }
    }
    v14 = v9[4];
    if ( (char *)v6 != v14 )
    {
      v15 = v14 == (char *)912;
      if ( v14 == (char *)912 )
        v15 = v6 == 6;
      if ( !v15 )
      {
LABEL_17:
        v16 = 1058;
LABEL_18:
        v59 = v16;
        v17 = a1;
        v18 = 370;
LABEL_19:
        v6 = 0;
        sub_95494(v17, 47, 333, v18, (int)"ssl/t1_lib.c", v59);
        return v6;
      }
    }
    v21 = sub_DA19C(a3);
    if ( !sub_85538(v21, (int *)&v62) || v9[5] != v62 )
    {
      v16 = 1065;
      goto LABEL_18;
    }
    if ( v6 != 408 )
    {
      if ( (*(_DWORD *)(a1[257] + 16) & 0x30000) != 0 )
      {
        v27 = 1111;
        goto LABEL_52;
      }
LABEL_33:
      v22 = sub_A2E74((int)a1, 1, &v60);
      if ( v22 )
      {
        if ( *v60 != a2 )
        {
          v23 = v60 + 1;
          v24 = 0;
          do
          {
            ++v24;
            v26 = v23;
            if ( v22 == v24 )
            {
              v60 = v23;
              goto LABEL_40;
            }
            v25 = *v23++;
          }
          while ( v25 != a2 );
          v60 = v26;
        }
LABEL_42:
        v6 = sub_A2D04((int)v9, &v61);
        if ( !v6 )
        {
          sub_95494(a1, 40, 333, 368, (int)"ssl/t1_lib.c", 1131);
          return v6;
        }
        v63 = 0;
        if ( sub_A2D04((int)v9, &v63) )
        {
          if ( v63 )
          {
            if ( 4 * sub_D8C78(v63) )
              goto LABEL_46;
          }
          else
          {
            v43 = *((unsigned __int16 *)v9 + 2);
            if ( v43 == 2055 || v43 == 2056 )
            {
LABEL_46:
              if ( v61 )
                sub_D8C70(v61);
              if ( sub_854EC((int)a1, (int)&loc_5000C + 1) )
              {
                v6 = 1;
                *(_DWORD *)(a1[31] + 632) = v9;
                return v6;
              }
            }
          }
        }
        v27 = 1146;
        goto LABEL_52;
      }
LABEL_40:
      if ( v9[2] == (char *)64 && (*(_DWORD *)(a1[257] + 16) & 0x30001) == 0 )
        goto LABEL_42;
      v27 = 1126;
LABEL_52:
      sub_95494(a1, 40, 333, 370, (int)"ssl/t1_lib.c", v27);
      return 0;
    }
    if ( sub_DA19C(a3) != 408 )
    {
LABEL_58:
      v28 = (int *)a1[1];
      if ( (*(_DWORD *)(v28[25] + 48) & 8) != 0 )
        goto LABEL_59;
      v44 = *v28 != 0x10000;
      if ( *v28 < 772 )
        v44 = 0;
      if ( !v44 )
      {
LABEL_59:
        if ( (*(_DWORD *)(a1[257] + 16) & 0x30000) == 0 )
        {
LABEL_65:
          if ( (*(_DWORD *)(v28[25] + 48) & 8) != 0 )
            goto LABEL_76;
          v34 = *v28;
          v35 = *v28 == 0x10000;
          if ( v34 < 772 )
            v35 |= 1u;
          if ( v35 )
          {
LABEL_76:
            v36 = sub_DA1F4(a3);
            if ( v36 )
            {
              v37 = sub_C59B8(v36);
              v38 = sub_C6284(v37);
              v39 = 0;
              v40 = 0;
              while ( 1 )
              {
                v41 = *(_DWORD *)((char *)&unk_1A9C40 + v39);
                ++v40;
                v39 += 12;
                if ( v38 == v41 )
                  break;
                if ( v40 == 30 )
                  goto LABEL_81;
              }
              v42 = (unsigned __int16)v40;
            }
            else
            {
LABEL_81:
              v42 = 0;
            }
            v6 = sub_A2A78(a1, v42, 1);
            if ( !v6 )
            {
              sub_95494(a1, 47, 333, 378, (int)"ssl/t1_lib.c", 1095);
              return v6;
            }
            if ( (*(_DWORD *)(a1[257] + 16) & 0x30000) != 0 && (a2 & 0xFEFF) != 0x403 )
            {
              v27 = 1104;
              goto LABEL_52;
            }
          }
          goto LABEL_33;
        }
      }
LABEL_60:
      v29 = sub_DA1F4(a3);
      v30 = sub_C59B8(v29);
      v31 = sub_C6284(v30);
      v32 = v9[7];
      v33 = v32 == 0;
      if ( v32 )
        v33 = v31 == (_DWORD)v32;
      if ( !v33 )
      {
        v59 = 1087;
        v17 = a1;
        v18 = 378;
        goto LABEL_19;
      }
      v28 = (int *)a1[1];
      goto LABEL_65;
    }
    v45 = sub_DA1F4(a3);
    v46 = sub_C59B8(v45);
    if ( sub_C5BA8(v45) == 4 )
    {
      v53 = 0;
    }
    else
    {
      v48 = (int *)a1[1];
      if ( (*(_DWORD *)(v48[25] + 48) & 8) == 0 )
      {
        v49 = *v48;
        v50 = v49 >= 772;
        if ( v49 == 0x10000 )
          v50 = 0;
        if ( v50 )
          goto LABEL_60;
      }
      v51 = sub_C620C(v46, v47);
      v52 = sub_C6210(v51);
      if ( v52 == 406 )
      {
        v53 = 1;
      }
      else
      {
        if ( v52 != 407 )
          goto LABEL_95;
        v53 = 2;
      }
    }
    v54 = (unsigned __int8 *)a1[347];
    if ( !v54 )
      goto LABEL_58;
    v55 = a1[346];
    if ( v55 )
    {
      if ( *v54 == v53 )
        goto LABEL_58;
      v56 = &v54[v55];
      v57 = v54 + 1;
      while ( v57 != v56 )
      {
        v58 = *v57++;
        if ( v58 == v53 )
          goto LABEL_58;
      }
    }
LABEL_95:
    v59 = 1076;
    v17 = a1;
    v18 = 162;
    goto LABEL_19;
  }
  return v6;
}
