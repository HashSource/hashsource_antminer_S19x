int __fastcall sub_68E68(const char *a1, const char *a2, int *a3, int a4, int a5, int a6, int a7)
{
  unsigned int v10; // r11
  size_t v11; // r8
  size_t v12; // r7
  _DWORD *v13; // r5
  time_t v14; // r0
  time_t v15; // r3
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r3
  _DWORD *v20; // r4
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r3
  int *v26; // r0
  int v28; // [sp+20h] [bp-14h]
  size_t v29; // [sp+24h] [bp-10h]

  if ( !a1 )
    sub_6FC54("ntp_intres.c", 253, 0, "((void *)0) != node");
  if ( a3 )
  {
    if ( a3[4] )
      sub_6FC54("ntp_intres.c", 255, 0, "0 == hints->ai_addrlen");
    if ( a3[5] )
      sub_6FC54("ntp_intres.c", 256, 0, "((void *)0) == hints->ai_addr");
    if ( a3[6] )
      sub_6FC54("ntp_intres.c", 257, a3[5], "((void *)0) == hints->ai_canonname");
    if ( a3[7] )
      sub_6FC54("ntp_intres.c", 258, 0, "((void *)0) == hints->ai_next");
  }
  v10 = sub_683A4();
  v28 = *(_DWORD *)(dnschild_contexts + 4 * v10);
  v29 = strlen(a1);
  v11 = v29 + 1;
  v12 = strlen(a2) + 1;
  v13 = sub_64B04(0, v29 + 1 + v12 + 72, 0, 1);
  v13[1] = v10;
  *v13 = v29 + 1 + v12 + 72;
  v14 = time(0);
  v15 = *(_DWORD *)(v28 + 4);
  v13[2] = v14;
  if ( v14 < v15 )
    v14 = v15;
  v13[3] = v14;
  *(_DWORD *)(v28 + 4) = v14;
  if ( a3 )
  {
    v16 = *a3;
    v17 = a3[1];
    v18 = a3[2];
    v19 = a3[3];
    v20 = a3 + 4;
    v13[5] = v16;
    v13[6] = v17;
    v13[7] = v18;
    v13[8] = v19;
    v21 = v20[1];
    v22 = v20[2];
    v23 = v20[3];
    v13[9] = *v20;
    v13[10] = v21;
    v13[11] = v22;
    v13[12] = v23;
  }
  v13[16] = v11;
  v13[17] = v12;
  v13[4] = a4;
  v13[14] = a5;
  v13[15] = a6;
  v13[13] = a7;
  memcpy(v13 + 18, a1, v11);
  memcpy((char *)v13 + v29 + 73, a2, v12);
  v24 = sub_6A0F4(1, v13, v11 + v12 + 72, sub_686DC, v13);
  if ( v24 )
  {
    sub_65D40((_BYTE *)&dword_0 + 3, "unable to queue getaddrinfo request");
    v26 = _errno_location();
    v24 = -1;
    *v26 = 14;
  }
  return v24;
}
