ssize_t __fastcall sub_4C878(int fd, int a2, int a3, int a4, int a5, void *src, int n)
{
  unsigned int v7; // r7
  int v9; // r5
  bool v10; // cc
  ssize_t v12; // r4
  const char *v13; // r0
  int dest; // [sp+8h] [bp-74h] BYREF
  int v16; // [sp+Ch] [bp-70h] BYREF
  __int64 v17; // [sp+14h] [bp-68h] BYREF
  int v18; // [sp+1Ch] [bp-60h]
  int v19; // [sp+20h] [bp-5Ch]
  struct msghdr message; // [sp+24h] [bp-58h] BYREF
  _DWORD v21[9]; // [sp+40h] [bp-3Ch] BYREF

  v7 = (unsigned int)src;
  v9 = n;
  dest = a4;
  v16 = a2;
  v10 = (int)src <= 0;
  if ( src )
    v10 = n <= 0;
  message.msg_iov = (struct iovec *)v21;
  v21[0] = &v16;
  message.msg_namelen = 0;
  message.msg_name = 0;
  memset(&message.msg_control, 0, 12);
  v21[1] = 4;
  v21[3] = 4;
  v21[5] = 4;
  v21[2] = &dest;
  v21[4] = &a5;
  message.msg_iovlen = 3;
  if ( !v10 )
  {
    v21[6] = &dest;
    memcpy(&dest, src, n);
    v21[7] = v9;
    message.msg_iovlen = 4;
  }
  if ( a3 >= 0 )
  {
    v19 = a3;
    message.msg_control = &v17;
    message.msg_controllen = 16;
    v17 = 0x100000010LL;
    v18 = 1;
  }
  v12 = sendmsg(fd, &message, 0);
  if ( v12 < 0 )
    sub_4C748();
  if ( dword_473724 )
  {
    sub_92B14("mnsh: send: ");
    sub_4C4D4(v16, a3, dest, a5, v7, v9);
    v13 = (const char *)sub_98880(v12, v12 >> 31);
    sub_92B14(" -> %s\n", v13);
  }
  return v12;
}
