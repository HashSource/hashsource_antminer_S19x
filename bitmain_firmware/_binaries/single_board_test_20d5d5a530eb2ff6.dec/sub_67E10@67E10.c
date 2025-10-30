void __fastcall sub_67E10(int a1)
{
  char *v2; // r10
  char *v3; // r9
  char *v4; // r8
  char *v5; // r7
  size_t v6; // r0
  int v7; // r3
  int v8; // lr
  int v9; // r1
  _DWORD *v10; // lr
  int v11; // r2
  int v12; // r3
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int v17; // r1
  _DWORD *v18; // r3
  size_t v19; // r0
  FILE *v20; // r0
  FILE *c; // [sp+10h] [bp-40Ch]
  char s[1028]; // [sp+18h] [bp-404h] BYREF

  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    if ( !dword_7169AC )
      dword_7169AC = (int)fopen("/mnt/card/worklog.txt", "ab");
    if ( !*(_DWORD *)(a1 + 8) && (bswap32(*(_DWORD *)(a1 + 60)) & 0x1FFFFFF) < dword_718B88 )
    {
      v2 = sub_67AC8((unsigned __int8 *)(a1 + 16), 32);
      v3 = sub_67AC8((unsigned __int8 *)(a1 + 48), 12);
      v4 = sub_67AC8((unsigned __int8 *)(a1 + 60), 4);
      v5 = sub_67AC8((unsigned __int8 *)(a1 + 64), 4);
      memset(s, 0, 0x400u);
      printf("======== o yeah get asic 0 coreid %d nonce\n", *(_DWORD *)(a1 + 12));
      sprintf(s, "midstate %s data %s nonce %s version %s coreid %d\r\n", v2, v3, v4, v5, *(_DWORD *)(a1 + 12));
      v6 = strlen(s);
      fwrite(s, v6, 1u, (FILE *)dword_7169AC);
      fflush((FILE *)dword_7169AC);
      printf("write alternative pattern to file, coreid: %d\n", *(_DWORD *)(a1 + 12));
      v7 = *(_DWORD *)(a1 + 12);
      v8 = 16 * v7;
      if ( !dword_716DC8[17 * v7 + 1] )
      {
        c = (FILE *)dword_7055A8;
        if ( !dword_7055A8 )
        {
          v20 = fopen("/tmp/card/worklog0.txt", "ab");
          v7 = *(_DWORD *)(a1 + 12);
          c = v20;
          dword_7055A8 = (int)v20;
          v8 = 16 * v7;
        }
        v9 = *(_DWORD *)(a1 + 20);
        v10 = &dword_716DC8[v8 + v7];
        v11 = *(_DWORD *)(a1 + 24);
        v12 = *(_DWORD *)(a1 + 28);
        v10 += 4;
        *v10 = *(_DWORD *)(a1 + 16);
        v10[1] = v9;
        v10[2] = v11;
        v10[3] = v12;
        v10 += 4;
        v13 = *(_DWORD *)(a1 + 36);
        v14 = *(_DWORD *)(a1 + 40);
        v15 = *(_DWORD *)(a1 + 44);
        *v10 = *(_DWORD *)(a1 + 32);
        v10[1] = v13;
        v10[2] = v14;
        v10[3] = v15;
        v16 = *(_DWORD *)(a1 + 56);
        v17 = *(_DWORD *)(a1 + 52);
        v18 = &dword_716DC8[17 * *(_DWORD *)(a1 + 12) + 12];
        *v18 = *(_DWORD *)(a1 + 48);
        v18[1] = v17;
        v18[2] = v16;
        dword_716DC8[17 * *(_DWORD *)(a1 + 12) + 15] = *(_DWORD *)(a1 + 60);
        dword_716DC8[17 * *(_DWORD *)(a1 + 12) + 16] = *(_DWORD *)(a1 + 64);
        dword_716DC8[17 * *(_DWORD *)(a1 + 12) + 3] = *(_DWORD *)(a1 + 12);
        dword_716DC8[17 * *(_DWORD *)(a1 + 12) + 2] = *(_DWORD *)(a1 + 8);
        dword_716DC8[17 * *(_DWORD *)(a1 + 12) + 1] = 1;
        v19 = strlen(s);
        fwrite(s, v19, 1u, c);
        fflush((FILE *)dword_7055A8);
        printf("write unique nonce to file, core: %d\n", *(_DWORD *)(a1 + 12));
      }
      if ( v2 )
        free(v2);
      if ( v3 )
        free(v3);
      if ( v4 )
        free(v4);
      if ( v5 )
        free(v5);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 4) = 0;
    *(_DWORD *)(a1 + 60) = 0;
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    memset((void *)(a1 + 16), 0, 0x20u);
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 56) = 0;
  }
}
