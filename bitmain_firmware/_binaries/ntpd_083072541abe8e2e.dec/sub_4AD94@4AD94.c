int __fastcall sub_4AD94(int a1, _DWORD *a2, int a3)
{
  const char *v6; // r9
  size_t v7; // r6
  int v8; // r5
  int (**v9)(); // r2
  int (*v10)(); // r3
  int (*v11)(); // r7
  const char *v13; // r1
  int v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r12
  int v19; // r3
  int v20; // r5
  unsigned __int8 *v21; // r12
  unsigned __int8 *v22; // r1
  int v23; // lr
  int v24; // r9
  int v25; // r2
  int v26; // r3
  int v28; // r0
  int v29; // r6
  int v30; // r1
  int v31; // r0
  int v32; // r3
  int v33; // r6
  int v35; // r7
  _BOOL4 v36; // r7
  int v37; // r6
  int v38; // r3
  int v39; // r2
  int v40; // r1
  _BOOL4 v41; // r3
  int v42; // r0
  __int64 v43; // r2
  int v44; // r1
  int v45; // r7
  int v46; // r7
  int (*v47)(); // [sp+14h] [bp-78h]
  int v48; // [sp+14h] [bp-78h]
  int v49; // [sp+18h] [bp-74h]
  int v50; // [sp+20h] [bp-6Ch]
  int v51; // [sp+24h] [bp-68h]
  int v52; // [sp+28h] [bp-64h]
  char v53[80]; // [sp+34h] [bp-58h] BYREF

  if ( *(_WORD *)(a3 + 8) == 32 )
  {
    v6 = (const char *)(a3 + 300);
    v7 = *(_DWORD *)(a3 + 400);
  }
  else
  {
    v6 = (const char *)(a2 + 14);
    v7 = a2[46];
  }
  v8 = *(__int16 *)(a3 + 504);
  v9 = &off_B46E4[5 * v8];
  v10 = v9[137];
  v11 = v9[138];
  if ( v10 == (int (*)())v7 )
  {
    v13 = (const char *)v9[135];
    if ( v11 == (int (*)())&byte_6
      && *(unsigned __int8 *)(a3 + 300) == *(unsigned __int8 *)v13
      && *(__int16 *)(a3 + 406) <= 4 )
    {
      sub_4A9A4(a1, a3);
      ++*(_WORD *)(a3 + 406);
      return 0;
    }
    v47 = v9[137];
    v14 = strncmp(v6, v13, v7);
    v10 = v47;
    if ( !v14 )
    {
      sub_4A084(a1, 4, "* Echoback");
      return 0;
    }
    if ( v47 != off_B46E4[5 * v8 + 139] )
      goto LABEL_7;
  }
  else if ( (int (*)())v7 != v9[139] )
  {
    goto LABEL_6;
  }
  if ( v11 == (int (*)())((char *)&dword_0 + 1) )
  {
    v42 = sscanf(v6, "%4d%2d%2d", a3 + 24, a3 + 28, a3 + 32);
    v43 = *(_QWORD *)(a3 + 24);
    v44 = *(_DWORD *)(a3 + 32);
    if ( v42 == 3
      && (unsigned int)(v43 - 2000) <= 0x62
      && (unsigned int)(HIDWORD(v43) - 1) <= 0xB
      && (unsigned int)(v44 - 1) <= 0x1E )
    {
      return 0;
    }
    sub_6C054(v53, 79, "# Invalid date : rc=%d year=%d month=%d day=%d", v42, (_DWORD)v43, HIDWORD(v43), v44);
    goto LABEL_23;
  }
  if ( v11 == (int (*)())((char *)&dword_0 + 3) )
  {
    if ( strncmp(v6, " 0", 2u) && strncmp(v6, "+1", 2u) && strncmp(v6, "-1", 2u) )
      goto LABEL_7;
    if ( sscanf(v6, "%2d", a3 + 52) == 1 && (unsigned int)(*(_DWORD *)(a3 + 52) + 1) <= 2 )
      return 0;
    sub_6C054(v53, 79, "# Invalid leap : leapsecond=[%s]", v6);
LABEL_23:
    sub_4A084(a1, 7, v53);
    *(_BYTE *)(a3 + 15) = 1;
    return 0;
  }
  if ( v11 != (int (*)())((char *)&dword_0 + 2) )
  {
    if ( v10 != (int (*)())v7 )
    {
LABEL_6:
      if ( v11 == (int (*)())&byte_6 )
      {
        sub_6C054(v53, 79, "* Ignore replay : [%s]", v6);
        sub_4A084(a1, 6, v53);
        return 0;
      }
    }
LABEL_7:
    *(_BYTE *)(a3 + 15) = 1;
    sub_6C054(v53, 79, "# Unexpected reply : [%s]", v6);
    sub_4A084(a1, 7, v53);
    return 0;
  }
  v15 = sscanf(v6, "%2d%2d%2d", a3 + 36, a3 + 40, a3 + 44);
  v16 = *(_DWORD *)(a3 + 36);
  v17 = *(_DWORD *)(a3 + 40);
  v18 = *(_DWORD *)(a3 + 44);
  if ( v15 != 3 || v16 > 23 || v17 > 59 || v18 > 60 )
  {
    sub_6C054(v53, 79, "# Invalid time : rc=%d hour=%d minute=%d second=%d", v15, v16, *(_DWORD *)(a3 + 40), v18);
    sub_4A084(a1, 7, v53);
    v16 = *(_DWORD *)(a3 + 36);
    v17 = *(_DWORD *)(a3 + 40);
    v18 = *(_DWORD *)(a3 + 44);
    *(_BYTE *)(a3 + 15) = 1;
  }
  v19 = *(_DWORD *)(a3 + 56);
  *(_DWORD *)(a3 + 4 * v19 + 60) = v18 + 60 * (v17 + 60 * v16);
  *(_DWORD *)(a3 + 56) = v19 + 1;
  if ( v19 != 5 )
    return 0;
  v20 = *(unsigned __int8 *)(a3 + 15);
  if ( *(_BYTE *)(a3 + 15) )
    return 0;
  if ( *(_DWORD *)(a1 + 76) == 100 )
  {
    *(_DWORD *)(a3 + 48) = v20;
    v20 = 1;
    goto LABEL_60;
  }
  v21 = (unsigned __int8 *)(a3 + 488);
  *(_WORD *)(a3 + 494) = v20;
  v22 = (unsigned __int8 *)(a3 + 488);
  v23 = *(__int16 *)(a3 + 406);
  v24 = v20;
  v25 = v20;
  v26 = v20;
  v49 = v20;
  v48 = v20;
  v51 = v20;
  v50 = v20;
  v52 = v20;
  while ( v23 > v26 )
  {
    if ( *v22++ )
      goto LABEL_42;
    v28 = a3 + 8 * v26;
    v29 = *(_DWORD *)(v28 + 448);
    if ( v29 > 0 || !v29 && *(int *)(v28 + 452) > 700000 )
      goto LABEL_42;
    if ( v25 )
    {
      if ( v29 < v24 )
      {
        v45 = *(_DWORD *)(v28 + 452);
LABEL_81:
        v52 = v45;
        v24 = *(_DWORD *)(v28 + 448);
        v48 = v26;
        goto LABEL_41;
      }
      if ( v29 == v24 )
      {
        v45 = *(_DWORD *)(v28 + 452);
        if ( v45 < v52 )
          goto LABEL_81;
      }
      if ( v29 <= v50 )
      {
        if ( v29 != v50 )
          goto LABEL_41;
        v46 = *(_DWORD *)(v28 + 452);
        if ( v46 <= v51 )
          goto LABEL_41;
      }
      else
      {
        v46 = *(_DWORD *)(v28 + 452);
      }
      v50 = *(_DWORD *)(v28 + 448);
      v51 = v46;
      v49 = v26;
    }
    else
    {
      v24 = *(_DWORD *)(v28 + 448);
      v50 = v24;
      v49 = v26;
      v51 = *(_DWORD *)(v28 + 452);
      v48 = v26;
      v52 = v51;
    }
LABEL_41:
    v25 = (__int16)(v25 + 1);
    *(_WORD *)(a3 + 494) = v25;
LABEL_42:
    if ( ++v26 == 5 )
      break;
  }
  if ( v25 <= 1 )
    goto LABEL_82;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  v33 = a3;
  do
  {
    if ( v23 <= v32 )
      break;
    if ( !*v21++ )
    {
      v35 = *(_DWORD *)(v33 + 448);
      if ( v35 <= 0 && (v35 || *(int *)(v33 + 452) <= 700000) )
      {
        if ( v25 == 2 )
          goto LABEL_55;
        if ( v49 != v32 )
        {
          v36 = v25 > 3;
          if ( v48 != v32 )
            v36 = 0;
          if ( !v36 )
          {
LABEL_55:
            ++v30;
            v31 += *(_DWORD *)(v33 + 452);
          }
        }
      }
    }
    ++v32;
    v33 += 8;
  }
  while ( v32 != 5 );
  if ( v30
    && (v37 = *(_DWORD *)(a1 + 76),
        v38 = sub_8B908(v31, v30) * (v37 - 100) / 100000,
        *(_DWORD *)(a3 + 48) = v38,
        v38 >= 0) )
  {
    v20 = 1;
  }
  else
  {
LABEL_82:
    *(_DWORD *)(a3 + 48) = 0;
  }
LABEL_60:
  v39 = *(_DWORD *)(a3 + 72);
  v40 = *(_DWORD *)(a3 + 68);
  v41 = v39 - 15 <= v40;
  if ( v39 < v40 )
    v41 = 0;
  if ( v41 && v39 + 1 == *(_DWORD *)(a3 + 76) && v39 + 2 == *(_DWORD *)(a3 + 80) )
  {
    sub_4AAB4(a1, a2, (_DWORD *)a3);
    if ( *(_DWORD *)(a1 + 76) != 100 )
    {
      if ( v20 )
      {
        sub_6C054(
          v53,
          80,
          "* Delay adjustment : %d mSec. ( valid=%hd/%d )",
          *(_DWORD *)(a3 + 48),
          *(__int16 *)(a3 + 494),
          5);
        sub_4A084(a1, 4, v53);
      }
      else
      {
        sub_6C054(v53, 80, "* Delay adjustment : None ( valid=%hd/%d )", *(__int16 *)(a3 + 494), 5);
        sub_4A084(a1, 7, v53);
      }
    }
  }
  return 0;
}
