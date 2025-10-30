int __fastcall sub_68738(int a1, int a2)
{
  int v2; // r6
  unsigned int v3; // r5
  _DWORD *v6; // r9
  char *serv; // r6
  _DWORD *v8; // r5
  const char *v9; // r0
  socklen_t v10; // r1
  int v11; // r0
  int v12; // r3
  time_t *v13; // r10
  size_t v14; // r0
  size_t v15; // r0
  int v16; // r9
  size_t v17; // r7
  char *v18; // r0
  int v19; // r3
  char *v20; // r5
  char *v21; // r0
  int v22; // r4
  size_t v24; // r2
  char *v25; // r8
  time_t v26; // r0
  int v27; // r3
  const char *v28; // r0
  int v29; // r7
  int v30; // [sp+18h] [bp-414h]
  size_t v31; // [sp+1Ch] [bp-410h]
  char v32[1024]; // [sp+24h] [bp-408h] BYREF

  v2 = *(_DWORD *)(a2 + 44);
  v3 = v2 + *(_DWORD *)(a2 + 48);
  if ( v3 >= 0x400 )
    sub_6ECC0("ntp_intres.c", 720, 0, "octets < sizeof(host)");
  v6 = sub_67478(a1, *(_DWORD *)(a2 + 28));
  serv = &v32[v2];
  sub_67B04(*(_DWORD *)(a2 + 32), *(_DWORD *)(a2 + 36), v6);
  sub_67CA8(v6 + 2);
  v8 = sub_63BA4(0, v3 + 48, 0, 1);
  if ( debug > 1 )
  {
    v9 = (const char *)sub_6C2E8(a2 + 64);
    sub_64D28(
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
          v32,
          *(_DWORD *)(a2 + 44),
          serv,
          *(_DWORD *)(a2 + 48),
          *(_DWORD *)(a2 + 52));
  v12 = *(_DWORD *)(a2 + 40);
  v13 = (time_t *)v11;
  v8[7] = v11;
  v8[9] = v12;
  if ( v11 == -11 )
  {
    v8[8] = *_errno_location();
    goto LABEL_17;
  }
  if ( v11 )
  {
LABEL_17:
    v17 = 48;
    v8[10] = 0;
    v16 = 24;
    v8[11] = 0;
    goto LABEL_11;
  }
  v30 = v12;
  v14 = strlen(v32);
  v8[10] = v14 + 1;
  v31 = v14 + 1;
  v15 = strlen(serv) + 1;
  v8[11] = v15;
  if ( v30 > 2 )
  {
    v26 = time(v13);
    v27 = debug;
    v6[1] = v26;
    if ( v27 > 0 )
    {
      v28 = (const char *)sub_78840(v26);
      sub_64D28("DNS success after retrying, ignoring sleeps scheduled before now (%s)\n", v28);
    }
    v29 = v8[11] + v8[10];
    v16 = v29 + 24;
    v17 = v29 + 48;
  }
  else
  {
    v16 = v31 + v15 + 24;
    v17 = v31 + v15 + 48;
  }
LABEL_11:
  v18 = (char *)sub_63BA4(v8, v17, 0, 0);
  v19 = *((_DWORD *)v18 + 7);
  v20 = v18;
  *((_DWORD *)v18 + 6) = v16;
  v21 = v18 + 48;
  if ( v19 )
  {
    if ( v17 == 48 )
      goto LABEL_13;
LABEL_24:
    sub_6ECC0("ntp_intres.c", 796, 2, "(size_t)(cp - (char *)resp) == resp_octets");
  }
  v24 = *((_DWORD *)v20 + 10);
  v25 = &v21[v24];
  memcpy(v21, v32, v24);
  memcpy(v25, serv, *((_DWORD *)v20 + 11));
  if ( &v25[*((_DWORD *)v20 + 11)] - v20 != v17 )
    goto LABEL_24;
  if ( *((_DWORD *)v20 + 6) != v16 )
    sub_6ECC0("ntp_intres.c", 797, 2, "resp_octets - sizeof(*resp) == gni_resp->octets");
LABEL_13:
  v22 = sub_69350(a1, v20, v17, a2);
  if ( v22 )
    sub_64E00((_BYTE *)&dword_0 + 3, "blocking_getnameinfo unable to queue response");
  return v22;
}
