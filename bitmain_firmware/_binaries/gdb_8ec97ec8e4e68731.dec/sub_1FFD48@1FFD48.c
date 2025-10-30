void *__fastcall sub_1FFD48(int a1, int *a2, int a3)
{
  void **p_dest; // r4
  int v5; // r0
  int *v6; // r0
  int v7; // r3
  char *v8; // r8
  void *v9; // r10
  const char *v10; // r5
  size_t v11; // r0
  const char *v12; // r3
  size_t v13; // r1
  int v14; // t1
  void *v15; // r0
  size_t v17; // r0
  void **v18; // r1
  int v19; // r3
  void **v20; // r2
  int v21; // t1
  bool v22; // zf
  int v23; // r0
  __int16 *v24; // r1
  int v25; // r2
  int v26; // r2
  int v27; // r6
  unsigned int v28; // r3
  int v29; // r1
  int v30; // r0
  const char *v31; // r0
  int v32; // r0
  const char *v33; // r0
  int v34; // r3
  int v35; // r7
  int v36; // r0
  int (__fastcall *v37)(void **, _DWORD, void **); // r3
  int v38; // t1
  bool v39; // zf
  _BYTE *v40; // r0
  __int16 *v41; // r2
  void *v42; // r0
  bool v43; // zf
  int v44; // t1
  bool v45; // zf
  int v46; // [sp+4h] [bp-40h]
  void *dest; // [sp+8h] [bp-3Ch] BYREF
  __int16 *v48; // [sp+Ch] [bp-38h]
  int fd; // [sp+10h] [bp-34h]
  int v50; // [sp+14h] [bp-30h]
  void *ptr[2]; // [sp+1Ch] [bp-28h] BYREF

  v50 = a3;
  p_dest = (void **)a1;
  v5 = sub_16F654(a1);
  v6 = (int *)((int (__fastcall *)(int, int))loc_16EC88)(v5, dword_4893A0);
  v7 = *v6;
  ptr[0] = 0;
  fd = v7;
  v8 = sub_15A10C((int)v6);
  v9 = sub_9253C((int)nullsub_39, 0);
  v10 = (const char *)dword_487A40;
  if ( sub_162564((const char *)dword_487A40) && off_489B70() )
    v10 += 7;
  v11 = strlen(v10);
  if ( v11 )
  {
    v12 = &v10[v11 - 1];
    if ( *v12 == 47 )
    {
      v13 = v11;
      do
      {
        if ( !--v13 )
        {
          v10 = 0;
          goto LABEL_10;
        }
        v14 = *(unsigned __int8 *)--v12;
      }
      while ( v14 == 47 );
      if ( v11 != v13 )
      {
        v10 = sub_93330(v10, v13);
        sub_9253C((int)sub_1FFD3C, (int)v10);
        if ( v8 == "dos-based" )
          goto LABEL_19;
LABEL_11:
        if ( *(_BYTE *)p_dest == 47 && v10 )
          goto LABEL_45;
LABEL_12:
        v15 = (void *)sub_327254(p_dest);
        ptr[0] = v15;
        goto LABEL_13;
      }
    }
LABEL_10:
    if ( v8 != "dos-based" )
      goto LABEL_11;
  }
  else
  {
    v10 = 0;
    if ( v8 != "dos-based" )
      goto LABEL_12;
  }
LABEL_19:
  v17 = strlen((const char *)p_dest);
  v18 = p_dest;
  p_dest = &dest;
  memcpy(&dest, v18, v17 + 1);
  v19 = (unsigned __int8)dest;
  if ( !(_BYTE)dest )
    goto LABEL_12;
  v20 = &dest;
  do
  {
    if ( v19 == 92 )
      *(_BYTE *)v20 = 47;
    v21 = *((unsigned __int8 *)v20 + 1);
    v20 = (void **)((char *)v20 + 1);
    v19 = v21;
  }
  while ( v21 );
  v22 = (unsigned __int8)dest == 92;
  if ( (unsigned __int8)dest != 92 )
    v22 = (unsigned __int8)dest == 47;
  if ( !v22 )
  {
    if ( !(_BYTE)dest || BYTE1(dest) != 58 || !v10 )
      goto LABEL_12;
    goto LABEL_30;
  }
  if ( !v10 )
    goto LABEL_12;
  if ( (unsigned __int8)dest != 47 )
  {
LABEL_30:
    v23 = strcmp("target:", v10);
    v24 = &word_398974;
    if ( !v23 )
      v24 = (__int16 *)"";
    goto LABEL_46;
  }
LABEL_45:
  v24 = (__int16 *)"";
LABEL_46:
  v15 = (void *)sub_31E27C(v10, v24, p_dest);
  ptr[0] = v15;
LABEL_13:
  if ( !sub_162564((const char *)v15) )
  {
    v25 = sub_967B4((int)ptr[0], 0);
    if ( v25 >= 0 )
    {
LABEL_34:
      fd = v25;
      sub_92620(v9);
      v26 = fd;
      v27 = v50 & 1;
      v28 = (unsigned int)fd >> 31;
      goto LABEL_35;
    }
    if ( ptr[0] )
    {
      v48 = (__int16 *)v25;
      free(ptr[0]);
      v25 = (int)v48;
      if ( !v10 )
        goto LABEL_55;
    }
    else if ( !v10 )
    {
      goto LABEL_55;
    }
    if ( v8 == "dos-based" && *(_BYTE *)p_dest && *((_BYTE *)p_dest + 1) == 58 )
    {
      v48 = (__int16 *)*((unsigned __int8 *)p_dest + 2);
      v40 = sub_93330(p_dest, 1u);
      v41 = (__int16 *)"";
      if ( v48 != (__int16 *)47 )
        v41 = &word_398974;
      dest = v40;
      v48 = v41;
      v46 = 0;
      v42 = (void *)sub_31E27C(v10, &word_398974, v40);
      ptr[0] = v42;
      if ( dest )
      {
        free(dest);
        v42 = ptr[0];
      }
      v25 = sub_967B4((int)v42, 0);
      if ( v25 >= 0 )
        goto LABEL_34;
      if ( ptr[0] )
        free(ptr[0]);
      ptr[0] = (void *)sub_31E27C(v10, v48, (char *)p_dest + 2);
      v25 = sub_967B4((int)ptr[0], 0);
      if ( v25 >= 0 )
        goto LABEL_34;
      if ( ptr[0] )
      {
        v48 = (__int16 *)v25;
        free(ptr[0]);
        v25 = (int)v48;
      }
    }
LABEL_55:
    v48 = (__int16 *)v25;
    sub_92620(v9);
    ptr[0] = 0;
    v26 = (int)v48;
    v34 = *(unsigned __int8 *)p_dest;
    if ( v8 == "dos-based" )
    {
      v43 = v34 == 92;
      if ( v34 != 92 )
        v43 = v34 == 47;
      if ( v43 || *(_BYTE *)p_dest && *((_BYTE *)p_dest + 1) == 58 )
      {
        while ( 1 )
        {
          v45 = v34 == 47;
          if ( v34 != 47 )
            v45 = v34 == 92;
          if ( v45 )
            break;
          v44 = *((unsigned __int8 *)p_dest + 1);
          p_dest = (void **)((char *)p_dest + 1);
          v34 = v44;
        }
        while ( 1 )
        {
LABEL_67:
          if ( v8 == "dos-based" )
          {
            v39 = v34 == 47;
            if ( v34 != 47 )
              v39 = v34 == 92;
            if ( !v39 )
              break;
          }
          else if ( v34 != 47 )
          {
            break;
          }
          v38 = *((unsigned __int8 *)p_dest + 1);
          p_dest = (void **)((char *)p_dest + 1);
          v34 = v38;
        }
      }
    }
    else if ( v34 == 47 )
    {
      goto LABEL_67;
    }
    v27 = v50 & 1;
    if ( (v50 & 1) != 0 )
    {
      if ( !dword_4893A4
        || (v26 = ((int (__fastcall *)(int, int, void **, _DWORD, void **, int))loc_203AE4)(
                    dword_4893A4,
                    5,
                    p_dest,
                    0,
                    ptr,
                    v46),
            v28 = (unsigned int)v26 >> 31,
            v26 < 0)
        && ((v35 = dword_4893A4) == 0
         || (v36 = sub_15A154(v8, (unsigned __int8 *)p_dest),
             v26 = ((int (__fastcall *)(int, int, int, _DWORD, void **))loc_203AE4)(v35, 5, v36, 0, ptr),
             v28 = (unsigned int)v26 >> 31,
             v26 < 0)) )
      {
        v37 = *(int (__fastcall **)(void **, _DWORD, void **))(fd + 36);
        if ( v37 )
        {
          v26 = v37(p_dest, 0, ptr);
          v28 = (unsigned int)v26 >> 31;
        }
        else
        {
          v28 = v27;
        }
      }
    }
    else
    {
      v28 = 1;
    }
LABEL_35:
    if ( v10 )
      v29 = 0;
    else
      v29 = v28 & 1;
    if ( v29 )
    {
      v30 = sub_183688();
      v31 = sub_93828((const char ***)(v30 + 60), "PATH");
      v26 = ((int (__fastcall *)(const char *, int, void **, _DWORD, void **))loc_203AE4)(v31, 5, p_dest, 0, ptr);
      if ( (v27 & ((unsigned int)v26 >> 31)) == 0 )
        goto LABEL_49;
    }
    else
    {
      if ( (v28 & v27) == 0 )
        goto LABEL_49;
      if ( v10 )
      {
        if ( !a2 )
          return ptr[0];
LABEL_42:
        *a2 = v26;
        return ptr[0];
      }
    }
    v32 = sub_183688();
    v33 = sub_93828((const char ***)(v32 + 60), "LD_LIBRARY_PATH");
    v26 = ((int (__fastcall *)(const char *, int, void **, _DWORD, void **))loc_203AE4)(v33, 5, p_dest, 0, ptr);
LABEL_49:
    if ( !a2 )
    {
      if ( v26 >= 0 )
        close(v26);
      return ptr[0];
    }
    goto LABEL_42;
  }
  if ( a2 )
    *a2 = -1;
  sub_92620(v9);
  return ptr[0];
}
