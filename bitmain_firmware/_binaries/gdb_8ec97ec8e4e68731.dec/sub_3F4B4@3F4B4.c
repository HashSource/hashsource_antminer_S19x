int __fastcall sub_3F4B4(char *file, int a2)
{
  int v4; // r0
  void *v6; // r7
  int v7; // r5
  int v8; // r0
  int v9; // r3
  int (*v10)(void); // r0
  int v11; // r0
  int (__fastcall *v12)(int, int); // r0
  int v13; // r1
  int v14; // r2
  int v15; // r0
  int v16; // r7
  int v17; // r0
  _DWORD *v18; // r0
  int v19; // r4
  char *v20; // r0
  char *v21; // r0
  int v22; // r0
  int v23; // r4
  int *v24; // r0
  const char *v25; // r0
  void *v26; // r0
  void *v27; // r8
  void *v28; // r0
  void *v29; // r0
  int v30; // r0
  int v31; // r7
  int v32; // r0
  int *v33; // r6
  void *v34; // r0
  int v35; // r0
  const char *v36; // r5
  _DWORD *v37; // r0
  char *v38; // r0
  int v39; // r4
  char *v40; // r0
  void *v41; // r7
  int v42; // r0
  int v43; // r1
  int v44; // r2
  int v45; // r7
  int v46; // r0
  const char *v47; // r5
  int v48; // r0
  int v49; // [sp+1Ch] [bp-1Ch]
  int v50; // [sp+20h] [bp-18h]
  int v51; // [sp+24h] [bp-14h]
  _DWORD v52[4]; // [sp+28h] [bp-10h] BYREF

  if ( dword_471BF0 )
  {
    v18 = (_DWORD *)sub_242FC8(file);
    sub_2594B0(*v18, "Trying host libthread_db library: %s.\n", file);
  }
  if ( !a2 )
    goto LABEL_8;
  v4 = access(file, 4);
  if ( !v4 )
  {
    if ( !sub_BA030(file) )
      return 0;
LABEL_8:
    v6 = dlopen(file, 2);
    if ( !v6 )
    {
      if ( !dword_471BF0 )
        return 0;
      v19 = *(_DWORD *)sub_242FC8(0);
      v20 = dlerror();
      sub_2594B0(v19, "dlopen failed: %s.\n", v20);
      return 0;
    }
    if ( dword_471BF0 )
    {
      if ( !strchr(file, 47) )
      {
        v34 = dlsym(v6, "td_init");
        if ( v34 )
        {
          v35 = dladdr(v34, v52);
          if ( v35 )
          {
            v36 = (const char *)v52[0];
            if ( v52[0] )
            {
              v37 = (_DWORD *)sub_242FC8(v35);
              sub_2594B0(*v37, "Host %s resolved to: %s.\n", file, v36);
            }
          }
        }
      }
    }
    v7 = sub_93094(1, 0x40u);
    v8 = ps_getpid_0(&dword_4878EC);
    *(_DWORD *)(v7 + 4) = v8;
    *(_DWORD *)(v7 + 8) = v6;
    if ( sub_22EBBC(v8) )
      *(_DWORD *)(v7 + 32) = 1;
    v9 = dword_471BF4;
    dword_471BF4 = v7;
    *(_DWORD *)v7 = v9;
    if ( strchr(file, 47) )
    {
      sub_984A4(v52, file);
      *(_DWORD *)(v7 + 12) = v52[0];
    }
    v10 = (int (*)(void))dlsym(*(void **)(v7 + 8), "td_init");
    if ( v10 )
    {
      *(_DWORD *)(v7 + 36) = v10;
      v11 = v10();
      if ( v11 )
      {
        v21 = sub_3E4C0(v11);
        sub_946B0("Cannot initialize libthread_db: %s", v21);
        v22 = ps_getpid_0(&dword_4878EC);
        sub_3E974(v22);
        return 0;
      }
      v12 = (int (__fastcall *)(int, int))dlsym(*(void **)(v7 + 8), "td_ta_new");
      if ( v12 )
      {
        *(_DWORD *)(v7 + 40) = v12;
        v13 = dword_4878F0;
        v14 = dword_4878F4;
        *(_DWORD *)(v7 + 16) = dword_4878EC;
        *(_DWORD *)(v7 + 20) = v13;
        *(_DWORD *)(v7 + 24) = v14;
        v15 = v12(v7 + 16, v7 + 28);
        v16 = v15;
        if ( v15 )
        {
          if ( dword_471BF0 )
          {
            v39 = *(_DWORD *)sub_242FC8(v15);
            v40 = sub_3E4C0(v16);
            sub_2594B0(v39, "td_ta_new failed: %s\n", v40);
          }
          else if ( v15 != 12 && v15 != 22 )
          {
            v38 = sub_3E4C0(v15);
            sub_946B0("td_ta_new failed: %s", v38);
          }
          goto LABEL_23;
        }
        v26 = dlsym(*(void **)(v7 + 8), "td_ta_map_lwp2thr");
        if ( v26 )
        {
          *(_DWORD *)(v7 + 44) = v26;
          v27 = dlsym(*(void **)(v7 + 8), "td_thr_get_info");
          if ( v27 )
          {
            v28 = *(void **)(v7 + 8);
            *(_DWORD *)(v7 + 52) = v27;
            *(_DWORD *)(v7 + 56) = dlsym(v28, "td_thr_tls_get_addr");
            v29 = dlsym(*(void **)(v7 + 8), "td_thr_tlsbase");
            *(_DWORD *)(v7 + 60) = v29;
            if ( sub_22EBBC(v29) )
            {
              v30 = ps_getpid_0(&dword_4878EC);
              if ( sub_4BC5C(v30) )
              {
                *(_DWORD *)(v7 + 48) = 0;
                v31 = ps_getpid_0(&dword_4878EC);
                v32 = sub_450CC();
                v33 = (int *)dword_472178;
                if ( dword_472178 )
                {
                  do
                  {
                    v32 = ps_getpid_0(v33);
                    if ( v31 == v32 )
                      v32 = sub_3EF58(*v33, v33[1], v33[2]);
                    v33 = (int *)v33[23];
                  }
                  while ( v33 );
                }
                sub_45110(v32);
                goto LABEL_47;
              }
            }
            v41 = dlsym(*(void **)(v7 + 8), "td_ta_thr_iter");
            if ( v41 )
            {
              v42 = dword_4878EC;
              v43 = dword_4878F0;
              v44 = dword_4878F4;
              *(_DWORD *)(v7 + 48) = v41;
              v49 = v42;
              v50 = v43;
              v51 = v44;
              v45 = sub_92E28(v42);
              sub_3E864(v49, v50, v51, 1);
              sub_92E40(v45);
LABEL_47:
              sub_259858("[Thread debugging using libthread_db enabled]\n");
              if ( *(_BYTE *)dword_471BF8 || dword_471BF0 )
              {
                v46 = dladdr(*(_DWORD *)(v7 + 40), v52);
                if ( v46 )
                {
                  v47 = (const char *)v52[0];
                  if ( !v52[0] )
                    v47 = "libthread_db.so.1";
                }
                else
                {
                  v47 = "libthread_db.so.1";
                }
                if ( *(_BYTE *)dword_471BF8 )
                  v48 = *(_DWORD *)sub_242F8C(v46);
                else
                  v48 = *(_DWORD *)sub_242FC8(v46);
                sub_2594B0(v48, "Using host libthread_db library \"%s\".\n", v47);
              }
              if ( !*(_DWORD *)dword_471BF4 )
                sub_231B78(&unk_471C3C);
              return 1;
            }
            sub_3ED30("td_ta_thr_iter");
            *(_DWORD *)(v7 + 48) = 0;
          }
          else
          {
            sub_3ED30("td_thr_get_info");
            *(_DWORD *)(v7 + 52) = 0;
          }
        }
        else
        {
          sub_3ED30("td_ta_map_lwp2thr");
          *(_DWORD *)(v7 + 44) = 0;
        }
      }
      else
      {
        sub_3ED30("td_ta_new");
        *(_DWORD *)(v7 + 40) = 0;
      }
    }
    else
    {
      sub_3ED30("td_init");
      *(_DWORD *)(v7 + 36) = 0;
    }
LABEL_23:
    v17 = ps_getpid_0(&dword_4878EC);
    sub_3E974(v17);
    return 0;
  }
  if ( !dword_471BF0 )
    return 0;
  v23 = *(_DWORD *)sub_242FC8(v4);
  v24 = _errno_location();
  v25 = (const char *)sub_6FF98(*v24);
  sub_2594B0(v23, "open failed: %s.\n", v25);
  return 0;
}
