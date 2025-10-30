void __fastcall sub_24A148(const char *a1, int a2)
{
  _BOOL4 v4; // r4
  int v5; // r0
  int v6; // r6
  const char *v7; // r0
  const char *v8; // r6
  const char *v9; // r4
  _DWORD *v10; // r4
  unsigned int v11; // r5
  int *v12; // r0
  int v13; // r0
  int v14; // r3
  char *v15; // r5
  int v16; // r0
  _DWORD *v17; // r4
  const char *v18; // r6
  unsigned int v19; // r5
  int *v20; // r0
  char *v21; // r5
  const char *v22; // r4
  char *v23; // r0
  const char *v24; // r1
  int v25; // r0
  char *v26; // r2
  const char *v27; // r3
  bool v28; // zf
  const char *v29; // [sp+8h] [bp-30h] BYREF
  int v30; // [sp+Ch] [bp-2Ch] BYREF
  void *ptr; // [sp+10h] [bp-28h] BYREF
  char *endptr[9]; // [sp+14h] [bp-24h] BYREF

  if ( a1 )
  {
    v29 = (const char *)sub_9360C(a1);
    v4 = *(unsigned __int8 *)v29 == 35;
    if ( !*v29 )
      v4 = 1;
    if ( !v4 )
    {
      v5 = sub_544C8((unsigned __int8 **)&v29, dword_474744, "", -1, 1);
      v6 = v5;
      if ( !v5 )
        sub_946E0("`%s' is not a tracepoint action, or is ambiguous.", v29);
      if ( !sub_53208(v5, (int)sub_248DD4) )
      {
        v16 = sub_53208(v6, (int)sub_248BD4);
        if ( v16 )
        {
          do
          {
            sub_258BD4(v16);
            v16 = sub_9360C(v29);
            v17 = *(_DWORD **)(a2 + 28);
            v18 = (const char *)v16;
            if ( v17 )
            {
              do
              {
                v19 = v17[13];
                v29 = v18;
                v20 = sub_C2574(v19);
                sub_1C427C((char **)&ptr, (_BYTE **)&v29, v19, (void ***)v20, 1);
                sub_BFE84((int *)endptr, v17[13], (int)ptr);
                if ( *((int *)endptr[0] + 1) > 184 )
                  sub_946E0("Expression is too complicated.");
                sub_C11E8((void **)endptr[0]);
                sub_248640((_DWORD *)endptr[0]);
                v21 = endptr[0];
                if ( endptr[0] )
                {
                  sub_C0960((int)endptr[0]);
                  sub_33AC04(v21);
                }
                v16 = (int)ptr;
                if ( ptr )
                  free(ptr);
                v17 = (_DWORD *)*v17;
              }
              while ( v17 );
              v18 = v29;
            }
            if ( !v18 )
              break;
            v29 = v18 + 1;
          }
          while ( *v18 == 44 );
        }
        else if ( sub_53208(v6, (int)sub_247914) )
        {
          v29 = (const char *)sub_9360C(v29);
          v25 = strtol(v29, endptr, 0);
          v26 = endptr[0];
          v27 = v29;
          *(_DWORD *)(a2 + 136) = v25;
          v28 = v25 == 0;
          if ( v25 )
            v28 = v26 == v27;
          if ( v28 )
            sub_946E0("while-stepping step count `%s' is malformed.", a1);
        }
        else if ( !sub_53208(v6, (int)sub_247904) )
        {
          sub_946E0("`%s' is not a supported tracepoint action.", a1);
        }
        return;
      }
      v7 = v29;
      v30 = 0;
      if ( *v29 == 47 )
      {
        v7 = (const char *)sub_248740((int)v29, &v30);
        v29 = v7;
      }
      while ( 1 )
      {
        sub_258BD4(v7);
        v7 = (const char *)sub_9360C(v29);
        v29 = v7;
        v8 = v7;
        if ( *v7 == 36 )
        {
          v9 = v7 + 1;
          if ( !strncasecmp("reg", v7 + 1, 3u) )
            break;
          if ( !strncasecmp("arg", v9, 3u) )
            break;
          if ( !strncasecmp("loc", v9, 3u) )
            break;
          if ( !strncasecmp("_ret", v9, 4u) )
            break;
          v7 = (const char *)strncasecmp("_sdata", v9, 6u);
          if ( !v7 )
            break;
        }
        v10 = *(_DWORD **)(a2 + 28);
        if ( v10 )
        {
          do
          {
            v11 = v10[13];
            v29 = v8;
            v12 = sub_C2574(v11);
            sub_1C427C((char **)&ptr, (_BYTE **)&v29, v11, (void ***)v12, 1);
            if ( *((_DWORD *)ptr + 4) == 40 )
            {
              v13 = *((_DWORD *)ptr + 12);
              v14 = *((_DWORD *)off_46DBB8 + 4 * (*(unsigned __int8 *)(v13 + 32) >> 3));
              if ( v14 == 1 )
              {
                if ( dword_46D448 )
                {
                  v22 = (const char *)sub_21B3C4(v13);
                  v13 = *((_DWORD *)ptr + 12);
                }
                else
                {
                  v22 = *(const char **)v13;
                }
                v23 = sub_988AC(*(_QWORD *)(v13 + 8));
                sub_946E0("constant `%s' (value %s) will not be collected.", v22, v23);
              }
              if ( v14 == 13 )
              {
                if ( dword_46D448 )
                  v24 = (const char *)sub_21B3C4(v13);
                else
                  v24 = *(const char **)v13;
                sub_946E0("`%s' is optimized away and cannot be collected.", v24);
              }
            }
            sub_BFDD4((int *)endptr, v10[13], (int)ptr, v30);
            if ( *((int *)endptr[0] + 1) > 184 )
              sub_946E0("Expression is too complicated.");
            sub_C11E8((void **)endptr[0]);
            sub_248640((_DWORD *)endptr[0]);
            v15 = endptr[0];
            if ( endptr[0] )
            {
              sub_C0960((int)endptr[0]);
              sub_33AC04(v15);
            }
            v7 = (const char *)ptr;
            if ( ptr )
              free(ptr);
            v10 = (_DWORD *)*v10;
          }
          while ( v10 );
          v8 = v29;
LABEL_28:
          if ( !v8 )
            return;
        }
        v29 = v8 + 1;
        if ( *v8 != 44 )
          return;
      }
      v7 = strchr(v8, 44);
      v8 = v7;
      goto LABEL_28;
    }
  }
}
