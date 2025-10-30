int __fastcall sub_3E864(double *a1)
{
  pthread_t v1; // r0
  bool v2; // nf
  int v3; // r0
  int v4; // r3
  int v5; // r0
  fd_set v7; // [sp+10h] [bp-8B4h] BYREF
  char v8[4]; // [sp+90h] [bp-834h] BYREF
  _BYTE *v9; // [sp+890h] [bp-34h] BYREF
  struct timeval timeout; // [sp+894h] [bp-30h] BYREF
  char s[16]; // [sp+89Ch] [bp-28h] BYREF
  int v12; // [sp+8ACh] [bp-18h]
  fd_set *v13; // [sp+8B0h] [bp-14h]
  double *v14; // [sp+8B4h] [bp-10h]
  unsigned int i; // [sp+8B8h] [bp-Ch]
  void *ptr; // [sp+8BCh] [bp-8h]

  v14 = a1;
  v1 = pthread_self();
  pthread_detach(v1);
  snprintf(s, 0x10u, "%d/RStratum", *(_DWORD *)v14);
  sub_2A95C(s);
  while ( !*((_BYTE *)v14 + 105) )
  {
    if ( !sub_22910((int)v14) && !sub_3E610((int)v14) )
    {
      sub_28EB4((int)v14);
      sub_3DC04((int)v14);
      sub_3E12C(v14);
      sub_481A0(v14);
      while ( (unsigned __int8)sub_2A490((int)v14) != 1 )
      {
        sub_348D4((unsigned __int8 *)v14);
        if ( *((_BYTE *)v14 + 105) )
          return 0;
        sub_21CEC(5000);
      }
    }
    v13 = &v7;
    for ( i = 0; i <= 0x1F; ++i )
      v13->__fds_bits[i] = 0;
    v4 = *((_DWORD *)v14 + 147);
    v3 = -v4;
    v2 = -v4 < 0;
    LOBYTE(v4) = v4 & 0x1F;
    v5 = v3 & 0x1F;
    if ( !v2 )
      v4 = -v5;
    v7.__fds_bits[*((_DWORD *)v14 + 147) / 32] |= 1 << v4;
    timeout.tv_sec = 90;
    timeout.tv_usec = 0;
    if ( !sub_22910((int)v14) && (v12 = select(*((_DWORD *)v14 + 147) + 1, &v7, 0, 0, &timeout), v12 <= 0) )
    {
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(v8, 0x800u, "Stratum select failed on pool %d with value %d", *(_DWORD *)v14, v12);
        sub_1DB6C(7, v8, 0);
      }
      ptr = 0;
    }
    else
    {
      ptr = sub_22BC0((int)v14);
    }
    if ( ptr )
    {
      sub_3E730((int)v14);
      if ( (unsigned __int8)sub_26144(v14, (int)ptr) != 1
        && (unsigned __int8)sub_3CB18(v14, (const char *)ptr) != 1
        && (unsigned __int8)sub_24E58(v14, (int)ptr) != 1 )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 5 )
        {
          snprintf(v8, 0x800u, "Unknown stratum msg: %s", (const char *)ptr);
          sub_1DB6C(6, v8, 0);
        }
      }
      else if ( *((_BYTE *)v14 + 680) )
      {
        v9 = sub_30CD8();
        *((_BYTE *)v14 + 680) = 0;
        sub_42C20(v14, v9);
        v9[280] = 1;
        sub_388CC((int)v9);
        sub_30E0C((void **)&v9, "cgminer.c", "stratum_rthread", 7670);
      }
      free(ptr);
    }
    else
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
      {
        snprintf(v8, 0x800u, "Stratum connection to pool %d interrupted", *(_DWORD *)v14);
        sub_1DB6C(5, v8, 0);
      }
      ++*((_DWORD *)v14 + 32);
      ++dword_90F38;
      if ( !sub_3E7EC((int)v14) || byte_92FB4 )
        sub_3DC04((int)v14);
      sub_3E12C(v14);
      if ( v14 == (double *)sub_2E98C() )
        sub_36334();
      while ( (unsigned __int8)sub_2A490((int)v14) != 1 )
      {
        sub_348D4((unsigned __int8 *)v14);
        if ( *((_BYTE *)v14 + 105) )
          return 0;
        sub_21CEC(5000);
      }
    }
  }
  sub_28EB4((int)v14);
  return 0;
}
