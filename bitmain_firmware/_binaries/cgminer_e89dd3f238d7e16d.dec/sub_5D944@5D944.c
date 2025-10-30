int __fastcall sub_5D944(int a1)
{
  pthread_t v1; // r0
  size_t v2; // r0
  size_t v3; // r0
  size_t v4; // r0
  char src[4]; // [sp+18h] [bp-21Ch] BYREF
  int v7; // [sp+1Ch] [bp-218h]
  int v8; // [sp+20h] [bp-214h]
  int v9; // [sp+24h] [bp-210h]
  int v10; // [sp+28h] [bp-20Ch]
  int v11; // [sp+2Ch] [bp-208h]
  int v12; // [sp+30h] [bp-204h]
  int v13; // [sp+34h] [bp-200h]
  char s1[4]; // [sp+38h] [bp-1FCh] BYREF
  int v15; // [sp+3Ch] [bp-1F8h]
  int v16; // [sp+40h] [bp-1F4h]
  int v17; // [sp+44h] [bp-1F0h]
  int v18; // [sp+48h] [bp-1ECh]
  int v19; // [sp+4Ch] [bp-1E8h]
  int v20; // [sp+50h] [bp-1E4h]
  int v21; // [sp+54h] [bp-1E0h]
  _DWORD buf[32]; // [sp+58h] [bp-1DCh] BYREF
  char v23[4]; // [sp+D8h] [bp-15Ch] BYREF
  _BYTE v24[252]; // [sp+DCh] [bp-158h] BYREF
  pthread_t newthread; // [sp+1D8h] [bp-5Ch] BYREF
  int v26; // [sp+1DCh] [bp-58h] BYREF
  pthread_attr_t attr; // [sp+1E0h] [bp-54h] BYREF
  void *v28[4]; // [sp+204h] [bp-30h] BYREF
  void *ptr; // [sp+214h] [bp-20h]
  ssize_t v30; // [sp+218h] [bp-1Ch]
  int fd; // [sp+21Ch] [bp-18h]
  int v32; // [sp+220h] [bp-14h]
  unsigned int i; // [sp+224h] [bp-10h]

  v32 = a1;
  v1 = pthread_self();
  pthread_detach(v1);
  v28[3] = 0;
  qmemcpy(v28, "ct_a/mai", 8);
  v28[2] = (void *)*(unsigned __int16 *)"n";
  prctl(15, v28);
  pthread_attr_init(&attr);
  pthread_attr_setstacksize(&attr, 0x100000u);
  fd = *(_DWORD *)(v32 + 8);
  v30 = 0;
  while ( 1 )
  {
    memset(buf, 0, sizeof(buf));
    v30 = recv(fd, buf, 0x80u, 0);
    if ( v30 <= 0 )
      return 0;
    *(_DWORD *)src = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    *(_DWORD *)s1 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v26 = 0;
    _isoc99_sscanf(buf, "%x%s%s", &v26, s1, src);
    if ( !strcmp(s1, "regist") )
    {
      ptr = malloc(0x98u);
      memset(ptr, 0, 0x98u);
      for ( i = 0; i < dword_8CC20; ++i )
      {
        if ( !strcmp(src, (const char *)&unk_88820 + 136 * i + 4) )
        {
          *((_DWORD *)ptr + 3) = *((_DWORD *)&unk_88820 + 34 * i);
          *((_DWORD *)ptr + 37) = *((_DWORD *)&unk_88820 + 34 * i + 33);
          break;
        }
      }
      if ( i == dword_8CC20 )
      {
        *(_DWORD *)v23 = 0;
        memset(v24, 0, sizeof(v24));
        sprintf(v23, "%x %d %s %s %s", 63, 0, "reg_resp", "no_name", src);
        v2 = strlen(v23);
        send(fd, v23, v2 + 1, 0);
        free(ptr);
      }
      else
      {
        *(_DWORD *)ptr = dword_86580;
        v3 = strlen(src);
        memcpy((char *)ptr + 16, src, v3 + 1);
        *((_DWORD *)ptr + 36) = 0;
        pthread_create(&newthread, &attr, (void *(*)(void *))sub_5D5EC, ptr);
        while ( !*((_DWORD *)ptr + 36) )
          usleep(0x2710u);
        if ( *(_DWORD *)ptr != dword_86580 )
          dword_86580 = *(_DWORD *)ptr;
        *(_DWORD *)v23 = 0;
        memset(v24, 0, sizeof(v24));
        sprintf(v23, "%x %d %s %s %s", 63, dword_86580, "reg_resp", "OK", src);
        v4 = strlen(v23);
        send(fd, v23, v4 + 1, 0);
        ++dword_86580;
      }
    }
    else
    {
      memcpy((char *)&unk_8CC44 + 128 * dword_90C44, buf, 0x80u);
      ++dword_90C44;
    }
  }
}
