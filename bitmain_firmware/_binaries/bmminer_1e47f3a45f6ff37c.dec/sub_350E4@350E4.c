int sub_350E4()
{
  int v0; // r4
  char *v1; // r0
  int v2; // r3
  __int64 v3; // r6
  int v4; // r8
  int v5; // r0
  int v6; // r9
  const char *v7; // r0
  char *v8; // r4
  size_t v9; // r0
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int v14; // r4
  int v15; // r3
  int v16; // r0
  struct sysinfo info; // [sp+10h] [bp-844h] BYREF
  char s[2052]; // [sp+50h] [bp-804h] BYREF

  prctl(15, "api", 0);
  while ( !*(_BYTE *)(dword_5BFE4C + 364) )
  {
    pthread_mutex_lock(&stru_B69BC);
    pthread_cond_wait(&stru_B69D8, &stru_B69BC);
    if ( sysinfo(&info) )
    {
      if ( byte_5C0EFC || byte_4B9A21 || dword_B3094 > 5 )
      {
        v0 = *_errno_location();
        v1 = strerror(v0);
        snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v1);
        sub_3B6AC(6, s, 0, v2);
      }
      LODWORD(flt_5C0EF0) = time(0);
    }
    else
    {
      flt_5C0EF0 = *(float *)&info.uptime;
    }
    v3 = 0;
    v4 = sub_75ED4();
    sub_2896C(v4);
    sub_28A14(v4);
    sub_2A234(v4);
    sub_28ABC(v4);
    sub_28BA4(v4);
    sub_28CDC(v4);
    sub_28DFC(v4);
    sub_28EEC(v4);
    sub_28FC0(v4);
    v5 = sub_29068(v4);
    v6 = sub_76A14(v5);
    do
    {
      if ( sub_26C0C(v3) )
      {
        v14 = sub_75ED4();
        if ( byte_4B9A22 && (byte_5C0EFC || byte_4B9A21 || dword_B3094 > 6) )
        {
          snprintf(s, 0x800u, "%s: now i = %d", "bitmain_update_api_stats", (_DWORD)v3);
          sub_3B6AC(7, s, 0, v15);
        }
        v16 = sub_77C3C(v3, HIDWORD(v3));
        sub_7611C(v14, "index", v16);
        sub_29150(v14, v3);
        sub_29210(v14, v3);
        sub_29308(v14, v3);
        sub_29410(v14, v3);
        sub_294D0(v14, v3);
        sub_295C0(v14, v3);
        sub_298C8(v14, v3);
        sub_296D8(v14, v3);
        sub_29BE4(v14, v3);
        sub_29A40(v14, v3);
        sub_29CA4(v14, v3);
        sub_29D68(v14, v3);
        sub_29E38(v14, v3);
        sub_29F30(v14, v3);
        sub_29F7C(v14, v3);
        sub_29FC8(v14, v3);
        sub_2A014(v14, v3);
        sub_2A068(v14, v3);
        sub_2A430(v14);
        sub_76EA4(v6, v14);
      }
      ++v3;
    }
    while ( v3 != 4 );
    sub_7611C(v4, "chain", v6);
    sub_2A18C(v4);
    sub_2A2DC(v4);
    sub_2A388(v4);
    sub_2A108(v4);
    v7 = (const char *)sub_705A0(v4, 0);
    v8 = (char *)v7;
    if ( v7 )
    {
      v9 = strlen(v7);
      sub_34EEC((int)v8, v9 + 1);
      free(v8);
    }
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 4) != -1 )
      {
        v10 = (unsigned int *)(v4 + 4);
        __dmb(0xFu);
        do
        {
          v11 = __ldrex(v10);
          v12 = v11 - 1;
        }
        while ( __strex(v12, v10) );
        if ( !v12 )
          sub_780F0(v4);
      }
    }
    pthread_mutex_unlock(&stru_B69BC);
  }
  return 0;
}
