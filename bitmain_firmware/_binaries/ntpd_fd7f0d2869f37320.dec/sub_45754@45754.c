void __fastcall sub_45754(int a1, int a2)
{
  int *v2; // r5
  int v3; // r4
  int v4; // r7
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r7
  int v10; // r2
  int v11; // r1
  int v12; // r0
  int v13; // r0
  int v14; // r3
  bool v15; // zf
  int v16; // r0
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r3
  bool v21; // zf
  int v22; // r1
  int v23; // r3
  char v24; // r2
  char v25; // r2
  const char *v26; // r2
  int v27; // r3
  int v28; // r3
  int v29; // r3
  bool v30; // zf
  const char *v31; // r2
  int v32; // r0
  int v33; // r3
  bool v34; // zf
  const char *v35; // r2
  const char *v36; // r2
  int v37; // r3
  bool v38; // zf
  const char *v39; // r2
  int v40; // r3
  bool v41; // zf
  const char *v42; // r2
  int v43; // [sp+8h] [bp-Ch] BYREF

  v2 = *(int **)(a2 + 84);
  v3 = *v2;
  v4 = *(_DWORD *)(*v2 + 8);
  if ( v4 == a2 )
  {
    v27 = *(_DWORD *)(v3 + 76);
    if ( v27 <= 0 )
    {
      *(_DWORD *)(v3 + 76) = 0;
    }
    else
    {
      v28 = v27 - 1;
      *(_DWORD *)(v3 + 76) = v28;
      if ( v28 )
        return;
    }
    if ( v2[54] != v2[55] )
    {
      sub_39C88(v4, 1);
      v2[54] = v2[55];
    }
    *(_DWORD *)(v4 + 68) &= ~0x80u;
    return;
  }
  v5 = *(_DWORD *)(v3 + 180);
  if ( v5 )
    *(_DWORD *)(v3 + 180) = v5 - 1;
  v6 = *(_DWORD *)(v3 + 144);
  if ( !v6 || (v7 = v6 - 1, (*(_DWORD *)(v3 + 144) = v7) == 0) )
  {
    if ( v2[7] != -1 )
    {
      if ( (v2[192] & 4) != 0 )
        goto LABEL_41;
      v20 = *(_DWORD *)(v3 + 180);
      v21 = v20 == 3600;
      if ( v20 != 3600 )
        v21 = v20 == 0;
      if ( v21 )
      {
LABEL_41:
        v26 = *(const char **)(v3 + 20);
        *(_DWORD *)(v3 + 180) = 3600;
        sub_65D40(6, "%s: closing socket to GPSD, fd=%d", v26, v2[7]);
      }
      sub_190FC((int)(v2 + 2));
      v22 = *(_DWORD *)(v3 + 148);
      v2[7] = -1;
      v23 = v22 + 5;
      v24 = *(_BYTE *)(v3 + 132);
      *(_DWORD *)(v3 + 144) = v22;
      v25 = v24 & 0x99;
      if ( (unsigned int)(v22 + 5) >= 0x78 )
        v23 = 120;
      *(_BYTE *)(v3 + 132) = v25;
      *(_DWORD *)(v3 + 148) = v23;
      return;
    }
    if ( *(_DWORD *)(v3 + 136) != -1 )
      goto LABEL_10;
    if ( !dword_BE574 )
      return;
    v9 = *(_DWORD *)(v3 + 140);
    if ( !v9 )
      v9 = dword_BE574;
    v10 = *(_DWORD *)(v9 + 12);
    v11 = *(_DWORD *)(v9 + 8);
    v12 = *(_DWORD *)(v9 + 4);
    *(_DWORD *)(v3 + 140) = *(_DWORD *)(v9 + 28);
    v13 = socket(v12, v11, v10);
    *(_DWORD *)(v3 + 136) = v13;
    if ( v13 == -1 )
    {
      if ( (v2[192] & 4) == 0 )
      {
        v29 = *(_DWORD *)(v3 + 180);
        v30 = v29 == 3600;
        if ( v29 != 3600 )
          v30 = v29 == 0;
        if ( !v30 )
        {
          v16 = v2[7];
          if ( v16 == -1 )
          {
LABEL_27:
            v18 = *(_DWORD *)(v3 + 148);
            v2[7] = -1;
            v19 = v18 + 5;
            *(_DWORD *)(v3 + 136) = -1;
            *(_DWORD *)(v3 + 144) = v18;
            if ( (unsigned int)(v18 + 5) >= 0x78 )
              v19 = 120;
            *(_DWORD *)(v3 + 148) = v19;
            return;
          }
LABEL_24:
          close(v16);
LABEL_25:
          v17 = *(_DWORD *)(v3 + 136);
          if ( v17 != -1 )
            close(v17);
          goto LABEL_27;
        }
      }
      v31 = *(const char **)(v3 + 20);
      *(_DWORD *)(v3 + 180) = 3600;
      sub_65D40(3, "%s: cannot create GPSD socket: %m", v31);
    }
    else if ( fcntl(v13, 4, 2048, 1) == -1 )
    {
      if ( (v2[192] & 4) != 0 )
        goto LABEL_64;
      v14 = *(_DWORD *)(v3 + 180);
      v15 = v14 == 3600;
      if ( v14 != 3600 )
        v15 = v14 == 0;
      if ( v15 )
      {
LABEL_64:
        v36 = *(const char **)(v3 + 20);
        *(_DWORD *)(v3 + 180) = 3600;
        sub_65D40(3, "%s: cannot set GPSD socket to non-blocking: %m", v36);
      }
    }
    else
    {
      v32 = *(_DWORD *)(v3 + 136);
      v43 = 1;
      if ( setsockopt(v32, 6, 1, &v43, 4u) == -1 )
      {
        if ( (v2[192] & 4) != 0 )
          goto LABEL_77;
        v40 = *(_DWORD *)(v3 + 180);
        v41 = v40 == 3600;
        if ( v40 != 3600 )
          v41 = v40 == 0;
        if ( v41 )
        {
LABEL_77:
          v42 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_65D40(6, "%s: cannot disable TCP nagle: %m", v42);
        }
      }
      if ( connect(*(_DWORD *)(v3 + 136), *(const struct sockaddr **)(v9 + 20), *(_DWORD *)(v9 + 16)) == -1 )
      {
        if ( *_errno_location() == 115 )
          return;
        if ( (v2[192] & 4) != 0 )
          goto LABEL_63;
        v33 = *(_DWORD *)(v3 + 180);
        v34 = v33 == 3600;
        if ( v33 != 3600 )
          v34 = v33 == 0;
        if ( v34 )
        {
LABEL_63:
          v35 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_65D40(3, "%s: cannot connect GPSD socket: %m", v35);
        }
      }
      else
      {
        v2[7] = *(_DWORD *)(v3 + 136);
        *(_DWORD *)(v3 + 136) = -1;
        if ( sub_19084(v2 + 2) )
          return;
        if ( (v2[192] & 4) != 0 )
          goto LABEL_71;
        v37 = *(_DWORD *)(v3 + 180);
        v38 = v37 == 3600;
        if ( v37 != 3600 )
          v38 = v37 == 0;
        if ( v38 )
        {
LABEL_71:
          v39 = *(const char **)(v3 + 20);
          *(_DWORD *)(v3 + 180) = 3600;
          sub_65D40(3, "%s: failed to register with I/O engine", v39);
        }
      }
    }
    v16 = v2[7];
    if ( v16 == -1 )
      goto LABEL_25;
    goto LABEL_24;
  }
  v15 = v7 == 4;
  v8 = v2[7];
  if ( !v15 )
  {
    if ( v8 != -1 || *(_DWORD *)(v3 + 136) == -1 )
      return;
LABEL_10:
    sub_4558C((int)v2);
    return;
  }
  if ( v8 != -1 )
  {
    sub_453FC(v2, "send", "?VERSION;\r\n", 11);
    write(v2[7], "?VERSION;\r\n", 0xBu);
    return;
  }
  if ( *(_DWORD *)(v3 + 136) != -1 )
    goto LABEL_10;
}
