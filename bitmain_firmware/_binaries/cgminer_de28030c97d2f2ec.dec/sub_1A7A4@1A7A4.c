int *__fastcall sub_1A7A4(int *result, char *a2)
{
  bool v2; // r3
  size_t v3; // r4
  int *v4; // r0
  char *v5; // r0
  bool v6; // r3
  int *v8; // [sp+14h] [bp-8C0h]
  fd_set v9; // [sp+1Ch] [bp-8B8h] BYREF
  char v10[24]; // [sp+9Ch] [bp-838h] BYREF
  struct timeval timeout; // [sp+89Ch] [bp-38h] BYREF
  fd_set *v12; // [sp+8A4h] [bp-30h]
  int *v13; // [sp+8A8h] [bp-2Ch]
  int *v14; // [sp+8ACh] [bp-28h]
  char *v15; // [sp+8B0h] [bp-24h]
  unsigned int i; // [sp+8B4h] [bp-20h]
  void *buf; // [sp+8B8h] [bp-1Ch]
  int v18; // [sp+8BCh] [bp-18h]
  bool v19; // [sp+8C3h] [bp-11h]
  size_t n; // [sp+8C4h] [bp-10h]

  v8 = result;
  v15 = 0;
  n = 0;
  v19 = 0;
  v14 = 0;
  v13 = 0;
  v18 = 0;
  buf = 0;
  if ( result && a2 )
  {
    result = (int *)strlen(a2);
    v15 = (char *)result + 1;
    buf = a2;
    n = (size_t)result + 1;
    while ( !v19 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 50000;
      v12 = &v9;
      for ( i = 0; i <= 0x1F; ++i )
        v12->__fds_bits[i] = 0;
      v9.__fds_bits[*v8 / 32] |= 1 << (*v8 % 32);
      result = (int *)select(*v8 + 1, 0, &v9, 0, &timeout);
      v14 = result;
      if ( (int)result <= 0 )
      {
        if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
        {
          snprintf(v10, 0x800u, "%s: send select failed, ret = %d", "send_api_result", v14);
          return (int *)sub_1E4EC(3, v10, 0);
        }
        return result;
      }
      result = (int *)send(*v8, buf, n, 0);
      v13 = result;
      if ( (int)result >= 0 )
      {
        n -= (unsigned int)v13;
        buf = (char *)v13 + (_DWORD)buf;
        if ( !v13 )
          ++v18;
        v6 = (int)n <= 0 || v18 > 2;
        v19 = v6;
      }
      else
      {
        ++v18;
        result = _errno_location();
        if ( *result != 11 )
        {
          result = _errno_location();
          if ( *result != 11 )
          {
            if ( byte_91F58 || byte_87769 || dword_8697C > 2 )
            {
              v3 = (size_t)&v15[-n];
              v4 = _errno_location();
              v5 = strerror(*v4);
              snprintf(v10, 0x800u, "%s: send (%d:%d) failed %s", "send_api_result", v15, v3, v5);
              return (int *)sub_1E4EC(3, v10, 0);
            }
            return result;
          }
        }
        if ( byte_87768 && (byte_91F58 || byte_87769 || dword_8697C > 6) )
        {
          snprintf(v10, 0x800u, "%s: send EAGAIN ", "send_api_result");
          result = (int *)sub_1E4EC(7, v10, 0);
        }
        v2 = (int)n <= 0 || v18 > 2;
        v19 = v2;
      }
    }
  }
  return result;
}
