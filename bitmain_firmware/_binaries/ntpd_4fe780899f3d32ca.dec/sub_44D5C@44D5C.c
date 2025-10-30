const char *sub_44D5C()
{
  const char *result; // r0
  int v1; // r4
  char **v2; // r5
  const char *v3; // r1
  const char *v4; // t1
  struct addrinfo s; // [sp+4h] [bp-24h] BYREF

  dword_BD564[0] = 0;
  dword_BD568 = 0;
  dword_BD56C = 0;
  dword_BD570 = 0;
  result = (const char *)memset(&s, 0, sizeof(s));
  v1 = dword_BD560;
  s.ai_socktype = 1;
  s.ai_protocol = 6;
  if ( dword_BD560 )
  {
    v1 = 0;
  }
  else
  {
    v2 = off_B46C4;
    v3 = "gpsd";
    result = "localhost";
    while ( 1 )
    {
      result = (const char *)getaddrinfo(result, v3, &s, (struct addrinfo **)&dword_BD560);
      dword_BD564[v1] = (int)result;
      if ( !result )
        break;
      v4 = v2[2];
      v2 += 2;
      result = v4;
      ++v1;
      dword_BD560 = 0;
      if ( !v4 )
        break;
      v3 = v2[1];
    }
  }
  dword_BD574 = v1;
  return result;
}
