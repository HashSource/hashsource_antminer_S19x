int __fastcall sub_4558C(int a1)
{
  _DWORD *v2; // r6
  int v3; // r0
  int result; // r0
  int v5; // r0
  int v6; // r0
  char *v7; // r1
  int v8; // r12
  int v9; // r3
  const char *v10; // r2
  int v11; // r2
  int v12; // r3
  int v13; // r3
  bool v14; // zf
  int v15; // r3
  bool v16; // zf
  const char *v17; // r2
  int optval; // [sp+8h] [bp-10h] BYREF
  struct pollfd optlen; // [sp+Ch] [bp-Ch] BYREF

  v2 = *(_DWORD **)a1;
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 136);
  optlen.events = 4;
  optlen.fd = v3;
  result = poll(&optlen, 1u, 0);
  if ( result != 1 || (optlen.revents & 4) == 0 )
    return result;
  v2[36] = 10;
  optlen.fd = 4;
  v5 = v2[34];
  optval = 0;
  v14 = getsockopt(v5, 1, 4, &optval, (socklen_t *)&optlen) == -1;
  v6 = optval;
  if ( v14 )
  {
    if ( !optval )
    {
      v6 = *_errno_location();
      optval = v6;
    }
  }
  else if ( !optval )
  {
    *(_DWORD *)(a1 + 28) = v2[34];
    v2[34] = -1;
    result = sub_19084((_DWORD *)(a1 + 8));
    if ( result )
      return result;
    if ( (*(_BYTE *)(a1 + 768) & 4) != 0 )
      goto LABEL_24;
    v15 = v2[45];
    v16 = v15 == 3600;
    if ( v15 != 3600 )
      v16 = v15 == 0;
    if ( v16 )
    {
LABEL_24:
      v17 = (const char *)v2[5];
      v2[45] = 3600;
      sub_65D40(3, "%s: failed to register with I/O engine", v17);
    }
    goto LABEL_8;
  }
  v7 = strerror(v6);
  if ( (*(_BYTE *)(a1 + 768) & 4) != 0 )
    goto LABEL_7;
  v13 = v2[45];
  v14 = v13 == 3600;
  if ( v13 != 3600 )
    v14 = v13 == 0;
  if ( v14 )
  {
LABEL_7:
    v8 = optval;
    v9 = v2[34];
    v10 = (const char *)v2[5];
    v2[45] = 3600;
    sub_65D40(3, "%s: async connect to GPSD failed, fd=%d, ec=%d(%s)", v10, v9, v8, v7);
  }
LABEL_8:
  result = v2[34];
  if ( result != -1 )
    result = close(result);
  v11 = v2[37];
  v2[34] = -1;
  v12 = v11 + 5;
  v2[36] = v11;
  if ( (unsigned int)(v11 + 5) >= 0x78 )
    v12 = 120;
  v2[37] = v12;
  return result;
}
