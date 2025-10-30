int __fastcall sub_4C9D4(int a1, int *a2, int *a3, int *a4, int *a5, unsigned int a6, int a7)
{
  ssize_t v10; // r0
  ssize_t v11; // r4
  int v12; // r4
  const char *v14; // r0
  const char *v15; // r0
  char v16; // [sp+Ch] [bp-50h] BYREF
  struct msghdr message; // [sp+1Ch] [bp-40h] BYREF
  _DWORD v18[9]; // [sp+38h] [bp-24h] BYREF

  v18[2] = a4;
  v18[7] = a7;
  message.msg_namelen = 0;
  message.msg_name = 0;
  message.msg_flags = 0;
  message.msg_iov = (struct iovec *)v18;
  v18[0] = a2;
  v18[4] = a5;
  v18[6] = a6;
  v18[1] = 4;
  v18[3] = 4;
  v18[5] = 4;
  message.msg_iovlen = 4;
  message.msg_control = &v16;
  message.msg_controllen = 16;
  v10 = recvmsg(a1, &message, 0x40000000);
  v11 = v10;
  if ( v10 < 0 )
  {
    if ( dword_473724 )
    {
      v14 = (const char *)sub_98880(v10, v10 >> 31);
      sub_92B14("namespace-helper: recv failed (%s)\n", v14);
    }
    sub_4C748();
    return v11;
  }
  else
  {
    if ( v10 <= 11 || (message.msg_flags & 0x28) != 0 )
    {
      if ( dword_473724 )
      {
        v15 = (const char *)sub_98880(v10, v10 >> 31);
        sub_92B14("namespace-helper: recv truncated (%s 0x%x)\n", v15, message.msg_flags);
      }
      sub_4C748();
      v12 = -1;
      *_errno_location() = 74;
      return v12;
    }
    if ( message.msg_controllen > 0xB
      && message.msg_control
      && *(_DWORD *)message.msg_control == 16
      && *((_DWORD *)message.msg_control + 1) == 1
      && *((_DWORD *)message.msg_control + 2) == 1 )
    {
      *a3 = *((_DWORD *)message.msg_control + 3);
    }
    else
    {
      *a3 = -1;
    }
    v12 = v10 - 12;
    if ( !dword_473724 )
      return v12;
    sub_92B14("mnsh: recv: ");
    sub_4C4D4(*a2, *a3, *a4, *a5, a6, v12);
    sub_92B14((const char *)&word_356638);
    return v12;
  }
}
