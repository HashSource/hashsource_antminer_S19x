int sub_11460()
{
  int v0; // r3
  int v1; // r0
  int v2; // r3
  size_t v3; // r0
  socklen_t addr_len; // [sp+Ch] [bp-A0h] BYREF
  struct timeval timeout; // [sp+10h] [bp-9Ch] BYREF
  fd_set readfds; // [sp+18h] [bp-94h] BYREF
  ssize_t v9; // [sp+98h] [bp-14h]
  void *buf; // [sp+9Ch] [bp-10h]
  fd_set *p_readfds; // [sp+A0h] [bp-Ch]
  unsigned int i; // [sp+A4h] [bp-8h]

  timeout.tv_sec = 2;
  timeout.tv_usec = 0;
  p_readfds = &readfds;
  for ( i = 0; i <= 0x1F; ++i )
    p_readfds->__fds_bits[i] = 0;
  LOBYTE(v0) = dword_220A8 & 0x1F;
  if ( dword_220A8 <= 0 )
    v0 = -(-dword_220A8 & 0x1F);
  readfds.__fds_bits[dword_220A8 / 32] |= 1 << v0;
  buf = 0;
  buf = calloc(0x1Eu, 1u);
  v1 = select(dword_220A8 + 1, &readfds, 0, 0, &timeout);
  if ( v1 == -1 )
    exit(-1);
  if ( !v1 )
  {
    ++dword_220D4;
    goto LABEL_19;
  }
  LOBYTE(v2) = dword_220A8 & 0x1F;
  if ( dword_220A8 <= 0 )
    v2 = -(-dword_220A8 & 0x1F);
  if ( ((1 << v2) & readfds.__fds_bits[dword_220A8 / 32]) == 0 )
    goto LABEL_19;
  addr_len = 16;
  v9 = recvfrom(dword_220A8, buf, 0x1Eu, 0, (struct sockaddr *)&word_220D8, &addr_len);
  if ( v9 <= 0 )
  {
    printf("read error....");
    ++dword_220D4;
LABEL_19:
    if ( dword_220D4 == 5 )
    {
      dword_220D4 = 0;
      puts("Time Out");
      free(buf);
      return 1;
    }
    else
    {
      free(buf);
      return 0;
    }
  }
  printf("rev:\n%s\t", (const char *)buf);
  dword_220D4 = 0;
  v3 = strlen(byte_220B4);
  if ( !strncmp((const char *)buf, byte_220B4, v3) )
  {
    printf("send_ack(\"1\");");
    sub_10FE4();
    sub_113E4("OK");
    free(buf);
    return 1;
  }
  else
  {
    printf("send_ack(\"0\");");
    sub_11054();
    sub_113E4("FAILD");
    free(buf);
    return 0;
  }
}
