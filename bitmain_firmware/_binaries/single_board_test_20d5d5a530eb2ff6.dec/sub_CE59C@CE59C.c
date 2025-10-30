int __fastcall sub_CE59C(int a1)
{
  int v2; // r6
  const char *v3; // r7
  int v4; // r0
  bool v5; // zf
  int v6; // r3
  int v7; // r2
  int v8; // r6
  unsigned int v10; // r3
  unsigned int *v11; // r2
  unsigned int i; // r1
  unsigned int v13; // r0
  bool v14; // zf
  unsigned int v15; // r7

  if ( a1 )
  {
    if ( *(_DWORD *)a1 && *(_DWORD *)(a1 + 4) )
    {
      sub_10C554(global_engine_lock);
      v2 = dword_6DF40C;
      if ( dword_6DF40C )
      {
        v3 = *(const char **)a1;
        do
        {
          v4 = strcmp(*(const char **)v2, v3);
          v2 = *(_DWORD *)(v2 + 96);
          v5 = v2 == 0;
          if ( v2 )
            v5 = v4 == 0;
        }
        while ( !v5 );
        if ( !v4 )
        {
          sub_D0048(38, 120, 103, "crypto/engine/eng_list.c", 69);
          goto LABEL_15;
        }
        v6 = dword_6DF410;
        if ( !dword_6DF410 || *(_DWORD *)(dword_6DF410 + 96) )
        {
          v7 = 87;
LABEL_14:
          sub_D0048(38, 120, 110, "crypto/engine/eng_list.c", v7);
LABEL_15:
          v8 = 0;
          sub_D0048(38, 105, 110, "crypto/engine/eng_list.c", 308);
LABEL_16:
          sub_10C564(global_engine_lock);
          return v8;
        }
        *(_DWORD *)(dword_6DF410 + 96) = a1;
        *(_DWORD *)(a1 + 92) = v6;
      }
      else
      {
        if ( dword_6DF410 )
        {
          v7 = 75;
          goto LABEL_14;
        }
        *(_DWORD *)(a1 + 92) = 0;
        dword_6DF40C = a1;
        sub_CE074((int)sub_CE7D0);
      }
      __dmb(0xBu);
      v10 = *(_DWORD *)(a1 + 80);
      __dmb(0xBu);
      v11 = (unsigned int *)(a1 + 80);
      for ( i = v10; ; i = v10 )
      {
        v13 = v10 + 1;
        __dmb(0xBu);
        do
        {
          v10 = __ldrex(v11);
          v14 = v10 == i;
          if ( v10 != i )
            break;
          v15 = __strex(v13, v11);
          v14 = v15 == 0;
        }
        while ( v15 );
        __dmb(0xBu);
        if ( v14 )
          break;
      }
      v8 = 1;
      *(_DWORD *)(a1 + 96) = 0;
      dword_6DF410 = a1;
      goto LABEL_16;
    }
    sub_D0048(38, 105, 108, "crypto/engine/eng_list.c", 303);
    return 0;
  }
  else
  {
    sub_D0048(38, 105, 67, "crypto/engine/eng_list.c", 299);
    return 0;
  }
}
