int sub_34A3C()
{
  int v0; // r4
  char *v1; // r0
  int v2; // r3
  int v3; // r8
  __int64 v4; // r4
  int v5; // r0
  int v6; // r10
  const char *v7; // r0
  char *v8; // r4
  size_t v9; // r0
  unsigned int *v10; // r3
  unsigned int v11; // r2
  unsigned int v12; // r2
  int v14; // r6
  int v15; // r3
  int v16; // r0
  struct sysinfo info; // [sp+18h] [bp-844h] BYREF
  char s[2052]; // [sp+58h] [bp-804h] BYREF

  prctl(15, "api", 0);
  while ( !*(_BYTE *)(dword_5BAF94 + 364) )
  {
    pthread_mutex_lock(&stru_B3C4C);
    pthread_cond_wait(&cond, &stru_B3C4C);
    if ( sysinfo(&info) )
    {
      if ( byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 5 )
      {
        v0 = *_errno_location();
        v1 = strerror(v0);
        snprintf(s, 0x800u, "Failed to get sysinfo, errno:%u, reason:%s\n", v0, v1);
        sub_3AF5C(6, s, 0, v2);
      }
      dword_5BC038 = time(0);
    }
    else
    {
      dword_5BC038 = info.uptime;
    }
    v3 = sub_729F4();
    sub_283F0(v3);
    v4 = 0;
    sub_28498(v3);
    sub_29CAC(v3);
    sub_28540(v3);
    sub_28624(v3);
    sub_2875C(v3);
    sub_28874(v3);
    sub_28960(v3);
    sub_28A34(v3);
    v5 = sub_28ADC(v3);
    v6 = sub_73538(v5);
    do
    {
      if ( sub_266F0(v4) )
      {
        v14 = sub_729F4();
        if ( byte_4B6CA6 && (byte_5BC044 || byte_4B6CA5 || dword_AFC2C > 6) )
        {
          snprintf(s, 0x800u, "%s: now i = %d", "bitmain_update_api_stats", (_DWORD)v4);
          sub_3AF5C(7, s, 0, v15);
        }
        v16 = sub_74774(v4, HIDWORD(v4));
        sub_72C40(v14, "index", v16);
        sub_28BC4(v14, v4);
        sub_28C88(v14, v4);
        sub_28D80(v14, v4);
        sub_28E88(v14, v4);
        sub_28F4C(v14, v4);
        sub_29040(v14, v4);
        sub_29350(v14, v4);
        sub_2915C(v14, v4);
        sub_29658(v14, v4);
        sub_294C8(v14, v4);
        sub_2971C(v14, v4);
        sub_297E4(v14, v4);
        sub_298B8(v14, v4);
        sub_299B0(v14, v4);
        sub_299FC(v14, v4);
        sub_29A48(v14, v4);
        sub_29A94(v14, v4);
        sub_29AEC(v14, v4);
        sub_29EA8(v14);
        sub_739D4(v6, v14);
      }
      ++v4;
    }
    while ( v4 != 4 );
    sub_72C40(v3, "chain", v6);
    sub_29C04(v3);
    sub_29D54(v3);
    sub_29E00(v3);
    sub_29B80(v3);
    v7 = (const char *)sub_6D06C(v3, 0);
    v8 = (char *)v7;
    if ( v7 )
    {
      v9 = strlen(v7);
      sub_3483C((int)v8, v9 + 1);
      free(v8);
    }
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 4) != -1 )
      {
        v10 = (unsigned int *)(v3 + 4);
        __dmb(0xBu);
        do
        {
          v11 = __ldrex(v10);
          v12 = v11 - 1;
        }
        while ( __strex(v12, v10) );
        if ( !v12 )
          sub_74C7C(v3);
      }
    }
    pthread_mutex_unlock(&stru_B3C4C);
  }
  return 0;
}
