int sub_1AEB0()
{
  int *v0; // r0
  char *v1; // r0
  int v2; // r0
  size_t v3; // r0
  struct __jmp_buf_tag v5; // [sp+10h] [bp-79ECh] BYREF
  char v6[212]; // [sp+128h] [bp-78D4h] BYREF
  char v7[212]; // [sp+928h] [bp-70D4h] BYREF
  char v8[212]; // [sp+1128h] [bp-68D4h] BYREF
  char v9[212]; // [sp+1928h] [bp-60D4h] BYREF
  char v10[212]; // [sp+2128h] [bp-58D4h] BYREF
  char v11[212]; // [sp+2928h] [bp-50D4h] BYREF
  char v12[212]; // [sp+3128h] [bp-48D4h] BYREF
  char v13[212]; // [sp+3928h] [bp-40D4h] BYREF
  char v14[20]; // [sp+4128h] [bp-38D4h] BYREF
  _DWORD v15[2]; // [sp+4928h] [bp-30D4h] BYREF
  int v16; // [sp+4930h] [bp-30CCh] BYREF
  int v17; // [sp+4934h] [bp-30C8h] BYREF
  int v18; // [sp+4938h] [bp-30C4h] BYREF
  unsigned int v19; // [sp+493Ch] [bp-30C0h] BYREF
  char v20[16]; // [sp+4940h] [bp-30BCh] BYREF
  char v21[4096]; // [sp+4950h] [bp-30ACh] BYREF
  char v22[8192]; // [sp+5950h] [bp-20ACh] BYREF
  socklen_t addr_len; // [sp+7950h] [bp-ACh] BYREF
  struct sockaddr addr; // [sp+7954h] [bp-A8h] BYREF
  int v25; // [sp+79D4h] [bp-28h] BYREF
  int fd; // [sp+79D8h] [bp-24h] BYREF
  void *ptr; // [sp+79E0h] [bp-1Ch]
  int v29; // [sp+79E4h] [bp-18h]
  ssize_t v30; // [sp+79E8h] [bp-14h]
  int v31; // [sp+79ECh] [bp-10h]
  int *p_fd; // [sp+79F0h] [bp-Ch]
  void (__fastcall *v33)(int *); // [sp+79F4h] [bp-8h]

  v31 = 0;
  fd = -1;
  v25 = -1;
  v30 = 0;
  memset(v22, 0, sizeof(v22));
  memset(v21, 0, sizeof(v21));
  memset(v20, 0, sizeof(v20));
  v19 = 2;
  v29 = 0;
  ptr = 0;
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    snprintf(v6, 0x800u, "Start %s function\n", "api");
    sub_1DB6C(5, v6, 0);
  }
  v33 = (void (__fastcall *)(int *))sub_1A4DC;
  p_fd = &fd;
  if ( _sigsetjmp(&v5, 0) )
  {
    v33(p_fd);
    _pthread_unwind_next((__pthread_unwind_buf_t *)&v5);
  }
  _pthread_register_cancel((__pthread_unwind_buf_t *)&v5);
  v31 = sub_19798();
  if ( v31 == -2147483642 )
  {
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      snprintf(v7, 0x800u, "%s: init socket failed", "api");
      sub_1DB6C(3, v7, 0);
    }
    if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
    {
      strcpy(v8, "cgminer restart");
      sub_1DB6C(3, v8, 0);
    }
    _assert_fail("0", "api_new.c", 0x741u, "api");
  }
  fd = v31;
  while ( byte_865B8 != 1 )
  {
    addr_len = 128;
    v25 = accept(fd, &addr, &addr_len);
    if ( v25 < 0 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        v0 = _errno_location();
        v1 = strerror(*v0);
        snprintf(v9, 0x800u, "%s: exec accept failed (%s)", "api", v1);
        sub_1DB6C(3, v9, 0);
      }
      break;
    }
    v18 = 1;
    v17 = 5;
    v16 = 2;
    setsockopt(v25, 1, 9, &v18, 4u);
    setsockopt(v25, 6, 1, &v18, 4u);
    setsockopt(v25, 6, 6, &v18, 4u);
    setsockopt(v25, 6, 4, &v17, 4u);
    setsockopt(v25, 6, 5, &v16, 4u);
    v15[0] = 10;
    v15[1] = 0;
    v31 = setsockopt(v25, 1, 21, v15, 8u);
    if ( v31 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v10, 0x800u, "%s:setsocket SO_SNDTIMEO failed\n", "api");
        sub_1DB6C(3, v10, 0);
      }
      close(v25);
    }
    v31 = setsockopt(v25, 1, 20, v15, 8u);
    if ( v31 )
    {
      if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
      {
        snprintf(v11, 0x800u, "%s:setsocket SO_RCVTIMEO failed\n", "api");
        sub_1DB6C(3, v11, 0);
      }
      close(v25);
    }
    v30 = recv(v25, v22, 0xFFFu, 0);
    if ( v30 > 0 )
    {
      v22[v30] = 0;
      memset(v20, 0, sizeof(v20));
      memset(byte_865C0, 0, sizeof(byte_865C0));
      dword_865BC = time(0);
      getnameinfo(&addr, 0x80u, byte_865C0, 0x10u, 0, 0, 1u);
      if ( byte_865D0 && (byte_90DC0 || byte_865D1 || dword_857E4 > 6) )
      {
        snprintf(v12, 0x800u, "connect_addr: %s", byte_865C0);
        sub_1DB6C(7, v12, 0);
      }
      strlen(v22);
      v2 = sub_1ABE8(&v25, (int)v22);
      v31 = v2;
      if ( v2 )
      {
        v29 = sub_651D4(v2);
        v3 = strlen(v22);
        v31 = sub_19C20(v22, v3 + 1, v20, &v19);
        if ( v31 >= 0 )
        {
          sub_1A278(v29, v20, v19);
        }
        else
        {
          if ( byte_90DC0 || byte_865D1 || dword_857E4 > 2 )
          {
            snprintf(v13, 0x800u, "%s: input invaild param format", "api");
            sub_1DB6C(3, v13, 0);
          }
          sub_1524C(v29, 0, 24, "Missing JSON 'command'");
        }
        if ( v19 == 2 )
        {
          memset(v21, 0, sizeof(v21));
          sub_1A9F8(v29, v21);
          sub_19DF0(&v25, v21);
          sub_12B40(v29);
        }
        else
        {
          ptr = (void *)sub_5F850(v29, 24576);
          sub_19DF0(&v25, (char *)ptr);
          sub_12B40(v29);
          free(ptr);
        }
      }
    }
    else
    {
      v22[0] = 0;
    }
    close(v25);
  }
  _pthread_unregister_cancel((__pthread_unwind_buf_t *)&v5);
  v33(p_fd);
  if ( byte_90DC0 || byte_865D1 || dword_857E4 > 4 )
  {
    snprintf(v14, 0x800u, "End %s function !!!", "api");
    sub_1DB6C(5, v14, 0);
  }
  return close(fd);
}
