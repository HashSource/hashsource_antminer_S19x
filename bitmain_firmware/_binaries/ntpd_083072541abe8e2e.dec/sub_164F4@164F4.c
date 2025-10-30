unsigned __int16 *__fastcall sub_164F4(unsigned __int16 *result)
{
  int v1; // r1
  unsigned __int16 *v2; // r4
  int v3; // r3
  int v4; // r3
  int v5; // r2
  int v6; // r0
  const char *v7; // r1
  _DWORD *v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r3
  int v13; // r1
  int v14; // r2
  bool v15; // zf
  int v16; // r0
  int v17; // r2
  int v18; // r3
  const char *v19; // r7
  const char *v20; // r0
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // r2
  const char *v27; // r0

  v1 = *result;
  v2 = result;
  if ( v1 == 2 )
    v3 = *((_DWORD *)result + 1);
  else
    v3 = *((unsigned __int8 *)result + 8);
  if ( v1 == 2 )
    v4 = (v3 & 0xF0) - 224;
  else
    v4 = v3 - 255;
  if ( v4 )
    return result;
  if ( sub_15184(result) )
  {
    v5 = sub_6C2E8(v2);
    v6 = 6;
    v7 = "Duplicate request found for multicast address %s";
    return (unsigned __int16 *)sub_64E00(v6, v7, v5);
  }
  v8 = sub_13F3C(0);
  v9 = *((_DWORD *)v2 + 1);
  v10 = *((_DWORD *)v2 + 2);
  v11 = *((_DWORD *)v2 + 3);
  v8[6] = *(_DWORD *)v2;
  v8[7] = v9;
  v8[8] = v10;
  v8[9] = v11;
  v12 = *((unsigned __int16 *)v8 + 12);
  v13 = *((_DWORD *)v2 + 5);
  v14 = *((_DWORD *)v2 + 6);
  v15 = v12 == 10;
  v8[10] = *((_DWORD *)v2 + 4);
  v8[11] = v13;
  v8[12] = v14;
  if ( v12 == 10 )
    v14 = -1;
  *((_WORD *)v8 + 70) = v12;
  *((_WORD *)v8 + 26) = v12;
  if ( v12 == 10 )
  {
    v8[15] = v14;
    v8[16] = v14;
    v8[17] = v14;
    v8[18] = v14;
  }
  else
  {
    v12 = -1;
  }
  if ( !v15 )
    v8[14] = v12;
  *((_WORD *)v8 + 13) = 31488;
  sub_141A4(1);
  v8[4] = -1;
  v16 = sub_154A8((struct sockaddr *)(v8 + 6), 0, 0, (int)v8);
  v8[3] = v16;
  if ( v16 != -1 )
  {
    v17 = v8[36];
    v18 = 0;
    v8[45] = 0;
    v8[36] = v17 | 0x100;
    if ( *v2 != 2 )
      v18 = *((_DWORD *)v2 + 6);
    v8[44] = v18;
    sub_6D4DC(v8 + 27);
    sub_14298((int)v8);
    sub_1482C((int)v8);
    goto LABEL_22;
  }
  free(v8);
  v21 = *v2;
  if ( v21 == 2 )
  {
    v8 = (_DWORD *)dword_B92C8;
  }
  else
  {
    if ( v21 != 10 )
    {
LABEL_27:
      v5 = sub_6C2E8(v2);
      v6 = 3;
      v7 = "No multicast socket available to use for address %s";
      return (unsigned __int16 *)sub_64E00(v6, v7, v5);
    }
    v8 = (_DWORD *)dword_B92CC;
  }
  if ( !v8 )
    goto LABEL_27;
  v22 = *((_DWORD *)v2 + 1);
  v23 = *((_DWORD *)v2 + 2);
  v24 = *((_DWORD *)v2 + 3);
  v8[20] = *(_DWORD *)v2;
  v8[21] = v22;
  v8[22] = v23;
  v8[23] = v24;
  v25 = *((_DWORD *)v2 + 5);
  v26 = *((_DWORD *)v2 + 6);
  v8[24] = *((_DWORD *)v2 + 4);
  v8[25] = v25;
  v8[26] = v26;
  v27 = (const char *)sub_6C2E8(v2);
  sub_64E00(3, "multicast address %s using wildcard interface #%d %s", v27, v8[5], (const char *)v8 + 108);
LABEL_22:
  if ( sub_148D0(v8, v2) )
  {
    v19 = (const char *)sub_6C2E8(v8 + 6);
    v20 = (const char *)sub_6C2E8(v2);
    sub_64E00(6, "Joined %s socket to multicast group %s", v19, v20);
  }
  return (unsigned __int16 *)sub_13EA4(v2, (int)v8);
}
