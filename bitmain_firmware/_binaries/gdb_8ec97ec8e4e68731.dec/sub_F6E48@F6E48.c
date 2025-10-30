void __fastcall sub_F6E48(_DWORD *a1, char *a2, int a3)
{
  void *v5; // r5
  int v6; // r4
  void *v7; // r5
  void *v8; // r4
  int v9; // r0
  char *v10; // r2
  int v11; // r4
  int v12; // r3
  int v13; // r1
  int v14; // r5
  bool v15; // zf
  int v16; // r3
  char *v17; // r8
  char *v18; // r6
  char *v19; // r4
  bool v20; // zf
  unsigned __int8 *v21; // r2
  const char *v22; // r0
  char *v23; // r0
  unsigned __int8 *v24; // r2
  char *v25; // r4
  size_t v26; // r9
  char *v27; // r8
  char *v28; // r3
  int v29; // r2
  char *v30; // r1
  int v31; // t1
  char **v32; // r5
  char **v33; // r7
  void **v34; // r4
  void **v35; // r5
  void *v36; // r0
  void *v37; // t1
  int v38; // r3
  unsigned __int8 *v39; // r0
  size_t v40; // r5
  void **v41; // r7
  void **v42; // r6
  void **v43; // r1
  void **v44; // r5
  void *v45; // r0
  void *v46; // t1
  void **v47; // r5
  void **v48; // r6
  void *v49; // r0
  void *v50; // t1
  int v51; // r4
  char *v52; // t1
  size_t v53; // r0
  size_t v54; // r0
  void **v55; // r4
  void *v56; // r0
  void *v57; // t1
  int v59; // [sp+Ch] [bp-28h]
  void *ptr; // [sp+10h] [bp-24h] BYREF
  int v61; // [sp+14h] [bp-20h] BYREF
  void *v62; // [sp+18h] [bp-1Ch] BYREF
  void **v63; // [sp+1Ch] [bp-18h]
  int v64; // [sp+20h] [bp-14h]
  void **v65; // [sp+24h] [bp-10h] BYREF
  void *v66; // [sp+28h] [bp-Ch]
  int v67; // [sp+2Ch] [bp-8h]

  v61 = 0;
  ptr = 0;
  v5 = sub_92E28();
  v6 = sub_1C4378(a2, &ptr, &v61);
  sub_92E40((int)v5);
  if ( ptr )
  {
    if ( !v6 )
    {
      if ( v61 )
      {
        v8 = sub_9253C((int)sub_F45B0, (int)ptr);
        ((void (__fastcall *)(_DWORD *, void *, void *, int))loc_21FF04)(a1, ptr, ptr, v61);
        sub_92620(v8);
        return;
      }
      v7 = ptr;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v9 = sub_171258(v6);
      v10 = *(char **)(v9 + 24);
      v11 = v9;
      v12 = *v10;
      if ( v12 != 1 && (unsigned int)(unsigned __int8)v12 - 18 > 1 )
        break;
      v6 = *((_DWORD *)v10 + 5);
    }
    v7 = ptr;
    if ( (unsigned int)(unsigned __int8)v12 - 3 <= 1 )
    {
      v54 = strlen((const char *)ptr);
      v65 = 0;
      v66 = 0;
      v67 = 0;
      sub_F68D4(v11, (int)&v65, (const char *)ptr, v54);
      if ( ptr )
        free(ptr);
      sub_F6DD4(a1, &v65);
      v55 = v65;
      v35 = (void **)v66;
      if ( v65 != v66 )
      {
        do
        {
          v57 = *v55++;
          v56 = v57;
          if ( v57 )
            free(v56);
        }
        while ( v35 != v55 );
        v35 = v65;
      }
      goto LABEL_60;
    }
    if ( ptr )
LABEL_11:
      free(v7);
  }
  v13 = (unsigned __int8)*a2;
  v14 = 0;
  v62 = 0;
  v63 = 0;
  v15 = v13 == 34;
  if ( v13 != 34 )
    v15 = v13 == 39;
  v64 = 0;
  v16 = v15;
  v59 = v16;
  if ( !v13 )
  {
    v18 = a2;
    v25 = a2;
    goto LABEL_78;
  }
  v17 = 0;
  v18 = a2;
  v19 = a2;
  while ( 1 )
  {
    while ( v13 == 92 )
    {
      if ( v19[1] != 39 )
        goto LABEL_25;
      v24 = (unsigned __int8 *)(v19 + 1);
      v19 += 2;
      v13 = v24[1];
      if ( !v24[1] )
        goto LABEL_39;
    }
    if ( v13 == 39 || v13 == 34 )
      break;
    v20 = v13 == 58;
    if ( v13 == 58 )
      v20 = v17 == 0;
    if ( v20 )
    {
      v17 = v19;
      v18 = v19 + 1;
      v21 = (unsigned __int8 *)v19++;
      goto LABEL_33;
    }
LABEL_25:
    v22 = (const char *)(*((int (**)(void))off_46D5A4[0] + 29))();
    v23 = strchr(v22, (unsigned __int8)*v19);
    if ( v23 )
      v18 = v19 + 1;
    else
      v21 = (unsigned __int8 *)v19;
    if ( v23 )
      v21 = (unsigned __int8 *)v19;
    else
      ++v19;
    if ( v23 )
      v19 = v18;
LABEL_33:
    v13 = v21[1];
    if ( !v21[1] )
      goto LABEL_39;
  }
  v38 = (unsigned __int8)v19[1];
  v14 = v13;
  v39 = (unsigned __int8 *)(v19 + 1);
  if ( v19[1] )
  {
    if ( v13 == v38 )
    {
      v19 += 2;
      v21 = v39;
      goto LABEL_33;
    }
    while ( 2 )
    {
      v15 = v38 == 92;
      v21 = v39 + 1;
      v38 = v39[1];
      if ( v15 )
      {
        if ( v13 == v38 )
        {
          v21 = v39 + 2;
          v38 = v39[2];
          goto LABEL_67;
        }
        if ( !v39[1] )
          break;
      }
      else
      {
LABEL_67:
        if ( !v38 )
          break;
        if ( v38 == v13 )
        {
          v19 = (char *)(v21 + 1);
          goto LABEL_33;
        }
      }
      v39 = v21;
      continue;
    }
  }
LABEL_39:
  if ( v59 )
    v25 = a2 + 1;
  else
    v25 = a2;
  if ( !v17 )
  {
LABEL_78:
    v40 = strlen(v25);
    sub_21FED4(a1, 0, 3, v18, a3);
    if ( v40 == strcspn(v25, " \t\n*|\"';:?><") )
    {
      sub_220F84((int)&v65, v25);
      v41 = (void **)v62;
      v42 = v63;
      v43 = (void **)v66;
      v15 = v62 == v63;
      v66 = 0;
      v62 = v65;
      v63 = v43;
      v64 = v67;
      v65 = 0;
      v67 = 0;
      if ( !v15 )
      {
        v44 = v41;
        do
        {
          v46 = *v44++;
          v45 = v46;
          if ( v46 )
            free(v45);
        }
        while ( v42 != v44 );
      }
      if ( v41 )
        sub_339E64(v41);
      v47 = v65;
      v48 = (void **)v66;
      if ( v65 != v66 )
      {
        do
        {
          v50 = *v47++;
          v49 = v50;
          if ( v50 )
            free(v49);
        }
        while ( v48 != v47 );
        v48 = v65;
      }
      if ( v48 )
        sub_339E64(v48);
    }
    goto LABEL_51;
  }
  v26 = v17 - v25;
  v27 = (char *)sub_93028(v17 - v25 + 1);
  strncpy(v27, v25, v26);
  v28 = &v27[v26];
  v29 = 0;
  v27[v26] = 0;
  if ( v27 < &v27[v26] )
  {
    v30 = v27 + 1;
    while ( 1 )
    {
      if ( v29 == 58 || v29 == v14 )
      {
        *v28 = 0;
        if ( v30 == v28 )
          break;
      }
      else if ( v30 == v28 )
      {
        break;
      }
      v31 = (unsigned __int8)*--v28;
      v29 = v31;
    }
  }
  sub_21FF74((int)a1, 0, 3, v18, a3, (int)v27);
  free(v27);
LABEL_51:
  v32 = (char **)v62;
  v33 = (char **)v63;
  if ( v62 != v63 && a1[17] == a1[18] )
  {
    v51 = a3 - (_DWORD)v25;
    do
    {
      v52 = *v32++;
      v53 = strlen(v52);
      memmove(v52, &v52[v51], v53 + 1 - v51);
    }
    while ( v33 != v32 );
  }
  sub_F6DD4(a1, (void ***)&v62);
  if ( a1[17] == a1[18] )
    sub_21FED4(a1, 0, 3, a2, a3);
  v34 = (void **)v62;
  v35 = v63;
  if ( v62 != v63 )
  {
    do
    {
      v37 = *v34++;
      v36 = v37;
      if ( v37 )
        free(v36);
    }
    while ( v35 != v34 );
    v35 = (void **)v62;
  }
LABEL_60:
  if ( v35 )
    sub_339E64(v35);
}
