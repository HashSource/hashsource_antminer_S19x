void __fastcall sub_324D8(int a1, int a2)
{
  int v3; // r11
  char *v4; // r8
  int v5; // r6
  _BYTE *v6; // r4
  const char *i; // r5
  void *v8; // r0
  _DWORD *v9; // r7
  _DWORD *v10; // r9
  int v11; // r2
  bool v12; // zf
  char *v13; // r4
  void *v14; // r0
  void *v15; // t1
  int v16; // r11
  int v17; // r10
  unsigned int *v18; // r6
  unsigned int *v19; // r9
  int *v20; // r7
  int v21; // r0
  unsigned __int64 v22; // r4
  unsigned int v23; // t1
  int v24; // r7
  int v25; // r0
  char *v26; // r2
  char *v27; // r4
  void *v28; // r0
  void *v29; // t1
  int v30; // r4
  void *v31; // r0
  _BYTE *v33; // [sp+Ch] [bp-A0h]
  int v34; // [sp+10h] [bp-9Ch]
  char *v35; // [sp+10h] [bp-9Ch]
  int v36; // [sp+14h] [bp-98h]
  void *ptr; // [sp+28h] [bp-84h] BYREF
  _DWORD *v38; // [sp+2Ch] [bp-80h]
  int v39; // [sp+30h] [bp-7Ch]
  _QWORD v40[4]; // [sp+34h] [bp-78h] BYREF
  _BYTE v41[84]; // [sp+54h] [bp-58h] BYREF
  char v42; // [sp+A8h] [bp-4h] BYREF

  v3 = ((int (__fastcall *)(int))loc_1B7C78)(a2);
  if ( v3 )
  {
    v33 = v41;
    v36 = 0;
LABEL_4:
    v4 = v41;
    do
    {
      *(_DWORD *)v4 = 0;
      *((_DWORD *)v4 + 1) = 0;
      v4 += 12;
      *((_DWORD *)v4 - 1) = 0;
    }
    while ( v4 != &v42 );
    v5 = 0;
    v34 = 0;
    v6 = v41;
    for ( i = "init_start"; ; i = (&off_34C438)[2 * v5] )
    {
      if ( v36 )
      {
        sub_93170(v40, 32, "rtld_%s", i);
        i = (const char *)v40;
      }
      sub_1CA870(&ptr, *(_DWORD *)(v3 + 4), "rtld", i);
      v8 = *(void **)v6;
      v9 = ptr;
      v10 = v38;
      v11 = v39;
      v12 = *(_DWORD *)v6 == 0;
      ptr = 0;
      *(_DWORD *)v6 = v9;
      *((_DWORD *)v6 + 1) = v10;
      *((_DWORD *)v6 + 2) = v11;
      v38 = 0;
      v39 = 0;
      if ( !v12 )
      {
        sub_339E64(v8);
        if ( ptr )
          sub_339E64(ptr);
      }
      if ( strcmp(i, "rtld_map_failed") )
      {
        if ( v9 == v10 || !v34 && !(*(int (__fastcall **)(_DWORD))(*(_DWORD *)*v9 + 16))(*v9) )
        {
          v13 = &v42;
          do
          {
            v15 = (void *)*((_DWORD *)v13 - 3);
            v13 -= 12;
            v14 = v15;
            if ( v15 )
              sub_339E64(v14);
          }
          while ( v13 != v41 );
          if ( v36 != 1 )
          {
            v36 = 1;
            goto LABEL_4;
          }
          break;
        }
        v34 = 1;
      }
      ++v5;
      v6 += 12;
      if ( v5 == 7 )
      {
        v16 = *(_DWORD *)(v3 + 4);
        v17 = 1;
        v35 = (char *)&unk_34C444;
        while ( 1 )
        {
          v18 = *(unsigned int **)v33;
          v19 = (unsigned int *)*((_DWORD *)v33 + 1);
          if ( *(unsigned int **)v33 != v19 )
          {
            do
            {
              v23 = *v18++;
              v22 = __PAIR64__((*(int (__fastcall **)(unsigned int, int))(*(_DWORD *)v23 + 8))(v23, v16), v23);
              sub_D8DE0(a1, HIDWORD(v22));
              v24 = sub_31060();
              v25 = *(_DWORD *)(v24 + 40);
              if ( !v25 )
              {
                v25 = sub_323AE0(1, sub_2FD54, 195932, &loc_30548, sub_93094, &loc_30548);
                *(_DWORD *)(v24 + 40) = v25;
              }
              v40[0] = v22;
              v20 = (int *)sub_324030(v25, v40, 1);
              if ( *v20 )
              {
                sub_94700(
                  "solib-svr4.c",
                  1718,
                  "%s: Assertion `%s' failed.",
                  "void register_solib_event_probe(probe*, CORE_ADDR, probe_action)",
                  "*slot == HTAB_EMPTY_ENTRY");
                v30 = 72;
                while ( 1 )
                {
                  v31 = *(void **)&v41[v30];
                  if ( v31 )
                    sub_339E64(v31);
                  v30 -= 12;
                  if ( v30 == -12 )
                    sub_338FFC(v31);
                }
              }
              v21 = sub_93094(1, 0xCu);
              *(_QWORD *)v21 = v22;
              *(_DWORD *)(v21 + 8) = v17;
              *v20 = v21;
            }
            while ( v19 != v18 );
          }
          v12 = v33 + 12 == v4;
          v26 = v35 + 8;
          v33 += 12;
          v35 += 8;
          if ( v12 )
            break;
          v17 = *((_DWORD *)v26 - 2);
        }
        sub_D2260(sub_31750, 0);
        v27 = &v42;
        do
        {
          v29 = (void *)*((_DWORD *)v27 - 3);
          v27 -= 12;
          v28 = v29;
          if ( v29 )
            sub_339E64(v28);
        }
        while ( v27 != v41 );
        return;
      }
    }
  }
  sub_D8DE0(a1, a2);
}
