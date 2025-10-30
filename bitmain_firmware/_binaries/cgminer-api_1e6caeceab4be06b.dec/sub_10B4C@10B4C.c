int __fastcall sub_10B4C(const char *a1, char *name, unsigned int a3)
{
  struct hostent *v6; // r7
  int v7; // r0
  int v8; // r8
  int v9; // r4
  char **h_addr_list; // r3
  int v11; // r3
  size_t v12; // r0
  char *v13; // r9
  int v14; // r7
  char *v15; // r6
  ssize_t v16; // r0
  int v17; // r5
  int v18; // r5
  size_t v19; // r1
  int *v21; // r0
  char *v22; // r0
  int *v23; // r0
  char *v24; // r0
  int *v25; // r0
  char *v26; // r0
  int *v27; // r0
  char *v28; // r0
  struct sockaddr v29; // [sp+0h] [bp-10h] BYREF

  v6 = gethostbyname(name);
  if ( !v6 )
  {
    printf("Couldn't get hostname: '%s'\n", name);
    return 1;
  }
  v7 = socket(2, 1, 0);
  v8 = v7;
  if ( v7 == -1 )
  {
    v21 = _errno_location();
    v22 = strerror(*v21);
    printf("Socket initialisation failed: %s\n", v22);
    return 1;
  }
  v9 = 0;
  memset(&v29.sa_data[4], 0, 10);
  h_addr_list = v6->h_addr_list;
  *(_DWORD *)v29.sa_data = 0;
  v29.sa_family = 2;
  v11 = *(_DWORD *)*h_addr_list;
  *(_WORD *)v29.sa_data = __rev16(a3);
  *(_DWORD *)&v29.sa_data[2] = v11;
  if ( connect(v7, &v29, 0x10u) < 0 )
  {
    v23 = _errno_location();
    v24 = strerror(*v23);
    printf("Socket connect failed: %s\n", v24);
    return 1;
  }
  v12 = strlen(a1);
  if ( send(v8, a1, v12, 0) >= 0 )
  {
    v13 = (char *)malloc(0x10000u);
    if ( v13 )
    {
      v14 = 0xFFFF;
      while ( 1 )
      {
        v15 = &v13[v9];
        v16 = recv(v8, &v13[v9], v14 - v9, 0);
        v17 = v16;
        v9 += v16;
        if ( v16 < 0 )
          break;
        if ( !v16 )
          goto LABEL_18;
        if ( v14 == v9 )
        {
          v18 = v14 + 0x10000;
          v19 = v14 + 0x10000;
          v14 += 0xFFFF;
          v13 = (char *)realloc(v13, v19);
          if ( !v13 )
          {
            printf("Err: OOM (%d)\n", v18);
            return 1;
          }
        }
      }
      v25 = _errno_location();
      v17 = 1;
      v26 = strerror(*v25);
      printf("Recv failed: %s\n", v26);
LABEL_18:
      *v15 = 0;
      if ( dword_22078 )
      {
        puts(v13);
      }
      else
      {
        printf("Reply was '%s'\n", v13);
        sub_109B8(v13);
      }
      goto LABEL_20;
    }
    printf("Err: OOM (%d)\n", 0x10000);
    return 1;
  }
  v27 = _errno_location();
  v17 = 1;
  v28 = strerror(*v27);
  printf("Send failed: %s\n", v28);
LABEL_20:
  close(v8);
  return v17;
}
