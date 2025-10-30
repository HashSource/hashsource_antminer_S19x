int *sub_3C3C()
{
  int v0; // r8
  int *result; // r0
  int v2; // r2
  int v3; // r0
  int v4; // r11
  ssize_t v5; // r0
  int v6; // r1
  socklen_t addr_len; // [sp+14h] [bp-88h] BYREF
  _DWORD v8[2]; // [sp+18h] [bp-84h] BYREF
  int v9; // [sp+20h] [bp-7Ch] BYREF
  int v10; // [sp+24h] [bp-78h]
  int v11; // [sp+28h] [bp-74h]
  int v12; // [sp+2Ch] [bp-70h]
  _BYTE buf[100]; // [sp+30h] [bp-6Ch] BYREF

  v0 = 0;
  while ( 1 )
  {
    v9 = fdmask;
    v10 = unk_333E0;
    v11 = unk_333E4;
    v12 = unk_333E8;
    result = (int *)_poll_chk(&v9, nbsock, 0, 16);
    if ( nbsock <= 0 )
    {
LABEL_7:
      if ( !result )
        return result;
      goto LABEL_8;
    }
    if ( (v10 & 0x10000) != 0 )
    {
      v2 = 0;
    }
    else
    {
      if ( nbsock == 1 || (v12 & 0x10000) == 0 )
        goto LABEL_7;
      v2 = 1;
    }
    v0 = fd[v2];
    if ( !result )
      return result;
LABEL_8:
    if ( result == (int *)-1 )
      break;
    v3 = sub_65AC(v8);
    if ( initializing || !sub_D41C(v3) )
    {
      read(v0, buf, 0x64u);
    }
    else
    {
      v4 = sub_D7CC();
      addr_len = 28;
      v5 = recvfrom(v0, (void *)(v4 + 88), 0x848u, 0, (struct sockaddr *)(v4 + 4), &addr_len);
      *(_DWORD *)(v4 + 84) = v5;
      if ( v5 == -1 )
      {
        sub_D66C(v4);
      }
      else
      {
        v6 = v8[1];
        *(_DWORD *)(v4 + 72) = v8[0];
        *(_DWORD *)(v4 + 76) = v6;
        sub_D708(v4);
      }
    }
  }
  result = _errno_location();
  if ( *result != 4 )
    return (int *)sub_A828(3, "poll() error: %m");
  return result;
}
