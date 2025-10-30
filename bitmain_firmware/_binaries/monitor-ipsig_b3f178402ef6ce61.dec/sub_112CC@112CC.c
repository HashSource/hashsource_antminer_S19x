int sub_112CC()
{
  fd_set *p_tv_usec; // r3
  int v1; // r5
  void *v2; // r8
  int v3; // r0
  size_t v5; // r0
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
  v1 = dword_219E0;
  readfds.__fds_bits[dword_219E0 / 32] |= 1 << (dword_219E0 % 32);
  v2 = calloc(0x1Eu, 1u);
  v3 = select(v1 + 1, &readfds, 0, 0, &timeout);
  if ( v3 == -1 )
    exit(-1);
  if ( !v3 )
  {
LABEL_5:
    if ( ++dword_21A08 != 5 )
    {
LABEL_6:
      free(v2);
      return 0;
    }
    goto LABEL_9;
  }
  if ( ((readfds.__fds_bits[dword_219E0 / 32] >> (dword_219E0 % 32)) & 1) == 0 )
  {
    if ( dword_21A08 != 5 )
      goto LABEL_6;
LABEL_9:
    dword_21A08 = 0;
    puts("Time Out");
    free(v2);
    return 1;
  }
  addr_len = 16;
  if ( recvfrom(dword_219E0, v2, 0x1Eu, 0, (struct sockaddr *)&word_21A10, &addr_len) <= 0 )
  {
    printf("read error....");
    goto LABEL_5;
  }
  printf("rev:\n%s\t", (const char *)v2);
  dword_21A08 = 0;
  v5 = strlen(byte_219E8);
  if ( !strncmp((const char *)v2, byte_219E8, v5) )
  {
    printf("send_ack(\"1\");");
    sub_10F5C(1);
    sub_11274("OK");
    free(v2);
    return 1;
  }
  else
  {
    printf("send_ack(\"0\");");
    sub_10F5C(0);
    sub_11274("FAILD");
    free(v2);
    return 0;
  }
}
