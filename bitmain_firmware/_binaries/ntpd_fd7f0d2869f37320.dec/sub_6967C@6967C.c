int __fastcall sub_6967C(int a1, int a2)
{
  int v3; // r6
  unsigned int v4; // r5
  char *serv; // r6
  _DWORD *v7; // r8
  _DWORD *v8; // r5
  const char *v9; // r0
  socklen_t v10; // r1
  int v11; // r0
  int v12; // r3
  time_t *v13; // r9
  size_t v14; // r0
  size_t v15; // r0
  size_t v16; // r9
  int v17; // r8
  char *v18; // r0
  int v19; // r3
  char *v20; // r5
  char *v21; // r0
  int v22; // r2
  int v23; // r4
  size_t v25; // r2
  char *v26; // r7
  time_t v27; // r0
  bool v28; // cc
  const char *v29; // r0
  int v30; // r8
  int v31; // [sp+18h] [bp-414h]
  size_t v32; // [sp+1Ch] [bp-410h]
  char v33[1024]; // [sp+24h] [bp-408h] BYREF

  v3 = *(_DWORD *)(a2 + 44);
  v4 = v3 + *(_DWORD *)(a2 + 48);
  if ( v4 >= 0x400 )
    sub_6FC54("ntp_intres.c", 720, 0, "octets < sizeof(host)");
  serv = &v33[v3];
  v7 = sub_68440(a1, *(_DWORD *)(a2 + 28));
  sub_68A30(*(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), v7);
  sub_68BD4(v7 + 2);
  v8 = sub_64B04(0, v4 + 48, 0, 1);
  if ( debug > 1 )
  {
    v9 = (const char *)sub_6D2C0(a2 + 64);
    sub_65C68(
      "blocking_getnameinfo given addr %s flags 0x%x hostlen %lu servlen %lu\n",
      v9,
      *(_DWORD *)(a2 + 52),
      *(_DWORD *)(a2 + 44),
      *(_DWORD *)(a2 + 48));
  }
  if ( *(_WORD *)(a2 + 64) == 2 )
    v10 = 16;
  else
    v10 = 28;
  v11 = getnameinfo(
          (const struct sockaddr *)(a2 + 64),
          v10,
          v33,
          *(_DWORD *)(a2 + 44),
          serv,
          *(_DWORD *)(a2 + 48),
          *(_DWORD *)(a2 + 52));
  v12 = *(_DWORD *)(a2 + 40);
  v8[9] = v12;
  v13 = (time_t *)v11;
  v8[7] = v11;
  if ( v11 == -11 )
  {
    v8[8] = *_errno_location();
    goto LABEL_20;
  }
  if ( v11 )
  {
LABEL_20:
    v17 = 24;
    v8[10] = 0;
    v16 = 48;
    v8[11] = 0;
    goto LABEL_12;
  }
  v31 = v12;
  v14 = strlen(v33);
  v8[10] = v14 + 1;
  v32 = v14 + 1;
  v15 = strlen(serv) + 1;
  v8[11] = v15;
  if ( v31 <= 2 )
  {
    v16 = v15 + v32 + 48;
    v17 = v15 + v32 + 24;
  }
  else
  {
    v27 = time(v13);
    v28 = debug <= 0;
    v7[1] = v27;
    if ( !v28 )
    {
      v29 = (const char *)sub_79B0C(v27);
      sub_65C68("DNS success after retrying, ignoring sleeps scheduled before now (%s)\n", v29);
    }
    v30 = v8[11] + v8[10];
    v16 = v30 + 48;
    v17 = v30 + 24;
  }
LABEL_12:
  v18 = (char *)sub_64B04(v8, v16, 0, 0);
  v19 = *((_DWORD *)v18 + 7);
  v20 = v18;
  *((_DWORD *)v18 + 6) = v17;
  v21 = v18 + 48;
  if ( v19 )
  {
    if ( v16 == 48 )
    {
      v22 = 48;
      goto LABEL_16;
    }
LABEL_27:
    sub_6FC54("ntp_intres.c", 796, 2, "(size_t)(cp - (char *)resp) == resp_octets");
  }
  v25 = *((_DWORD *)v20 + 10);
  v26 = &v21[v25];
  memcpy(v21, v33, v25);
  memcpy(v26, serv, *((_DWORD *)v20 + 11));
  v22 = &v26[*((_DWORD *)v20 + 11)] - v20;
  if ( v22 != v16 )
    goto LABEL_27;
  if ( *((_DWORD *)v20 + 6) != v17 )
    sub_6FC54("ntp_intres.c", 797, 2, "resp_octets - sizeof(*resp) == gni_resp->octets");
LABEL_16:
  v23 = sub_6A2C4(a1, v20, v22, a2);
  if ( v23 )
    sub_65D40((_BYTE *)&dword_0 + 3, "blocking_getnameinfo unable to queue response");
  return v23;
}
