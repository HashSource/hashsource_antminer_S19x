char *__fastcall sub_53160(size_t *a1)
{
  char *v1; // r4
  unsigned int v3; // r7
  size_t v4; // r5
  ssize_t v5; // r0
  size_t v6; // r6
  char *v7; // r0
  char *v8; // r0
  char *v9; // r10
  char *v11; // r0
  int v12; // r3
  int v13; // r3
  char v14[2048]; // [sp+0h] [bp-3000h] BYREF
  _BYTE s[10240]; // [sp+800h] [bp-2800h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      memset(s, 0, sizeof(s));
      v5 = recv(dword_B3808, s, 0x2800u, 0);
      v6 = v5;
      if ( !v5 )
        break;
      if ( v5 < 0 )
      {
        if ( (unsigned int)dword_B308C > 3 )
        {
          snprintf(v14, 0x800u, "Receive message fail: %d", v5);
          sub_3B6AC(3, v14, 0, v12);
        }
        return 0;
      }
      if ( v1 )
      {
        v7 = (char *)realloc(v1, v5 + v4);
        v1 = v7;
        if ( !v7 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(v14, "realloc for MES config infor fail");
            sub_3B6AC(3, v14, 0, *(int *)" fail");
            return 0;
          }
          return 0;
        }
        v8 = &v7[v4];
        v4 += v6;
        memcpy(v8, s, v6);
      }
      else
      {
        v11 = (char *)calloc(1u, v5);
        v4 = v6;
        v1 = v11;
        if ( !v11 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            strcpy(v14, "malloc for MES config infor fail");
            sub_3B6AC(3, v14, 0, *(int *)"fail");
            return 0;
          }
          return 0;
        }
        memcpy(v11, s, v6);
      }
      v9 = &v1[v4 - 1];
      if ( *v9 == 10 )
        goto LABEL_15;
      v3 = 0;
    }
    ++v3;
    sleep(1u);
    v9 = &v1[v4 - 1];
    if ( *v9 == 10 )
      break;
    if ( v3 > 6 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        strcpy(v14, "Not receive all MES config information");
        sub_3B6AC(3, v14, 0, *(unsigned __int16 *)"");
        return 0;
      }
      return 0;
    }
  }
LABEL_15:
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v14, 0x800u, "Receive total message length: %d", v4);
    sub_3B6AC(3, v14, 0, v13);
  }
  *v9 = 0;
  *a1 = v4;
  if ( (unsigned int)dword_B308C > 3 )
  {
    strcpy(v14, "Receive all message from MES system");
    sub_3B6AC(3, v14, 0, *(int *)" system");
  }
  return v1;
}
