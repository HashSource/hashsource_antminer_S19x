int *__fastcall sub_19DF0(int *result, char *a2)
{
  int v2; // r3
  bool v3; // r3
  size_t v4; // r4
  int *v5; // r0
  char *v6; // r0
  bool v7; // r3
  int *v9; // [sp+14h] [bp-8C0h]
  fd_set v10; // [sp+1Ch] [bp-8B8h] BYREF
  char v11[24]; // [sp+9Ch] [bp-838h] BYREF
  struct timeval timeout; // [sp+89Ch] [bp-38h] BYREF
  fd_set *v13; // [sp+8A4h] [bp-30h]
  int *v14; // [sp+8A8h] [bp-2Ch]
  int *v15; // [sp+8ACh] [bp-28h]
  char *v16; // [sp+8B0h] [bp-24h]
  unsigned int i; // [sp+8B4h] [bp-20h]
  void *buf; // [sp+8B8h] [bp-1Ch]
  int v19; // [sp+8BCh] [bp-18h]
  bool v20; // [sp+8C3h] [bp-11h]
  size_t n; // [sp+8C4h] [bp-10h]

  v9 = result;
  v16 = 0;
  n = 0;
  v20 = 0;
  v15 = 0;
  v14 = 0;
  v19 = 0;
  buf = 0;
  if ( result && a2 )
  {
    result = (int *)strlen(a2);
    v16 = (char *)result + 1;
    buf = a2;
    n = (size_t)result + 1;
    while ( !v20 )
    {
      timeout.tv_sec = 0;
      timeout.tv_usec = 50000;
      v13 = &v10;
      for ( i = 0; i <= 0x1F; ++i )
        v13->__fds_bits[i] = 0;
      v2 = *v9 & 0x1F;
      if ( *v9 <= 0 )
        v2 = -(-*v9 & 0x1F);
      v10.__fds_bits[*v9 / 32] |= 1 << v2;
      result = (int *)select(*v9 + 1, 0, &v10, 0, &timeout);
      v15 = result;
      if ( (int)result <= 0 )
      {
        if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
        {
          snprintf(v11, 0x800u, "%s: send select failed, ret = %d", "send_api_result", v15);
          return (int *)sub_1DB6C(3, v11, 0);
        }
        return result;
      }
      result = (int *)send(*v9, buf, n, 0);
      v14 = result;
      if ( (int)result >= 0 )
      {
        n -= (unsigned int)v14;
        buf = (char *)v14 + (_DWORD)buf;
        if ( !v14 )
          ++v19;
        v7 = (int)n <= 0 || v19 > 2;
        v20 = v7;
      }
      else
      {
        ++v19;
        result = _errno_location();
        if ( *result != 11 )
        {
          result = _errno_location();
          if ( *result != 11 )
          {
            if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
            {
              v4 = (size_t)&v16[-n];
              v5 = _errno_location();
              v6 = strerror(*v5);
              snprintf(v11, 0x800u, "%s: send (%d:%d) failed %s", "send_api_result", v16, v4, v6);
              return (int *)sub_1DB6C(3, v11, 0);
            }
            return result;
          }
        }
        if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
        {
          snprintf(v11, 0x800u, "%s: send EAGAIN ", "send_api_result");
          result = (int *)sub_1DB6C(7, v11, 0);
        }
        v3 = (int)n <= 0 || v19 > 2;
        v20 = v3;
      }
    }
  }
  return result;
}
