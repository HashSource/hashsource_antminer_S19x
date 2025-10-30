int sub_110BC()
{
  int v0; // r3
  int optval; // [sp+8h] [bp-Ch] BYREF
  int v3; // [sp+Ch] [bp-8h]

  dword_220A8 = socket(2, 2, 0);
  if ( dword_220A8 == -1 )
  {
    printf("socket error");
    return -1;
  }
  else
  {
    optval = 1;
    v3 = 0;
    v3 = setsockopt(dword_220A8, 1, 6, &optval, 4u);
    if ( v3 == -1 )
    {
      printf("set socket error...");
      return -1;
    }
    else
    {
      bzero(&word_220E8, 0x10u);
      word_220E8 = 2;
      dword_220EC = htonl(0xFFFFFFFF);
      word_220EA = htons(0x379Bu);
      bzero(&word_220D8, 0x10u);
      word_220D8 = 2;
      dword_220DC = htonl(0);
      word_220DA = htons(0x379Cu);
      v0 = bind(dword_220A8, (const struct sockaddr *)&word_220D8, 0x10u);
      if ( v0 == -1 )
      {
        printf("bind error...");
        return 0;
      }
    }
  }
  return v0;
}
