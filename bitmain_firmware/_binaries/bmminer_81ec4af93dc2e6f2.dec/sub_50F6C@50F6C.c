char *__fastcall sub_50F6C(size_t *a1)
{
  char *v1; // r4
  unsigned int v3; // r5
  size_t v4; // r10
  ssize_t v5; // r0
  size_t v6; // r7
  size_t v7; // r5
  char *v8; // r0
  char *v9; // r6
  char *v11; // r0
  void *v12; // r3
  int v13; // r3
  int v14; // r3
  char v15[2048]; // [sp+0h] [bp-3000h] BYREF
  _BYTE s[10240]; // [sp+800h] [bp-2800h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      v5 = recv(dword_B03A0, s, 0x2800u, 0);
      v6 = v5;
      if ( !v5 )
        break;
      if ( v5 < 0 )
      {
        if ( (unsigned int)off_AFC24 <= 3 )
          return 0;
        snprintf(v15, 0x800u, "Receive message fail: %d", v5);
        v1 = 0;
        sub_3AF5C(3, v15, 0, v13);
        return v1;
      }
      if ( v1 )
      {
        v7 = v4 + v5;
        v8 = (char *)realloc(v1, v4 + v5);
        v1 = v8;
        if ( !v8 )
        {
          if ( (unsigned int)off_AFC24 <= 3 )
            return 0;
          strcpy(v15, "realloc for MES config infor fail");
          sub_3AF5C(3, v15, 0, *(int *)" fail");
          return v1;
        }
        memcpy(&v8[v4], s, v6);
        v9 = &v1[v7 - 1];
        if ( *v9 == 10 )
          goto LABEL_17;
        v4 += v6;
        v3 = 0;
      }
      else
      {
        v11 = (char *)calloc(1u, v5);
        v1 = v11;
        if ( !v11 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            strcpy(v15, "malloc for MES config infor fail");
            sub_3AF5C(3, v15, 0, *(int *)"fail");
            return v1;
          }
          return 0;
        }
        memcpy(v11, s, v6);
        v9 = &v1[v6 - 1];
        if ( *v9 == 10 )
        {
          v7 = v6;
          goto LABEL_17;
        }
        v4 = v6;
        v3 = 0;
      }
    }
    ++v3;
    sleep(1u);
    v9 = &v1[v4 - 1];
    if ( *v9 == 10 )
      break;
    if ( v3 > 6 )
    {
      if ( (unsigned int)off_AFC24 <= 3 )
        return 0;
      v1 = 0;
      strcpy(v15, "Not receive all MES config information");
      sub_3AF5C(3, v15, 0, *(unsigned __int16 *)"");
      return v1;
    }
  }
  v7 = v4;
LABEL_17:
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v15, 0x800u, "Receive total message length: %d", v7);
    sub_3AF5C(3, v15, 0, v14);
  }
  *a1 = v7;
  v12 = off_AFC24;
  *v9 = 0;
  if ( (unsigned int)v12 <= 3 )
    return v1;
  strcpy(v15, "Receive all message from MES system");
  sub_3AF5C(3, v15, 0, *(int *)" system");
  return v1;
}
