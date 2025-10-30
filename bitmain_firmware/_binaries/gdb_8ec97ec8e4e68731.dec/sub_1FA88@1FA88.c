int __fastcall sub_1FA88(int a1, int a2, int a3, int a4, char *a5, char *a6)
{
  char *v10; // r6
  char *v11; // r7
  int v12; // r11
  int v13; // r1
  int v14; // r2
  int result; // r0
  int v16; // r8
  int v17; // r5
  int v18; // r2
  int v19; // r3
  bool v20; // zf
  int v21; // r1
  unsigned int v22; // r5
  int v23; // r8
  char *v24; // r2
  int v25; // r5
  int v26; // r7
  int v27; // r2
  int v28; // r4
  bool v29; // zf
  int v30; // r3
  int v31; // r5
  int v32; // r1
  int v33; // r3
  int v34; // r1
  int v35; // r5
  int v36; // r4
  int v37; // r11
  int v38; // r0
  int v39; // r3
  int v40; // r9
  int v41; // r10
  int v42; // r0
  int v43; // r3
  int v44; // r0
  __int64 v45; // r0
  int v46; // r3
  int v47; // r3
  int v48; // r0
  int v49; // r0
  int v50; // r3
  unsigned int v51; // r3
  int v52; // r5
  int v53; // r1
  size_t v54; // r2
  int v55; // r5
  int v56; // r10
  size_t v57; // r2
  int v58; // r3
  __int64 v59; // r0
  _UNKNOWN **v60; // r2
  int v61; // [sp+8h] [bp-24h]
  int v62; // [sp+8h] [bp-24h]
  int v63; // [sp+Ch] [bp-20h]
  int v64; // [sp+14h] [bp-18h]
  int dest[4]; // [sp+18h] [bp-14h] BYREF

  v10 = a5;
  v11 = a6;
  v12 = sub_163E78(a1);
  if ( a2 )
    v13 = sub_26BC70(a2);
  else
    v13 = 0;
  if ( sub_1FA24(a1, v13) )
  {
    v35 = 0;
    dest[0] = 0;
    v63 = ((int (__fastcall *)(int, int *))loc_1B85C)(a3, dest);
    if ( (unsigned int)(v63 - 1) <= 3 )
    {
      v36 = 0;
      v61 = dest[0];
      v37 = sub_19E9C(dest[0]);
      v38 = sub_19EF4(v61);
      v39 = a4;
      v62 = v38;
      v40 = a1;
      v41 = v39;
      do
      {
        if ( v37 == 113 )
        {
          if ( a6 )
            sub_1B3DC(v40, v41, v36, (int)&a6[v35]);
          if ( a5 )
            sub_1B1C8(v40, v41, v36, (int)&a5[v35]);
        }
        else
        {
          sub_93170(dest, 4, "%c%d", v37, v36);
          strlen((const char *)dest);
          v42 = sub_257E94(v40, (char *)dest);
          v43 = v42;
          if ( a6 )
          {
            v64 = v42;
            sub_1DE614(v41, v42, &a6[v35], v42);
            v43 = v64;
          }
          if ( a5 )
            sub_1DE030(v41, v43, &a5[v35]);
        }
        ++v36;
        v35 += v62;
      }
      while ( v36 != v63 );
      return 0;
    }
  }
  v14 = **(char **)(a3 + 24);
  if ( (unsigned __int8)(v14 - 2) > 2u )
  {
    if ( v14 != 22 )
      goto LABEL_10;
  }
  else if ( !*(_DWORD *)(v12 + 72) )
  {
    return 1;
  }
  if ( sub_1B62C(a1, a3) )
    return 1;
LABEL_10:
  if ( a6 )
  {
    v16 = sub_1DD58C(a4);
    v17 = ((int (*)(void))loc_165BB8)();
    v18 = **(char **)(a3 + 24);
    if ( v18 == 9 )
    {
      v48 = sub_163E78(v16);
      switch ( *(_DWORD *)(v48 + 4) )
      {
        case 1:
        case 3:
        case 4:
          sub_1DE614(a4, 0, a6, *(_DWORD *)(v48 + 4) - 1);
          v51 = *(_DWORD *)(a3 + 20);
          if ( v51 > 4 )
            sub_1DE614(a4, 1, a6 + 4, v51);
          goto LABEL_20;
        case 2:
          v49 = sub_1BC3C(v16);
          sub_2529D0(a6, a3, dest, v49);
          sub_1DE614(a4, 16, dest, v50);
          goto LABEL_20;
        default:
LABEL_74:
          v59 = sub_94700("arm-tdep.c", 8126, "arm_store_return_value: Floating point model not supported");
          if ( HIDWORD(v59) == 24 )
            result = v60 == (_UNKNOWN **)&unk_46DAD4
                  || v60 == (_UNKNOWN **)&unk_46DAEC
                  || v60 == (_UNKNOWN **)&unk_46DAF4
                  || &off_46DACC == v60;
          else
            result = sub_1E0754(v59, HIDWORD(v59), v60, v60);
          break;
      }
      return result;
    }
    v19 = *(_DWORD *)(a3 + 20);
    v20 = v18 == 8;
    if ( v18 != 8 )
      v20 = (v18 & 0xFFFFFFFB) == 1;
    if ( v20 || (unsigned __int8)(v18 - 18) <= 3u )
    {
      if ( (unsigned int)v19 <= 4 )
      {
        v45 = sub_26D134(a3, a6);
        sub_15C2E8(dest, 4, v17, v46, v45, HIDWORD(v45));
        sub_1DE614(a4, 0, dest, v47);
      }
      else if ( v19 > 0 )
      {
        v21 = 0;
        v22 = ((unsigned int)(v19 - 1) >> 2) + 1;
        do
        {
          v23 = v21 + 1;
          v24 = v11;
          v11 += 4;
          sub_1DE614(a4, v21, v24, v19);
          v21 = v23;
        }
        while ( v22 != v23 );
      }
    }
    else
    {
      v55 = *(_DWORD *)(a3 + 20);
      if ( v19 > 0 )
      {
        v56 = 0;
        do
        {
          if ( v55 >= 4 )
            v57 = 4;
          else
            v57 = v55;
          v55 -= 4;
          memcpy(dest, v11, v57);
          v11 += 4;
          sub_1DE614(a4, v56++, dest, v58);
        }
        while ( v55 > 0 );
      }
    }
  }
LABEL_20:
  if ( !a5 )
    return 0;
  v25 = sub_1DD58C(a4);
  v26 = ((int (*)(void))loc_165BB8)();
  v27 = **(char **)(a3 + 24);
  if ( v27 != 9 )
  {
    v28 = *(_DWORD *)(a3 + 20);
    v29 = v27 == 8;
    if ( v27 != 8 )
      v29 = (v27 & 0xFFFFFFFB) == 1;
    if ( v29 )
    {
      v30 = 1;
    }
    else
    {
      v30 = 0;
      if ( (unsigned __int8)(v27 - 18) > 3u )
      {
        if ( v28 > 0 )
        {
          v52 = 0;
          do
          {
            v53 = v52++;
            sub_1DE030(a4, v53, dest);
            if ( v28 >= 4 )
              v54 = 4;
            else
              v54 = v28;
            v28 -= 4;
            memcpy(v10, dest, v54);
            v10 += 4;
          }
          while ( v28 > 0 );
        }
        return 0;
      }
    }
    if ( v28 > 0 )
    {
      v31 = 0;
      do
      {
        v32 = v31++;
        ((void (__fastcall *)(int, int, int *, int))loc_1DFAFC)(a4, v32, dest, v30);
        if ( v28 >= 4 )
          v34 = 4;
        else
          v34 = v28;
        v28 -= 4;
        sub_15C34C(v10, v34, v26, v33, dest[0], dest[1]);
        v10 += 4;
      }
      while ( v28 > 0 );
    }
    return 0;
  }
  switch ( *(_DWORD *)(sub_163E78(v25) + 4) )
  {
    case 1:
    case 3:
    case 4:
      sub_1DE030(a4, 0, a5);
      if ( *(_DWORD *)(a3 + 20) <= 4u )
        return 0;
      sub_1DE030(a4, 1, a5 + 4);
      result = 0;
      break;
    case 2:
      sub_1DE030(a4, 16, dest);
      v44 = sub_1BC3C(v25);
      sub_2529D0(dest, v44, a5, a3);
      result = 0;
      break;
    default:
      sub_94700("arm-tdep.c", 7922, "arm_extract_return_value: Floating point model not supported");
      goto LABEL_74;
  }
  return result;
}
