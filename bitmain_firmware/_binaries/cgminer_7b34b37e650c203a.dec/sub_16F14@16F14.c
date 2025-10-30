int __fastcall sub_16F14(const char *a1, int a2, int a3, int a4)
{
  const char *v7; // r9
  size_t v8; // r0
  size_t v9; // r2
  __int16 *v10; // r3
  signed int v11; // r5
  int v12; // r2
  int result; // r0
  int v14; // r7
  int v15; // r10
  _BOOL4 v16; // r3
  fd_set *p_tv_usec; // r3
  int v18; // r8
  char *v19; // r0
  int v20; // [sp+Ch] [bp-898h]
  signed int v21; // [sp+10h] [bp-894h]
  struct timeval timeout; // [sp+18h] [bp-88Ch] BYREF
  fd_set writefds; // [sp+20h] [bp-884h] BYREF
  char s[2048]; // [sp+A0h] [bp-804h] BYREF

  v7 = a1;
  v8 = strlen(a1);
  v9 = v8;
  if ( a2 )
  {
    v9 = v8 + 1;
    *(_WORD *)&v7[v8] = 93;
  }
  if ( a4 )
  {
    strcpy((char *)&v7[v9], ",\"id\":1}");
    v9 = strlen(v7);
  }
  v21 = v9 + 1;
  if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
  {
    v10 = (__int16 *)"";
    if ( v9 > 0xA )
      v10 = &word_4A834;
    snprintf(s, 0x800u, "API: send reply: (%d) '%.10s%s'", v21, v7, v10);
    sub_20F58(7, s, 0);
  }
  v11 = v21;
  LOBYTE(v12) = a3 & 0x1F;
  result = 1;
  if ( a3 <= 0 )
    v12 = -(-a3 & 0x1F);
  v14 = 0;
  v15 = 0;
  v20 = 1 << v12;
  while ( 1 )
  {
    v16 = v15 <= 4;
    if ( v11 <= 0 )
      v16 = 0;
    if ( !v16 )
      return result;
    p_tv_usec = (fd_set *)&timeout.tv_usec;
    timeout.tv_sec = 0;
    timeout.tv_usec = 50000;
    do
    {
      p_tv_usec->__fds_bits[1] = 0;
      p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
    }
    while ( &writefds.__fds_bits[31] != (__fd_mask *)p_tv_usec );
    writefds.__fds_bits[a3 / 32] |= v20;
    result = select(a3 + 1, 0, &writefds, 0, &timeout);
    if ( result <= 0 )
    {
      if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
      {
        snprintf(s, 0x800u, "API: send select failed (%d)", result);
        return sub_20F58(4, s, 0);
      }
      return result;
    }
    result = send(a3, v7, v11, 0);
    v18 = result;
    ++v14;
    if ( result < 0 )
    {
      result = *_errno_location();
      if ( result != 11 )
      {
        if ( byte_74500 || byte_68BD4 || dword_67DB4 > 3 )
        {
          v19 = strerror(result);
          snprintf(s, 0x800u, "API: send (%d:%d) failed: %s", v21, v21 - v11, v19);
          return sub_20F58(4, s, 0);
        }
        return result;
      }
LABEL_27:
      ++v15;
    }
    else if ( v14 == 1 )
    {
      if ( v11 != result )
      {
        if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
        {
          snprintf(s, 0x800u, "API: sent %d of %d first go", result, v11);
          result = sub_20F58(7, s, 0);
        }
        goto LABEL_26;
      }
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        snprintf(s, 0x800u, "API: sent all of %d first go", v11);
        result = sub_20F58(7, s, 0);
      }
LABEL_47:
      v11 -= v18;
      v7 += v18;
    }
    else if ( v11 == result )
    {
      if ( !byte_68BD5 || !byte_74500 && !byte_68BD4 && dword_67DB4 <= 6 )
        goto LABEL_47;
      snprintf(s, 0x800u, "API: sent all of remaining %d (sendc=%d)", v11, v14);
      v11 -= v18;
      result = sub_20F58(7, s, 0);
      v7 += v18;
    }
    else
    {
      if ( byte_68BD5 && (byte_74500 || byte_68BD4 || dword_67DB4 > 6) )
      {
        snprintf(s, 0x800u, "API: sent %d of remaining %d (sendc=%d)", result, v11, v14);
        result = sub_20F58(7, s, 0);
      }
LABEL_26:
      v11 -= v18;
      v7 += v18;
      if ( !v18 )
        goto LABEL_27;
    }
  }
}
