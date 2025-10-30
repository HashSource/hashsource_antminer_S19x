int __fastcall sub_3F6E4(double *a1)
{
  pthread_t v1; // r0
  fd_set v3; // [sp+10h] [bp-8B4h] BYREF
  char v4[4]; // [sp+90h] [bp-834h] BYREF
  _BYTE *v5; // [sp+890h] [bp-34h] BYREF
  struct timeval timeout; // [sp+894h] [bp-30h] BYREF
  char s[16]; // [sp+89Ch] [bp-28h] BYREF
  int v8; // [sp+8ACh] [bp-18h]
  fd_set *v9; // [sp+8B0h] [bp-14h]
  pthread_mutex_t *v10; // [sp+8B4h] [bp-10h]
  unsigned int i; // [sp+8B8h] [bp-Ch]
  void *ptr; // [sp+8BCh] [bp-8h]

  v10 = (pthread_mutex_t *)a1;
  v1 = pthread_self();
  pthread_detach(v1);
  snprintf(s, 0x10u, "%d/RStratum", v10->__lock);
  sub_2B968(s);
  while ( !v10[4].__size[9] )
  {
    if ( !sub_23188((int)v10) && !sub_3F494((int)v10) )
    {
      sub_29EF4(v10);
      sub_3EAA8((int)v10);
      sub_3EFC0(v10);
      sub_48F30(v10);
      while ( (unsigned __int8)sub_2B4B0(v10) != 1 )
      {
        sub_35934((unsigned __int8 *)v10);
        if ( v10[4].__size[9] )
          return 0;
        sub_2251C(5000);
      }
    }
    v9 = &v3;
    for ( i = 0; i <= 0x1F; ++i )
      v9->__fds_bits[i] = 0;
    v3.__fds_bits[v10[24].__kind / 32] |= 1 << (v10[24].__kind % 32);
    timeout.tv_sec = 90;
    timeout.tv_usec = 0;
    if ( !sub_23188((int)v10) && (v8 = select(v10[24].__kind + 1, &v3, 0, 0, &timeout), v8 <= 0) )
    {
      if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
      {
        snprintf(v4, 0x800u, "Stratum select failed on pool %d with value %d", v10->__lock, v8);
        sub_1E4EC(7, v4, 0);
      }
      ptr = 0;
    }
    else
    {
      ptr = sub_23428((int)v10);
    }
    if ( ptr )
    {
      sub_3F5B4((int)v10);
      if ( (unsigned __int8)sub_26AA0(v10, (int)ptr) != 1
        && (unsigned __int8)sub_3D9F4((double *)&v10->__lock, (const char *)ptr) != 1
        && (unsigned __int8)sub_25764(v10, (int)ptr) != 1 )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 5 )
        {
          snprintf(v4, 0x800u, "Unknown stratum msg: %s", (const char *)ptr);
          sub_1E4EC(6, v4, 0);
        }
      }
      else if ( v10[29].__size[0] )
      {
        v5 = sub_31E10();
        v10[29].__size[0] = 0;
        sub_439D8(v10, v5);
        v5[280] = 1;
        sub_3986C((int)v5);
        sub_31F40((void **)&v5, "cgminer.c", "stratum_rthread", 7670);
      }
      free(ptr);
    }
    else
    {
      if ( byte_91F58 || byte_87769 || dword_8697C > 4 )
      {
        snprintf(v4, 0x800u, "Stratum connection to pool %d interrupted", v10->__lock);
        sub_1E4EC(5, v4, 0);
      }
      ++v10[5].__owner;
      ++dword_920D0;
      if ( !sub_3F66C((int)v10) || byte_9414C )
        sub_3EAA8((int)v10);
      sub_3EFC0(v10);
      if ( (pthread_mutex_t *)sub_2F984() == v10 )
        sub_37350();
      while ( (unsigned __int8)sub_2B4B0(v10) != 1 )
      {
        sub_35934((unsigned __int8 *)v10);
        if ( v10[4].__size[9] )
          return 0;
        sub_2251C(5000);
      }
    }
  }
  sub_29EF4(v10);
  return 0;
}
