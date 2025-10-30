int sub_5DB8C()
{
  int *v0; // r6
  FILE *v1; // r0
  FILE *v2; // r7
  char *v3; // r0
  int v4; // r3
  const char *v5; // r0
  int v6; // t1
  unsigned int v7; // r4
  char *v8; // r0
  unsigned __int8 *v9; // r1
  int v10; // t1
  unsigned int v11; // r1
  char *v12; // r0
  unsigned __int8 *v13; // r1
  int v14; // t1
  char *v15; // r0
  unsigned __int8 *v16; // r1
  int v17; // t1
  int v18; // r3
  int i; // r1
  int v20; // r2
  int *v22; // r0
  __int64 v23; // [sp+0h] [bp-171Ch]
  FILE *stream; // [sp+Ch] [bp-1710h]
  char *endptr; // [sp+14h] [bp-1708h] BYREF
  char s[512]; // [sp+18h] [bp-1704h] BYREF
  _BYTE v27[5376]; // [sp+218h] [bp-1504h] BYREF
  int v28; // [sp+1718h] [bp-4h] BYREF

  v0 = (int *)v27;
  memset(s, 0, sizeof(s));
  memset(v27, 0, sizeof(v27));
  v1 = fopen("/mnt/card/worklog.txt", "r");
  if ( v1 )
  {
    v2 = v1;
    stream = fopen("/mnt/card/pattern_1midstate_super.bin", "w");
    if ( stream )
    {
      v23 = 0;
      if ( fgets(s, 511, v2) )
      {
        while ( !feof(v2) )
        {
          ++v23;
          v3 = strstr(s, "coreid");
          if ( !v3 )
            goto LABEL_23;
          v4 = (unsigned __int8)v3[6];
          v5 = v3 + 6;
          if ( v4 == 32 )
          {
            do
              v6 = *(unsigned __int8 *)++v5;
            while ( v6 == 32 );
          }
          v7 = strtol(v5, &endptr, 10);
          printf("read coreid :%d ", v7);
          if ( v7 > 0x70 )
          {
            puts("prase coreid failed");
            return -1;
          }
          *(_DWORD *)&v27[48 * v7] = bswap32(*(_DWORD *)&v27[48 * v7]);
          v8 = strstr(s, "nonce");
          if ( !v8 )
          {
LABEL_23:
            printf("Fail to read line[%lld] nonce\n", v23);
            return -1;
          }
          v9 = (unsigned __int8 *)(v8 + 5);
          if ( v8[5] == 32 )
          {
            do
              v10 = *++v9;
            while ( v10 == 32 );
          }
          sub_5DAEC(&v27[48 * v7], v9, 8);
          v11 = bswap32(*(_DWORD *)&v27[48 * v7]);
          *(_DWORD *)&v27[48 * v7] = v11;
          printf("load nonce:0x%08x \n", v11);
          v12 = strstr(s, "midstate");
          if ( !v12 )
          {
            printf("Fail to read line[%lld] midstate\n", v23);
            return -1;
          }
          v13 = (unsigned __int8 *)(v12 + 8);
          if ( v12[8] == 32 )
          {
            do
              v14 = *++v13;
            while ( v14 == 32 );
          }
          sub_5DAEC(&v27[48 * v7 + 16], v13, 64);
          v15 = strstr(s, "data");
          if ( !v15 )
          {
            printf("Fail to read line[%lld] data\n", v23);
            return -1;
          }
          v16 = (unsigned __int8 *)(v15 + 4);
          if ( v15[4] == 32 )
          {
            do
              v17 = *++v16;
            while ( v17 == 32 );
          }
          sub_5DAEC(&v27[48 * v7 + 4], v16, 24);
          if ( !fgets(s, 511, v2) )
            break;
        }
      }
      v18 = 0;
      for ( i = 0; i != 112; ++i )
      {
        v20 = *(_DWORD *)&v27[v18];
        v18 += 48;
        if ( !v20 )
        {
          printf("Fail to read coreid:%d nonce\n", i);
          return -1;
        }
      }
      do
      {
        v22 = v0;
        v0 += 12;
        fwrite(v22, 1u, 0x30u, stream);
      }
      while ( &v28 != v0 );
      puts("gen /mnt/card/pattern_1midstate_super.bin success!");
      fclose(v2);
      fclose(stream);
      return 0;
    }
    else
    {
      printf("Fail to open pattern file %s.\n", "/mnt/card/pattern_1midstate_super.bin");
      return -1;
    }
  }
  else
  {
    printf("Fail to open pattern file %s.\n", "/mnt/card/worklog.txt");
    return -1;
  }
}
