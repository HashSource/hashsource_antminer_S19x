unsigned __int16 *__fastcall sub_16740(unsigned __int16 *result)
{
  unsigned __int16 *v1; // r4
  int v2; // r1
  int v3; // r3
  int v4; // r3
  int v5; // r2
  int v6; // r0
  const char *v7; // r1
  _DWORD *v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r2
  int v17; // r3
  const char *v18; // r7
  const char *v19; // r0
  int v20; // r3
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r2
  const char *v26; // r0

  v1 = result;
  v2 = *result;
  if ( v2 == 2 )
    v3 = *((_DWORD *)result + 1);
  else
    v3 = *((unsigned __int8 *)result + 8);
  if ( v2 == 2 )
    v4 = (v3 & 0xF0) - 224;
  else
    v4 = v3 - 255;
  if ( v4 )
    return result;
  if ( sub_15414(result) )
  {
    v5 = sub_6D2C0(v1);
    v6 = 6;
    v7 = "Duplicate request found for multicast address %s";
    return (unsigned __int16 *)sub_65D40(v6, v7, v5);
  }
  v8 = sub_1416C(0);
  v9 = *((_DWORD *)v1 + 1);
  v10 = *((_DWORD *)v1 + 2);
  v11 = *((_DWORD *)v1 + 3);
  v8[6] = *(_DWORD *)v1;
  v8[7] = v9;
  v8[8] = v10;
  v8[9] = v11;
  v12 = *((_DWORD *)v1 + 5);
  v13 = *((_DWORD *)v1 + 6);
  v8[10] = *((_DWORD *)v1 + 4);
  v8[11] = v12;
  v8[12] = v13;
  v14 = *((unsigned __int16 *)v8 + 12);
  *((_WORD *)v8 + 13) = 31488;
  *((_WORD *)v8 + 70) = v14;
  *((_WORD *)v8 + 26) = v14;
  if ( v14 == 10 )
    memset(v8 + 15, 255, 0x10u);
  else
    v8[14] = -1;
  sub_143D4(1);
  v8[4] = -1;
  v15 = sub_15740((struct sockaddr *)(v8 + 6), 0, 0, (int)v8);
  v8[3] = v15;
  if ( v15 != -1 )
  {
    v16 = v8[36];
    v17 = 0;
    v8[45] = 0;
    v8[36] = v16 | 0x100;
    if ( *v1 != 2 )
      v17 = *((_DWORD *)v1 + 6);
    v8[44] = v17;
    sub_6E4B4(v8 + 27);
    sub_144C8((int)v8);
    sub_14A54((int)v8);
    goto LABEL_18;
  }
  free(v8);
  v20 = *v1;
  if ( v20 == 2 )
  {
    v8 = (_DWORD *)dword_BA2C8;
  }
  else
  {
    if ( v20 != 10 )
    {
LABEL_23:
      v5 = sub_6D2C0(v1);
      v6 = 3;
      v7 = "No multicast socket available to use for address %s";
      return (unsigned __int16 *)sub_65D40(v6, v7, v5);
    }
    v8 = (_DWORD *)dword_BA2CC;
  }
  if ( !v8 )
    goto LABEL_23;
  v21 = *((_DWORD *)v1 + 1);
  v22 = *((_DWORD *)v1 + 2);
  v23 = *((_DWORD *)v1 + 3);
  v8[20] = *(_DWORD *)v1;
  v8[21] = v21;
  v8[22] = v22;
  v8[23] = v23;
  v24 = *((_DWORD *)v1 + 5);
  v25 = *((_DWORD *)v1 + 6);
  v8[24] = *((_DWORD *)v1 + 4);
  v8[25] = v24;
  v8[26] = v25;
  v26 = (const char *)sub_6D2C0(v1);
  sub_65D40(3, "multicast address %s using wildcard interface #%d %s", v26, v8[5], (const char *)v8 + 108);
LABEL_18:
  if ( sub_14AF8(v8, v1) )
  {
    v18 = (const char *)sub_6D2C0(v8 + 6);
    v19 = (const char *)sub_6D2C0(v1);
    sub_65D40(6, "Joined %s socket to multicast group %s", v18, v19);
  }
  return (unsigned __int16 *)sub_140D4(v1, (int)v8);
}
