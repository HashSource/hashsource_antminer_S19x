void __fastcall sub_248804(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v7; // r0
  int v8; // r6
  int v9; // r6
  int v10; // r0
  void *v11; // r0
  size_t v12; // r4
  char *v13; // r0
  void *v14; // r4
  char *v15; // r6
  size_t v16; // r4
  void *v18; // [sp+10h] [bp-24h]
  int v19; // [sp+14h] [bp-20h]
  void *src; // [sp+24h] [bp-10h] BYREF
  void *v21; // [sp+28h] [bp-Ch] BYREF
  int v22; // [sp+2Ch] [bp-8h] BYREF

  v4 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      sub_258BD4(a1);
      src = *(void **)(v4 + 4);
      a1 = sub_9360C(src);
      src = (void *)a1;
      if ( *(_BYTE *)a1 == 35 )
        goto LABEL_7;
      v7 = sub_544C8((unsigned __int8 **)&src, dword_474744, "", -1, 1);
      v8 = v7;
      if ( !v7 )
        sub_946E0("Bad action list item: %s", (const char *)src);
      a1 = sub_53208(v7, (int)sub_247914);
      if ( !a1 )
      {
        a1 = sub_53208(v8, (int)sub_248DD4) && a3 == a2;
        if ( a1 )
        {
          v21 = 0;
          v18 = sub_9253C((int)sub_2589B8, (int)&v21);
          v11 = src;
          v22 = 0;
          if ( *(_BYTE *)src == 47 )
          {
            v11 = (void *)sub_248740((int)src, &v22);
            src = v11;
          }
          v19 = v4;
          do
          {
            sub_258BD4(v11);
            v13 = (char *)src;
            if ( *(_BYTE *)src == 44 )
            {
              v13 = (char *)src + 1;
              src = (char *)src + 1;
            }
            v14 = (void *)sub_9360C(v13);
            src = v14;
            v15 = strchr((const char *)v14, 44);
            if ( !strncasecmp((const char *)v14, "$reg", 4u) )
            {
              v11 = (void *)sub_181A64(0, a4);
            }
            else
            {
              v11 = (void *)strncasecmp((const char *)v14, "$_ret", 5u);
              if ( v11 )
              {
                if ( !strncasecmp((const char *)v14, "$loc", 4u) )
                {
                  v11 = (void *)sub_20C7D8();
                }
                else if ( !strncasecmp((const char *)v14, "$arg", 4u) )
                {
                  v11 = (void *)sub_20F2A0();
                }
                else
                {
                  if ( v15 )
                  {
                    v12 = v15 - (_BYTE *)v14;
                    v21 = sub_93050(v21, v12 + 1);
                    memcpy(v21, src, v12);
                    *((_BYTE *)v21 + v12) = 0;
                  }
                  else
                  {
                    v16 = strlen((const char *)v14) + 1;
                    v21 = sub_93050(v21, v16);
                    memcpy(v21, src, v16);
                  }
                  sub_259F10("%s = ", (const char *)v21);
                  sub_1C7670((const char *)v21);
                  v11 = (void *)sub_259F10((const char *)&word_356638);
                }
              }
            }
            src = v15;
          }
          while ( v15 && *v15 == 44 );
          v4 = v19;
          sub_92620(v18);
        }
        goto LABEL_7;
      }
      if ( *(int *)(v4 + 20) <= 0 )
      {
LABEL_7:
        v4 = *(_DWORD *)v4;
        if ( !v4 )
          return;
      }
      else
      {
        v9 = 0;
        do
        {
          v10 = *(_DWORD *)(*(_DWORD *)(v4 + 24) + 4 * v9++);
          a1 = sub_248804(v10, 1, a3, a4);
        }
        while ( *(_DWORD *)(v4 + 20) > v9 );
        v4 = *(_DWORD *)v4;
        if ( !v4 )
          return;
      }
    }
  }
}
