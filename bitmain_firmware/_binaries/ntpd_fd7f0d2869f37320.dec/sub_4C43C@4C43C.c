int __fastcall sub_4C43C(int a1, _DWORD *a2, int a3)
{
  int v5; // r0
  int (*v7)(); // r6
  const char *v8; // r3
  int v9; // r5
  int v10; // r9
  int v11; // r5
  _DWORD *v12; // r2
  int (*v13)(); // r7
  int v14; // r8
  const char *v16; // r1
  int v17; // r0
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r2
  int v22; // r12
  int v23; // lr
  int v24; // r1
  int v25; // r3
  int v26; // r9
  int v27; // r5
  int v28; // lr
  int v29; // r5
  int v30; // r1
  int v31; // r0
  int v32; // r12
  int v33; // r2
  int v35; // r6
  int v36; // r6
  int v37; // r1
  int v38; // r0
  char *v39; // r3
  int v41; // r2
  int v42; // r0
  int v43; // r2
  int v44; // r1
  _BOOL4 v45; // r3
  int v46; // r0
  int v47; // r0
  int v48; // r3
  int v49; // r1
  _BOOL4 v50; // r2
  int v51; // r7
  int v52; // r7
  char *s1c; // [sp+14h] [bp-78h]
  char *s1; // [sp+14h] [bp-78h]
  char *s1a; // [sp+14h] [bp-78h]
  char *s1b; // [sp+14h] [bp-78h]
  char *v57; // [sp+18h] [bp-74h]
  int v58; // [sp+1Ch] [bp-70h]
  int v59; // [sp+20h] [bp-6Ch]
  int v60; // [sp+24h] [bp-68h]
  int v61; // [sp+28h] [bp-64h]
  char v62[80]; // [sp+34h] [bp-58h] BYREF

  v5 = *(__int16 *)(a3 + 8);
  if ( v5 == 32 )
    v7 = *(int (**)())(a3 + 400);
  else
    v7 = (int (*)())a2[46];
  if ( v5 == 32 )
    v8 = (const char *)(a3 + 300);
  else
    v8 = (const char *)(a2 + 14);
  v9 = *(__int16 *)(a3 + 504);
  v10 = v9;
  v11 = 16 * v9;
  v12 = (int (**)())((char *)&off_B56E4[v10] + v11);
  v13 = (int (*)())v12[137];
  if ( v13 == v7 )
  {
    v14 = v12[138];
    v16 = (const char *)v12[135];
    if ( v14 == 6 && *(unsigned __int8 *)(a3 + 300) == *(unsigned __int8 *)v16 && *(__int16 *)(a3 + 406) <= 4 )
    {
      sub_4C054(a1, a3);
      ++*(_WORD *)(a3 + 406);
      return 0;
    }
    s1c = (char *)v8;
    v17 = strncmp(v8, v16, (size_t)v13);
    v8 = s1c;
    if ( !v17 )
    {
      sub_4B63C(a1, 4, "* Echoback");
      return 0;
    }
    if ( v13 != *(int (**)())((char *)&off_B56E4[v10 + 139] + v11) )
      goto LABEL_10;
  }
  else
  {
    v14 = v12[138];
    if ( (int (*)())v12[139] != v7 )
      goto LABEL_9;
  }
  if ( v14 == 1 )
  {
    v47 = sscanf(v8, "%4d%2d%2d", a3 + 24, a3 + 28, a3 + 32);
    if ( v47 == 3 )
    {
      v48 = *(_DWORD *)(a3 + 28);
      if ( (unsigned int)(*(_DWORD *)(a3 + 24) - 2000) <= 0x62 )
      {
        v49 = *(_DWORD *)(a3 + 32);
        if ( (unsigned int)(v48 - 1) <= 0xB && (unsigned int)(v49 - 1) <= 0x1E )
          return 0;
      }
      else
      {
        v49 = *(_DWORD *)(a3 + 32);
      }
    }
    else
    {
      v48 = *(_DWORD *)(a3 + 28);
      v49 = *(_DWORD *)(a3 + 32);
    }
    sub_6D00C(v62, 79, "# Invalid date : rc=%d year=%d month=%d day=%d", v47, *(_DWORD *)(a3 + 24), v48, v49);
    goto LABEL_25;
  }
  if ( v14 == 3 )
  {
    s1 = (char *)v8;
    v18 = strncmp(v8, " 0", 2u);
    v8 = s1;
    if ( v18 )
    {
      v19 = strncmp(s1, "+1", 2u);
      v8 = s1;
      if ( v19 )
      {
        v46 = strncmp(s1, "-1", 2u);
        v8 = s1;
        if ( v46 )
          goto LABEL_10;
      }
    }
    s1a = (char *)v8;
    if ( sscanf(v8, "%2d", a3 + 52) == 1 && (unsigned int)(*(_DWORD *)(a3 + 52) + 1) <= 2 )
      return 0;
    sub_6D00C(v62, 79, "# Invalid leap : leapsecond=[%s]", s1a);
LABEL_25:
    sub_4B63C(a1, 7, v62);
    *(_BYTE *)(a3 + 15) = 1;
    return 0;
  }
  if ( v14 != 2 )
  {
    if ( v7 != v13 )
    {
LABEL_9:
      if ( v14 == 6 )
      {
        sub_6D00C(v62, 79, "* Ignore replay : [%s]", v8);
        sub_4B63C(a1, 6, v62);
        return 0;
      }
    }
LABEL_10:
    *(_BYTE *)(a3 + 15) = 1;
    sub_6D00C(v62, 79, "# Unexpected reply : [%s]", v8);
    sub_4B63C(a1, 7, v62);
    return 0;
  }
  v20 = sscanf(v8, "%2d%2d%2d", a3 + 36, a3 + 40, a3 + 44);
  v21 = *(_DWORD *)(a3 + 36);
  v22 = *(_DWORD *)(a3 + 40);
  v23 = *(_DWORD *)(a3 + 44);
  if ( v20 != 3 || v21 > 23 || v22 > 59 || v23 > 60 )
  {
    sub_6D00C(v62, 79, "# Invalid time : rc=%d hour=%d minute=%d second=%d", v20, *(_DWORD *)(a3 + 36), v22, v23);
    sub_4B63C(a1, 7, v62);
    v21 = *(_DWORD *)(a3 + 36);
    v22 = *(_DWORD *)(a3 + 40);
    v23 = *(_DWORD *)(a3 + 44);
    *(_BYTE *)(a3 + 15) = 1;
  }
  v24 = *(_DWORD *)(a3 + 56);
  *(_DWORD *)(a3 + 4 * v24 + 60) = 60 * (60 * v21 + v22) + v23;
  *(_DWORD *)(a3 + 56) = v24 + 1;
  if ( v24 != 5 )
    return 0;
  v25 = *(unsigned __int8 *)(a3 + 15);
  if ( *(_BYTE *)(a3 + 15) )
    return 0;
  v26 = *(_DWORD *)(a1 + 76);
  if ( v26 == 100 )
  {
    *(_DWORD *)(a3 + 48) = v25;
    v27 = 1;
    goto LABEL_54;
  }
  v28 = a3 + 487;
  *(_WORD *)(a3 + 494) = v25;
  v29 = *(__int16 *)(a3 + 406);
  v30 = v25;
  v31 = a3 + 487;
  v32 = a3;
  v33 = a3;
  s1b = (char *)v25;
  v57 = (char *)v25;
  v59 = v25;
  v58 = v25;
  v61 = v25;
  v60 = v25;
  while ( v29 > v25 )
  {
    if ( *(unsigned __int8 *)++v31 )
      goto LABEL_44;
    v35 = *(_DWORD *)(v33 + 448);
    if ( v35 > 0 || !v35 && *(int *)(v33 + 452) > 700000 )
      goto LABEL_44;
    if ( v30 )
    {
      if ( v35 < v60 )
      {
        v51 = *(_DWORD *)(v33 + 452);
LABEL_94:
        v61 = v51;
        v60 = *(_DWORD *)(v33 + 448);
        s1b = (char *)v25;
        goto LABEL_75;
      }
      if ( v35 == v60 )
      {
        v51 = *(_DWORD *)(v33 + 452);
        if ( v51 < v61 )
          goto LABEL_94;
      }
      if ( v35 <= v58 )
      {
        if ( v35 != v58 )
          goto LABEL_75;
        v52 = *(_DWORD *)(v33 + 452);
        if ( v52 <= v59 )
          goto LABEL_75;
      }
      else
      {
        v52 = *(_DWORD *)(v33 + 452);
      }
      v59 = v52;
      v58 = *(_DWORD *)(v33 + 448);
      v57 = (char *)v25;
    }
    else
    {
      v60 = *(_DWORD *)(v33 + 448);
      v58 = v60;
      v59 = *(_DWORD *)(v33 + 452);
      v57 = (char *)v25;
      s1b = (char *)v25;
      v61 = v59;
    }
LABEL_75:
    v30 = (unsigned __int16)(v30 + 1);
    *(_WORD *)(a3 + 494) = v30;
LABEL_44:
    ++v25;
    v33 += 8;
    if ( v25 == 5 )
      break;
  }
  v36 = (__int16)v30;
  if ( (__int16)v30 <= 1 )
    goto LABEL_84;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  do
  {
    if ( v29 <= (int)v39 )
      break;
    if ( !*(unsigned __int8 *)++v28 )
    {
      v41 = *(_DWORD *)(v32 + 448);
      if ( v41 <= 0 && (v41 || *(int *)(v32 + 452) <= 700000) )
      {
        if ( v36 == 2 )
          goto LABEL_83;
        if ( v39 != v57 )
        {
          v50 = s1b == v39;
          if ( v36 <= 3 )
            v50 = 0;
          if ( !v50 )
          {
LABEL_83:
            ++v37;
            v38 += *(_DWORD *)(v32 + 452);
          }
        }
      }
    }
    ++v39;
    v32 += 8;
  }
  while ( v39 != &byte_5 );
  if ( v37 && (v42 = sub_8CE58(v38, v37) * (v26 - 100), *(_DWORD *)(a3 + 48) = v42 / 100000, v42 / 100000 >= 0) )
  {
    v27 = 1;
  }
  else
  {
LABEL_84:
    v27 = 0;
    *(_DWORD *)(a3 + 48) = 0;
  }
LABEL_54:
  v43 = *(_DWORD *)(a3 + 72);
  v44 = *(_DWORD *)(a3 + 68);
  v45 = v43 - 15 <= v44;
  if ( v43 < v44 )
    v45 = 0;
  if ( v45 && v43 + 1 == *(_DWORD *)(a3 + 76) && v43 + 2 == *(_DWORD *)(a3 + 80) )
  {
    sub_4C15C(a1, a2, (_DWORD *)a3);
    if ( *(_DWORD *)(a1 + 76) != 100 )
    {
      if ( v27 )
      {
        sub_6D00C(
          v62,
          80,
          "* Delay adjustment : %d mSec. ( valid=%hd/%d )",
          *(_DWORD *)(a3 + 48),
          *(__int16 *)(a3 + 494),
          5);
        sub_4B63C(a1, 4, v62);
      }
      else
      {
        sub_6D00C(v62, 80, "* Delay adjustment : None ( valid=%hd/%d )", *(__int16 *)(a3 + 494), 5);
        sub_4B63C(a1, 7, v62);
      }
    }
  }
  return 0;
}
