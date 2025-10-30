int __fastcall sub_109F0(const char *a1, const char *a2, uint16_t a3)
{
  int *v4; // r0
  char *v5; // r0
  int *v6; // r0
  char *v7; // r0
  size_t v8; // r0
  int *v9; // r0
  char *v10; // r0
  int *v11; // r0
  char *v12; // r0
  int v17; // [sp+18h] [bp-3Ch] BYREF
  int v18; // [sp+1Ch] [bp-38h] BYREF
  int optval; // [sp+20h] [bp-34h] BYREF
  struct sockaddr s; // [sp+24h] [bp-30h] BYREF
  ssize_t v21; // [sp+34h] [bp-20h]
  int fd; // [sp+38h] [bp-1Ch]
  struct hostent *v23; // [sp+3Ch] [bp-18h]
  int i; // [sp+40h] [bp-14h]
  int v25; // [sp+44h] [bp-10h]
  void *ptr; // [sp+48h] [bp-Ch]
  int v27; // [sp+4Ch] [bp-8h]

  v27 = 0;
  ptr = 0;
  v23 = gethostbyname(a2);
  if ( v23 )
  {
    fd = socket(2, 1, 0);
    if ( fd == -1 )
    {
      v4 = _errno_location();
      v5 = strerror(*v4);
      printf("Socket initialisation failed: %s\n", v5);
      return 1;
    }
    else
    {
      memset(&s, 0, sizeof(s));
      s.sa_family = 2;
      *(_DWORD *)&s.sa_data[2] = **(_DWORD **)v23->h_addr_list;
      *(_WORD *)s.sa_data = htons(a3);
      if ( connect(fd, &s, 0x10u) >= 0 )
      {
        optval = 1;
        v18 = 5;
        v17 = 2;
        setsockopt(fd, 1, 9, &optval, 4u);
        setsockopt(fd, 6, 1, &optval, 4u);
        setsockopt(fd, 6, 6, &optval, 4u);
        setsockopt(fd, 6, 4, &v18, 4u);
        setsockopt(fd, 6, 5, &v17, 4u);
        v8 = strlen(a1);
        v21 = send(fd, a1, v8, 0);
        if ( v21 >= 0 )
        {
          v25 = 0xFFFF;
          ptr = malloc(0x10000u);
          if ( ptr )
          {
            for ( i = 0; ; i += v21 )
            {
              if ( v25 == i )
              {
                v25 += 0xFFFF;
                ptr = realloc(ptr, v25 + 1);
                if ( !ptr )
                  break;
              }
              v21 = recv(fd, (char *)ptr + i, v25 - i, 0);
              if ( v21 < 0 )
              {
                v11 = _errno_location();
                v12 = strerror(*v11);
                printf("Recv failed: %s\n", v12);
                v27 = 1;
LABEL_18:
                *((_BYTE *)ptr + i) = 0;
                if ( dword_22080 )
                {
                  puts((const char *)ptr);
                }
                else
                {
                  printf("Reply was '%s'\n", (const char *)ptr);
                  sub_10814((char *)ptr);
                }
                goto LABEL_21;
              }
              if ( !v21 )
                goto LABEL_18;
            }
          }
          printf("Err: OOM (%d)\n", v25 + 1);
          return 1;
        }
        else
        {
          v9 = _errno_location();
          v10 = strerror(*v9);
          printf("Send failed: %s\n", v10);
          v27 = 1;
LABEL_21:
          close(fd);
          return v27;
        }
      }
      else
      {
        v6 = _errno_location();
        v7 = strerror(*v6);
        printf("Socket connect failed: %s\n", v7);
        return 1;
      }
    }
  }
  else
  {
    printf("Couldn't get hostname: '%s'\n", a2);
    return 1;
  }
}
