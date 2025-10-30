void __fastcall sub_44920(int a1, int a2)
{
  int *v2; // r5
  int v3; // r4
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r6
  int v9; // r2
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r3
  bool v14; // zf
  const char *v15; // r2
  int v16; // r0
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r3
  int v21; // r3
  int v23; // r3
  bool v24; // zf
  int v25; // r1
  char v26; // r3
  int v27; // r2
  char v28; // r3
  int v29; // r3
  bool v30; // zf
  const char *v31; // r2
  int v32; // r0
  int v33; // r3
  bool v34; // zf
  const char *v35; // r2
  int v36; // r3
  bool v37; // zf
  const char *v38; // r2
  int v39; // r3
  bool v40; // zf
  const char *v41; // r2
  int v42; // [sp+8h] [bp-Ch] BYREF

  v2 = *(int **)(a2 + 84);
  v3 = *v2;
  if ( *(_DWORD *)(*v2 + 8) == a2 )
  {
    v20 = *(_DWORD *)(v3 + 76);
    if ( v20 < 1 )
      v20 = 1;
    v21 = v20 - 1;
    *(_DWORD *)(v3 + 76) = v21;
    if ( !v21 )
    {
      if ( v2[54] != v2[55] )
      {
        sub_394A0((__int16 *)a2, 1);
        v2[54] = v2[55];
      }
      *(_DWORD *)(a2 + 68) &= ~0x80u;
    }
    return;
  }
  v4 = *(_DWORD *)(v3 + 180);
  if ( v4 )
    *(_DWORD *)(v3 + 180) = v4 - 1;
  v5 = *(_DWORD *)(v3 + 144);
  if ( v5 )
  {
    v6 = v5 - 1;
    *(_DWORD *)(v3 + 144) = v6;
    if ( v6 )
    {
      v14 = v6 == 4;
      v7 = v2[7];
      if ( v14 )
      {
        if ( v7 != -1 )
        {
          sub_445B0(v2, "send", "?VERSION;\r\n", 11);
          write(v2[7], "?VERSION;\r\n", 0xBu);
          return;
        }
LABEL_9:
        if ( *(_DWORD *)(v3 + 136) == -1 )
          return;
        goto LABEL_10;
      }
      if ( v7 == -1 )
        goto LABEL_9;
      return;
    }
  }
  if ( v2[7] != -1 )
  {
    if ( (v2[192] & 4) != 0 )
      goto LABEL_45;
    v23 = *(_DWORD *)(v3 + 180);
    v24 = v23 == 0;
    if ( v23 )
      v24 = v23 == 3600;
    if ( v24 )
    {
LABEL_45:
      *(_DWORD *)(v3 + 180) = 3600;
      sub_64E00(6, "%s: closing socket to GPSD, fd=%d", *(const char **)(v3 + 20), v2[7]);
    }
    sub_18E64((int)(v2 + 2));
    v25 = *(_DWORD *)(v3 + 148);
    v2[7] = -1;
    v26 = *(_BYTE *)(v3 + 132);
    v27 = v25 + 5;
    *(_DWORD *)(v3 + 144) = v25;
    v28 = v26 & 0xD9;
    if ( (unsigned int)(v25 + 5) >= 0x78 )
      v27 = 120;
    *(_DWORD *)(v3 + 148) = v27;
    *(_BYTE *)(v3 + 132) = v28 & 0xBF;
    return;
  }
  if ( *(_DWORD *)(v3 + 136) != -1 )
  {
LABEL_10:
    sub_4475C((int)v2);
    return;
  }
  if ( dword_BD560 )
  {
    v8 = *(_DWORD *)(v3 + 140);
    if ( !v8 )
      v8 = dword_BD560;
    v9 = *(_DWORD *)(v8 + 12);
    v10 = *(_DWORD *)(v8 + 8);
    v11 = *(_DWORD *)(v8 + 4);
    *(_DWORD *)(v3 + 140) = *(_DWORD *)(v8 + 28);
    v12 = socket(v11, v10, v9);
    *(_DWORD *)(v3 + 136) = v12;
    if ( v12 == -1 )
    {
      if ( (v2[192] & 4) == 0 )
      {
        v13 = *(_DWORD *)(v3 + 180);
        v14 = v13 == 3600;
        if ( v13 != 3600 )
          v14 = v13 == 0;
        if ( !v14 )
        {
          v16 = v2[7];
          if ( v16 == -1 )
          {
LABEL_28:
            v18 = *(_DWORD *)(v3 + 148);
            v2[7] = -1;
            *(_DWORD *)(v3 + 136) = -1;
            v19 = v18 + 5;
            *(_DWORD *)(v3 + 144) = v18;
            if ( (unsigned int)(v18 + 5) >= 0x78 )
              v19 = 120;
            *(_DWORD *)(v3 + 148) = v19;
            return;
          }
LABEL_25:
          close(v16);
LABEL_26:
          v17 = *(_DWORD *)(v3 + 136);
          if ( v17 != -1 )
            close(v17);
          goto LABEL_28;
        }
      }
      v15 = *(const char **)(v3 + 20);
      *(_DWORD *)(v3 + 180) = 3600;
      sub_64E00(3, "%s: cannot create GPSD socket: %m", v15);
    }
    else if ( fcntl(v12, 4, 2048, 1) == -1 )
    {
      if ( (v2[192] & 4) != 0 )
        goto LABEL_55;
      v29 = *(_DWORD *)(v3 + 180);
      v30 = v29 == 3600;
      if ( v29 != 3600 )
        v30 = v29 == 0;
      if ( v30 )
      {
LABEL_55:
        v31 = *(const char **)(v3 + 20);
        *(_DWORD *)(v3 + 180) = 3600;
        sub_64E00(3, "%s: cannot set GPSD socket to non-blocking: %m", v31);
      }
    }
    else
    {
      v32 = *(_DWORD *)(v3 + 136);
      v42 = 1;
      if ( setsockopt(v32, 6, 1, &v42, 4u) == -1 )
      {
        if ( (v2[192] & 4) != 0 )
          goto LABEL_79;
        v39 = *(_DWORD *)(v3 + 180);
        v40 = v39 == 0;
        if ( v39 )
          v40 = v39 == 3600;
        if ( v40 )
        {
LABEL_79:
          v41 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_64E00(6, "%s: cannot disable TCP nagle: %m", v41);
        }
      }
      if ( connect(*(_DWORD *)(v3 + 136), *(const struct sockaddr **)(v8 + 20), *(_DWORD *)(v8 + 16)) == -1 )
      {
        if ( *_errno_location() == 115 )
          return;
        if ( (v2[192] & 4) != 0 )
          goto LABEL_64;
        v33 = *(_DWORD *)(v3 + 180);
        v34 = v33 == 0;
        if ( v33 )
          v34 = v33 == 3600;
        if ( v34 )
        {
LABEL_64:
          v35 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_64E00(3, "%s: cannot connect GPSD socket: %m", v35);
        }
      }
      else
      {
        v2[7] = *(_DWORD *)(v3 + 136);
        *(_DWORD *)(v3 + 136) = -1;
        if ( sub_18DF0(v2 + 2) )
          return;
        if ( (v2[192] & 4) != 0 )
          goto LABEL_71;
        v36 = *(_DWORD *)(v3 + 180);
        v37 = v36 == 3600;
        if ( v36 != 3600 )
          v37 = v36 == 0;
        if ( v37 )
        {
LABEL_71:
          v38 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_64E00(3, "%s: failed to register with I/O engine", v38);
        }
      }
    }
    v16 = v2[7];
    if ( v16 == -1 )
      goto LABEL_26;
    goto LABEL_25;
  }
}
