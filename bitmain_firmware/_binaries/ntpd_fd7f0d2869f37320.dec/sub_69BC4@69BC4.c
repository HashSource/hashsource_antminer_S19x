char *__fastcall sub_69BC4(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5
  int v3; // r4
  _DWORD *v5; // r3
  int v6; // r6
  _DWORD *v7; // r7
  size_t v8; // r0
  const char *v9; // r0
  int v10; // r7
  int v11; // r6
  char *v12; // r0
  int v13; // r7
  char *v14; // r6
  char *v15; // r11
  char *v16; // r4
  char *v17; // r7
  int v18; // r1
  int v19; // r2
  int v20; // r3
  _DWORD *v21; // r8
  char *v22; // r12
  int v23; // r1
  int v24; // r2
  int v25; // r3
  size_t v26; // r2
  const char *v27; // r5
  size_t v28; // r2
  char *v29; // r0
  char *v30; // r3
  size_t v32; // [sp+0h] [bp-14h]

  v2 = a1;
  if ( !a1 )
  {
    v32 = 0;
    v15 = (char *)sub_64B04(0, 0, 0, 1);
    v17 = v15;
    goto LABEL_23;
  }
  v3 = 0;
  v5 = a1;
  v6 = 0;
  while ( 1 )
  {
    v9 = (const char *)v5[6];
    ++v6;
    if ( a2 )
      break;
    v7 = (_DWORD *)v5[7];
    if ( !v9 )
    {
      v5 = (_DWORD *)v5[7];
      goto LABEL_5;
    }
LABEL_4:
    v8 = strlen(v9);
    v5 = v7;
    v3 += 1 + v8;
LABEL_5:
    if ( !v7 )
      goto LABEL_9;
  }
  if ( v9 )
  {
    v7 = 0;
    goto LABEL_4;
  }
LABEL_9:
  v10 = 4 * v6;
  v32 = 60 * v6 + v3;
  v11 = 32 * v6;
  v12 = (char *)sub_64B04(0, v32, 0, 1);
  v13 = v11 - v10;
  v14 = &v12[v11];
  v15 = v12;
  v16 = v12 + 32;
  v17 = &v14[v13];
  while ( 1 )
  {
    v18 = v2[1];
    v19 = v2[2];
    v20 = v2[3];
    if ( a2 )
      v21 = 0;
    else
      v21 = *(_DWORD **)((char *)&dword_1C + (_DWORD)v2);
    *((_DWORD *)v16 - 8) = *v2;
    *((_DWORD *)v16 - 7) = v18;
    *((_DWORD *)v16 - 6) = v19;
    *((_DWORD *)v16 - 5) = v20;
    v22 = v16 - 16;
    v23 = v2[5];
    v24 = v2[6];
    v25 = v2[7];
    *(_DWORD *)v22 = v2[4];
    *((_DWORD *)v22 + 1) = v23;
    *((_DWORD *)v22 + 2) = v24;
    *((_DWORD *)v22 + 3) = v25;
    v26 = *(_DWORD *)((char *)&word_10 + (_DWORD)v2);
    if ( v26 > 0x1C )
      sub_6FC54("ntp_rfc2553.c", 207, 2, "ai_src->ai_addrlen <= sizeof(sockaddr_u)");
    memcpy(v14, *(const void **)((char *)&dword_14 + (_DWORD)v2), v26);
    *((_DWORD *)v16 - 3) = v14;
    v14 += 28;
    if ( *(_UNKNOWN **)((char *)&off_18 + (_DWORD)v2) )
    {
      *((_DWORD *)v16 - 2) = v17;
      v27 = *(const char **)((char *)&off_18 + (_DWORD)v2);
      v28 = strlen(v27) + 1;
      v29 = v17;
      v17 += v28;
      memcpy(v29, v27, v28);
    }
    if ( *((_DWORD *)v16 - 1) )
    {
      if ( a2 )
        v30 = 0;
      else
        v30 = v16;
      *((_DWORD *)v16 - 1) = v30;
    }
    v16 += 32;
    if ( !v21 )
      break;
    v2 = v21;
  }
LABEL_23:
  if ( v17 != &v15[v32] )
    sub_6FC54("ntp_rfc2553.c", 225, 1, "pcanon == ((char *)dst + octets)");
  return v15;
}
