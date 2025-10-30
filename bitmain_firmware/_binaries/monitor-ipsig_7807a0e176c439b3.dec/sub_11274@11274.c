int sub_11274()
{
  fd_set *p_tv_usec; // r3
  int v1; // r5
  int v2; // r12
  void *v3; // r8
  int v4; // r0
  int v5; // r2
  size_t v7; // r0
  socklen_t addr_len; // [sp+Ch] [bp-8Ch] BYREF
  struct timeval timeout; // [sp+10h] [bp-88h] BYREF
  fd_set readfds; // [sp+18h] [bp-80h] BYREF

  timeout.tv_usec = 0;
  p_tv_usec = (fd_set *)&timeout.tv_usec;
  timeout.tv_sec = 2;
  do
  {
    p_tv_usec->__fds_bits[1] = 0;
    p_tv_usec = (fd_set *)((char *)p_tv_usec + 4);
  }
  while ( p_tv_usec != (fd_set *)&readfds.__fds_bits[31] );
  v1 = dword_220A4;
  LOBYTE(v2) = dword_220A4 & 0x1F;
  if ( dword_220A4 <= 0 )
    v2 = -(-dword_220A4 & 0x1F);
  readfds.__fds_bits[dword_220A4 / 32] |= 1 << v2;
  v3 = calloc(0x1Eu, 1u);
  v4 = select(v1 + 1, &readfds, 0, 0, &timeout);
  if ( v4 == -1 )
    exit(-1);
  if ( !v4 )
  {
LABEL_13:
    if ( ++dword_220CC == 5 )
      goto LABEL_11;
LABEL_14:
    free(v3);
    return 0;
  }
  LOBYTE(v5) = dword_220A4 & 0x1F;
  if ( dword_220A4 <= 0 )
    v5 = -(-dword_220A4 & 0x1F);
  if ( (readfds.__fds_bits[dword_220A4 / 32] & (1 << v5)) == 0 )
  {
    if ( dword_220CC == 5 )
    {
LABEL_11:
      dword_220CC = 0;
      puts("Time Out");
      free(v3);
      return 1;
    }
    goto LABEL_14;
  }
  addr_len = 16;
  if ( recvfrom(dword_220A4, v3, 0x1Eu, 0, (struct sockaddr *)&dword_220D4, &addr_len) <= 0 )
  {
    printf("read error....");
    goto LABEL_13;
  }
  printf("rev:\n%s\t", (const char *)v3);
  dword_220CC = 0;
  v7 = strlen(byte_220AC);
  if ( !strncmp((const char *)v3, byte_220AC, v7) )
  {
    printf("send_ack(\"1\");");
    sub_10F58(1);
    sub_1121C("OK");
    free(v3);
    return 1;
  }
  else
  {
    printf("send_ack(\"0\");");
    sub_10F58(0);
    sub_1121C("FAILD");
    free(v3);
    return 0;
  }
}
