int sub_10FE8()
{
  int v0; // r0
  int v2; // [sp+Ch] [bp-8h] BYREF

  v0 = socket(2, 2, 0);
  dword_220A4 = v0;
  if ( v0 == -1 )
  {
    printf("socket error");
    return -1;
  }
  else
  {
    v2 = 1;
    if ( setsockopt(v0, 1, 6, &v2, 4u) == -1 )
    {
      printf("set socket error...");
      return -1;
    }
    else
    {
      dword_220D4 = -1674117118;
      dword_220D8 = 0;
      dword_220DC = 0;
      dword_220E0 = 0;
      dword_220EC = 0;
      dword_220F0 = 0;
      dword_220E4 = -1690894334;
      dword_220E8 = -1;
      if ( bind(dword_220A4, (const struct sockaddr *)&dword_220D4, 0x10u) == -1 )
        printf("bind error...");
      return 0;
    }
  }
}
