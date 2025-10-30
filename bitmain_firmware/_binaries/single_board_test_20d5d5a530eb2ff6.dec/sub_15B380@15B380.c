int __fastcall sub_15B380(int **a1, int a2, _DWORD *a3, _DWORD *a4, int a5, int a6)
{
  int v10; // r5
  int v11; // r0
  int v12; // r11
  int (*v13)(void); // r2
  int v14; // r0
  int v15; // r4
  _DWORD *v16; // r0
  _DWORD *v17; // r10
  void **v18; // r0
  int v20; // r0
  _DWORD v21[5]; // [sp+10h] [bp-14h] BYREF

  sub_10C554((pthread_rwlock_t *)global_engine_lock);
  if ( !*a1 )
  {
    v20 = sub_DF6B4(
            (unsigned __int8 *(__fastcall *)(unsigned __int8 *))sub_15B2EC,
            (int (**)(const char *, const char *))sub_15B2F0);
    if ( !v20 )
    {
LABEL_17:
      v15 = 0;
      goto LABEL_18;
    }
    *a1 = (int *)v20;
    sub_CE014(a2);
  }
  if ( a5 )
  {
    v10 = a5;
    while ( 1 )
    {
      v11 = (int)*a1;
      v21[0] = *a4;
      v12 = sub_DFA98(v11, (int)v21);
      if ( !v12 )
      {
        v16 = CRYPTO_malloc((void *)0x10);
        v17 = v16;
        if ( !v16 )
          goto LABEL_17;
        v16[3] = 1;
        *v16 = *a4;
        v18 = sub_10BFCC();
        v17[1] = v18;
        if ( !v18 )
        {
          v15 = 0;
          CRYPTO_free(v17);
          goto LABEL_18;
        }
        v17[2] = 0;
        sub_DF7A0(*a1, v17);
        v12 = sub_DFA98((int)*a1, (int)v21);
        if ( v17 != (_DWORD *)v12 )
        {
          v15 = 0;
          sub_10BDB4((void **)v17[1]);
          CRYPTO_free(v17);
          goto LABEL_18;
        }
      }
      sub_10BB98(*(int **)(v12 + 4), (int)a3);
      if ( !sub_10BD3C(*(int **)(v12 + 4), (int)a3) )
        goto LABEL_17;
      *(_DWORD *)(v12 + 12) = 0;
      if ( a6 )
      {
        if ( !sub_CDC90(a3) )
        {
          v15 = 0;
          sub_D0048(38, 184, 109, (int)"crypto/engine/eng_table.c", 130);
          goto LABEL_18;
        }
        v14 = *(_DWORD *)(v12 + 8);
        if ( v14 )
          sub_CDCEC(v14, 0, v13);
        --v10;
        *(_DWORD *)(v12 + 8) = a3;
        ++a4;
        *(_DWORD *)(v12 + 12) = 1;
        if ( !v10 )
          break;
      }
      else
      {
        --v10;
        ++a4;
        if ( !v10 )
          break;
      }
    }
  }
  v15 = 1;
LABEL_18:
  sub_10C564((pthread_rwlock_t *)global_engine_lock);
  return v15;
}
