bool __fastcall sub_2FA030(int a1, void **a2, int a3, int a4, _DWORD **a5, int a6)
{
  int v6; // r10
  int v7; // r12
  _DWORD *v12; // r4
  int v13; // r0
  bool v14; // zf
  _BOOL4 v15; // r10
  char *v16; // r7
  signed int v17; // r0
  size_t i; // r12
  void *v19; // r0
  char *j; // r7
  int v21; // r9
  int v22; // r3
  size_t v23; // r2
  char *v24; // r0
  int v25; // r2
  int v26; // r3
  int v27; // lr
  _DWORD *v28; // r3
  int v29; // r1
  int v30; // r0
  int v31; // r2
  bool v32; // zf
  int v33; // r2
  int v34; // t1
  char *v35; // r0
  int v36; // r12
  int v37; // r1
  _DWORD *v38; // r3
  char *v39; // r1
  int v40; // r2
  bool v41; // zf
  int v42; // r2
  char *v43; // r8
  void **v44; // r0
  int v45; // r2
  int v46; // r3
  const char **v48; // r1
  size_t v49; // [sp+14h] [bp-4h] BYREF

  v12 = *a5;
  if ( !*a5 )
  {
    v12 = sub_2AD09C(a1, 0x90u);
    if ( !v12 )
      return 0;
LABEL_4:
    v13 = *(_DWORD *)(a1 + 108);
    v12[5] = a1;
    v12[2] = a3;
    v12[15] = a4;
    if ( v13 )
    {
      v35 = (char *)sub_2AB368(4 * v13);
      v12[27] = v35;
      if ( !v35 )
        return 0;
      v37 = *(_DWORD *)(a1 + 108);
      v38 = *(_DWORD **)(a1 + 100);
      if ( v37 )
      {
        v39 = &v35[4 * v37];
        do
        {
          v40 = v38[15];
          v35 += 4;
          v41 = v40 == 0;
          if ( v40 )
          {
            v36 = v38[14];
            v42 = *(_DWORD *)(v40 + 28);
          }
          else
          {
            v42 = v38[7];
          }
          v38 = (_DWORD *)v38[3];
          if ( !v41 )
            v42 += v36;
          *((_DWORD *)v35 - 1) = v42;
        }
        while ( v35 != v39 );
      }
    }
    v14 = a2 == 0;
    *a5 = v12;
    if ( a2 )
      v6 = a1 - (_DWORD)a2;
    else
      a2 = (void **)a1;
    v15 = v14 || v6 == 0;
    v16 = sub_2F6568((int)a2, a3);
    if ( v16 )
      v15 = 0;
    if ( !v15 )
    {
LABEL_14:
      v12[6] = a2;
      if ( !a6 || sub_2F6268(a1, v12) )
      {
        if ( sub_2F65EC((int)a2, a3, (int)v16) )
        {
          v49 = 0;
          if ( v16 )
          {
            for ( i = 0; ; i = v49 )
            {
              v49 = *((_DWORD *)v16 + 9) + i;
              v16 = sub_2F65EC((int)a2, a3, (int)v16);
              if ( !v16 )
                break;
            }
            v17 = v49;
          }
          else
          {
            v17 = 0;
          }
          v19 = sub_2AB368(v17);
          v12[14] = v19;
          if ( v19 )
          {
            v49 = 0;
            for ( j = sub_2F6568((int)a2, a3); j; j = sub_2F65EC((int)a2, a3, (int)j) )
            {
              v21 = *((_DWORD *)j + 9);
              if ( v21 )
              {
                if ( !sub_2AE08C(a2, j, v12[14] + v49, a4) )
                  return 0;
                v49 += v21;
              }
            }
            goto LABEL_29;
          }
        }
        else
        {
          v48 = (const char **)(v12[2] + 24);
          v49 = *((_DWORD *)v16 + 9);
          if ( sub_2F5C18(a2, v48, a4, (int)&v49, 0, v12 + 14, &v49) )
          {
LABEL_29:
            v22 = v12[14];
            v23 = v49;
            v12[3] = v22;
            v12[4] = v22 + v23;
            v24 = sub_2F6568((int)a2, a3);
            v25 = v12[3];
            v26 = 1;
            v12[7] = v24;
            v12[8] = v25;
            return v26;
          }
        }
      }
      return 0;
    }
    v43 = sub_2AD618((const char **)a1, "/usr/lib/debug");
    if ( !v43 )
    {
      v43 = sub_2AD37C((const char **)a1, "/usr/lib/debug");
      if ( !v43 )
        return 0;
    }
    v44 = sub_2AC764((int)v43, 0);
    a2 = v44;
    if ( v44 )
    {
      v46 = (unsigned int)v44[10] | 0x100000;
      v44[10] = (void *)v46;
      if ( sub_2AA86C((int)v44, 1, v45, v46) )
      {
        v16 = sub_2F6568((int)a2, a3);
        if ( v16 )
        {
          if ( sub_2FCD78(a2) )
          {
            a4 = (int)a2[30];
            v12[35] = 1;
            v12[15] = a4;
            goto LABEL_14;
          }
        }
      }
      sub_2AC9DC((int)a2);
    }
    free(v43);
    return 0;
  }
  if ( v12[5] != a1 )
  {
LABEL_3:
    sub_2F9E40(a1, a5);
    memset(v12, 0, 0x90u);
    goto LABEL_4;
  }
  v27 = *(_DWORD *)(a1 + 108);
  v28 = *(_DWORD **)(a1 + 100);
  if ( v27 )
  {
    v29 = 0;
    v30 = v12[27] - 4;
    do
    {
      v31 = v28[15];
      ++v29;
      v32 = v31 == 0;
      if ( v31 )
      {
        v7 = v28[14];
        v33 = *(_DWORD *)(v31 + 28);
      }
      else
      {
        v33 = v28[7];
      }
      if ( !v32 )
        v33 += v7;
      v34 = *(_DWORD *)(v30 + 4);
      v30 += 4;
      v7 = v34;
      if ( v34 != v33 )
        goto LABEL_3;
      v28 = (_DWORD *)v28[3];
    }
    while ( v27 != v29 );
  }
  if ( !v12[6] )
    return 0;
  return !a6 || sub_2F6268(a1, *a5) != 0;
}
