int __fastcall sub_67F40(const char *a1, const char *a2, int *a3, int a4, int a5, int a6, int a7)
{
  unsigned int v10; // r11
  size_t v11; // r8
  size_t v12; // r7
  size_t v13; // r6
  _DWORD *v14; // r4
  time_t v15; // r0
  _DWORD *v16; // r12
  time_t v17; // r3
  int v18; // r0
  int v19; // r1
  int v20; // r2
  int v21; // r3
  _DWORD *v22; // r5
  _DWORD *v23; // r12
  int v24; // r1
  int v25; // r2
  int v26; // r3
  int v27; // r3
  int *v29; // r0
  size_t v31; // [sp+20h] [bp-14h]
  int v32; // [sp+24h] [bp-10h]

  if ( !a1 )
    sub_6ECC0("ntp_intres.c", 253, 0, "((void *)0) != node");
  if ( a3 )
  {
    if ( a3[4] )
      sub_6ECC0("ntp_intres.c", 255, 0, "0 == hints->ai_addrlen");
    if ( a3[5] )
      sub_6ECC0("ntp_intres.c", 256, 0, "((void *)0) == hints->ai_addr");
    if ( a3[6] )
      sub_6ECC0("ntp_intres.c", 257, a3[5], "((void *)0) == hints->ai_canonname");
    if ( a3[7] )
      sub_6ECC0("ntp_intres.c", 258, 0, "((void *)0) == hints->ai_next");
  }
  v10 = sub_673DC();
  v32 = *(_DWORD *)(dnschild_contexts + 4 * v10);
  v31 = strlen(a1);
  v11 = v31 + 1;
  v12 = strlen(a2) + 1;
  v13 = v31 + 1 + v12 + 72;
  v14 = sub_63BA4(0, v13, 0, 1);
  *v14 = v13;
  v14[1] = v10;
  v15 = time(0);
  v17 = *(_DWORD *)(v32 + 4);
  v14[2] = v15;
  if ( v15 < v17 )
    v15 = v17;
  v14[3] = v15;
  if ( a3 )
    v16 = v14 + 5;
  *(_DWORD *)(v32 + 4) = v15;
  if ( a3 )
  {
    v18 = *a3;
    v19 = a3[1];
    v20 = a3[2];
    v21 = a3[3];
    v22 = a3 + 4;
    *v16 = v18;
    v16[1] = v19;
    v16[2] = v20;
    v16[3] = v21;
    v23 = v16 + 4;
    v24 = v22[1];
    v25 = v22[2];
    v26 = v22[3];
    *v23 = *v22;
    v23[1] = v24;
    v23[2] = v25;
    v23[3] = v26;
  }
  v14[16] = v11;
  v14[4] = a4;
  v14[17] = v12;
  v14[14] = a5;
  v14[15] = a6;
  v14[13] = a7;
  memcpy(v14 + 18, a1, v11);
  memcpy((char *)v14 + v31 + 73, a2, v12);
  v27 = sub_69188(1, v14, v13, sub_6774C, v14);
  if ( v27 )
  {
    sub_64E00((_BYTE *)&dword_0 + 3, "unable to queue getaddrinfo request");
    v29 = _errno_location();
    v27 = -1;
    *v29 = 14;
  }
  return v27;
}
