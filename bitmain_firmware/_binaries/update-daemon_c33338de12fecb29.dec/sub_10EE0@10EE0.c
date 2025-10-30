int __fastcall sub_10EE0(const char *a1)
{
  int v2; // r0
  int v3; // r6
  size_t v4; // r0
  ssize_t v5; // r0
  int result; // r0
  struct sockaddr v7; // [sp+0h] [bp-420h] BYREF
  _DWORD buf[260]; // [sp+10h] [bp-410h] BYREF

  if ( !a1 )
    return -3;
  *(_DWORD *)&v7.sa_data[6] = 0;
  *(_DWORD *)&v7.sa_data[10] = 0;
  v7.sa_family = 2;
  *(_DWORD *)&v7.sa_data[2] = inet_addr("127.0.0.1");
  *(_WORD *)v7.sa_data = sub_10C5C("22322");
  v2 = socket(2, 1, 0);
  v3 = v2;
  if ( v2 < 0 )
  {
    perror("socket err:");
    return -1;
  }
  else if ( connect(v2, &v7, 0x10u) < 0 )
  {
    perror("connect err:");
    return -2;
  }
  else
  {
    v4 = strlen(a1);
    send(v3, a1, v4 + 1, 0);
    memset(buf, 0, 1024);
    v5 = recv(v3, buf, 0x400u, 0);
    if ( v5 <= 0 )
    {
      return -3;
    }
    else
    {
      *((_BYTE *)buf + v5) = 0;
      result = sub_10C5C((const char *)buf);
      if ( result == 200 )
        return 0;
    }
  }
  return result;
}
