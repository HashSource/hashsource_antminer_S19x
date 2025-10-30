const char *sub_45BB4()
{
  const char *result; // r0
  int v1; // r4
  char **v2; // r5
  const char *v3; // t1
  struct addrinfo req; // [sp+4h] [bp-24h] BYREF

  result = (_BYTE *)(&dword_0 + 1);
  req.ai_flags = 0;
  req.ai_family = 0;
  v1 = dword_BE574;
  dword_BE578[0] = 0;
  dword_BE57C = 0;
  memset(&req.ai_addrlen, 0, 16);
  dword_BE580 = 0;
  dword_BE584 = 0;
  req.ai_protocol = 6;
  req.ai_socktype = 1;
  if ( dword_BE574 )
  {
    v1 = 0;
  }
  else
  {
    v2 = off_B56C4;
    result = "localhost";
    do
    {
      result = (const char *)getaddrinfo(result, v2[1], &req, (struct addrinfo **)&dword_BE574);
      dword_BE578[v1] = (int)result;
      if ( !result )
        break;
      v3 = v2[2];
      v2 += 2;
      result = v3;
      ++v1;
      dword_BE574 = 0;
    }
    while ( v3 );
  }
  dword_BE588 = v1;
  return result;
}
