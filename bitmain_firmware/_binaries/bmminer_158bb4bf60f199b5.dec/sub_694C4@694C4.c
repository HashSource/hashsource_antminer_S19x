int sub_694C4()
{
  unsigned int *v0; // r0
  unsigned int v1; // r4
  void *v2; // r0
  _DWORD *v3; // r0
  _DWORD *v4; // r6
  _DWORD *i; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r11
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  unsigned int v12; // r0
  bool v13; // cc
  unsigned int v14; // r1
  _BOOL4 v15; // r3
  _DWORD *v16; // r0
  _DWORD *v17; // r5
  _DWORD *v18; // r9
  unsigned int v19; // r4
  unsigned int v20; // r0
  bool v21; // cc
  unsigned int v22; // r1
  _DWORD *v23; // r0
  _DWORD *v24; // r7
  int v25; // r0
  int v26; // r0
  int v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r0
  _DWORD *v30; // r0
  _DWORD *v31; // r0
  unsigned int v32; // r3
  unsigned int v33; // r3
  unsigned int v35; // r3
  unsigned int v36; // r3
  unsigned int v37; // r3
  unsigned int v38; // r3
  unsigned int v39; // r3
  unsigned int v40; // r3
  unsigned int v41; // r3
  unsigned int v42; // r3
  unsigned int v43; // r3
  unsigned int v44; // r3
  unsigned int v45; // r3
  unsigned int v46; // r3
  unsigned int v47; // r3
  unsigned int v48; // r3
  unsigned int v49; // r3
  unsigned int v50; // r3
  unsigned int *v51; // [sp+8h] [bp-90Ch]
  unsigned int v52; // [sp+Ch] [bp-908h]
  char v53[252]; // [sp+14h] [bp-900h] BYREF
  char s[2052]; // [sp+110h] [bp-804h] BYREF

  memset(&unk_1B125C, 255, 0x100u);
  memset(&unk_1B135C, 255, 0x48u);
  v0 = (unsigned int *)sub_6D110(aFanMax6000Id0N, 0, v53);
  v51 = v0;
  if ( !v0 || (v1 = *v0) != 0 )
  {
    snprintf(s, 0x800u, "%s,%d bad json format\n", "platform/7007/src/hal_conf.c", 43);
    sub_47AB4(0, s, 0);
    return -1;
  }
  else
  {
    v2 = (void *)sub_6B6E8(v0, 0);
    free(v2);
    v3 = (_DWORD *)sub_6DFCC(v51, "chain");
    v4 = v3;
    if ( v3 && *v3 == 1 )
    {
      for ( i = &unk_1B125C; ; *(i - 1) = sub_6E430(v11) )
      {
        i += 4;
        v12 = sub_6E1A8(v4);
        v13 = v1 > 0x10;
        if ( v1 != 16 )
          v13 = v12 > v1;
        v14 = v1;
        v15 = v13;
        ++v1;
        if ( !v13 )
          break;
        v6 = (_DWORD *)sub_6E1C4(v4, v14);
        v7 = v6;
        if ( !v6 || *v6 )
        {
          snprintf(s, 0x800u, "%s,%d bad object in chain\n", "platform/7007/src/hal_conf.c", 63);
          sub_47AB4(0, s, 0);
          v35 = v51[1];
          if ( v35 != -1 )
          {
            v36 = v35 - 1;
            v51[1] = v36;
            if ( !v36 )
              sub_6E5DC(v51);
          }
          return -3;
        }
        v8 = sub_6DFCC(v6, "id");
        *(i - 4) = sub_6E430(v8);
        v9 = sub_6DFCC(v7, "uart");
        *(i - 3) = sub_6E430(v9);
        v10 = sub_6DFCC(v7, "plug");
        *(i - 2) = sub_6E430(v10);
        v11 = sub_6DFCC(v7, "reset");
      }
      v52 = v15;
      v16 = (_DWORD *)sub_6DFCC(v51, "fan");
      v17 = v16;
      if ( v16 && *v16 == 1 )
      {
        v18 = &unk_1B135C;
        v19 = v52;
        while ( 1 )
        {
          v18 += 3;
          v20 = sub_6E1A8(v17);
          v21 = v19 > 6;
          if ( v19 != 6 )
            v21 = v20 > v19;
          v22 = v19++;
          if ( !v21 )
          {
            v28 = (_DWORD *)sub_6DFCC(v51, "red");
            if ( v28 && *v28 == 3 )
            {
              dword_1B13A4 = sub_6E430(v28);
              v29 = (_DWORD *)sub_6DFCC(v51, "green");
              if ( v29 && *v29 == 3 )
              {
                dword_1B13A8 = sub_6E430(v29);
                v30 = (_DWORD *)sub_6DFCC(v51, "reset");
                if ( v30 && *v30 == 3 )
                {
                  dword_1B13AC = sub_6E430(v30);
                  v31 = (_DWORD *)sub_6DFCC(v51, "ipreport");
                  if ( v31 && *v31 == 3 )
                  {
                    dword_1B13B0 = sub_6E430(v31);
                    v32 = v51[1];
                    if ( v32 != -1 )
                    {
                      v33 = v32 - 1;
                      v51[1] = v33;
                      if ( !v33 )
                        sub_6E5DC(v51);
                    }
                    dword_1B13B4 = 1;
                    return 0;
                  }
                  else
                  {
                    snprintf(s, 0x800u, "%s,%d bad ipreport\n", "platform/7007/src/hal_conf.c", 128);
                    sub_47AB4(0, s, 0);
                    v47 = v51[1];
                    if ( v47 != -1 )
                    {
                      v48 = v47 - 1;
                      v51[1] = v48;
                      if ( !v48 )
                        sub_6E5DC(v51);
                    }
                    return -9;
                  }
                }
                else
                {
                  snprintf(s, 0x800u, "%s,%d bad reset\n", "platform/7007/src/hal_conf.c", 120);
                  sub_47AB4(0, s, 0);
                  v45 = v51[1];
                  if ( v45 != -1 )
                  {
                    v46 = v45 - 1;
                    v51[1] = v46;
                    if ( !v46 )
                      sub_6E5DC(v51);
                  }
                  return -8;
                }
              }
              else
              {
                snprintf(s, 0x800u, "%s,%d bad green\n", "platform/7007/src/hal_conf.c", 112);
                sub_47AB4(0, s, 0);
                v43 = v51[1];
                if ( v43 != -1 )
                {
                  v44 = v43 - 1;
                  v51[1] = v44;
                  if ( !v44 )
                    sub_6E5DC(v51);
                }
                return -7;
              }
            }
            else
            {
              snprintf(s, 0x800u, "%s,%d bad red\n", "platform/7007/src/hal_conf.c", 104);
              sub_47AB4(0, s, 0);
              v41 = v51[1];
              if ( v41 != -1 )
              {
                v42 = v41 - 1;
                v51[1] = v42;
                if ( !v42 )
                  sub_6E5DC(v51);
              }
              return -6;
            }
          }
          v23 = (_DWORD *)sub_6E1C4(v17, v22);
          v24 = v23;
          if ( !v23 || *v23 )
            break;
          v25 = sub_6DFCC(v23, "id");
          *(v18 - 3) = sub_6E430(v25);
          v26 = sub_6DFCC(v24, "name");
          *(v18 - 2) = sub_6E430(v26);
          v27 = sub_6DFCC(v24, "max");
          *(v18 - 1) = sub_6E430(v27);
        }
        snprintf(s, 0x800u, "%s,%d bad object in fan\n", "platform/7007/src/hal_conf.c", 89);
        sub_47AB4(0, s, 0);
        v37 = v51[1];
        if ( v37 != -1 )
        {
          v38 = v37 - 1;
          v51[1] = v38;
          if ( !v38 )
            sub_6E5DC(v51);
        }
        return -5;
      }
      else
      {
        snprintf(s, 0x800u, "%s,%d bad fan format\n", "platform/7007/src/hal_conf.c", 80);
        sub_47AB4(0, s, 0);
        v49 = v51[1];
        if ( v49 != -1 )
        {
          v50 = v49 - 1;
          v51[1] = v50;
          if ( !v50 )
            sub_6E5DC(v51);
        }
        return -4;
      }
    }
    else
    {
      snprintf(s, 0x800u, "%s,%d bad chain format\n", "platform/7007/src/hal_conf.c", 53);
      sub_47AB4(0, s, 0);
      v39 = v51[1];
      if ( v39 != -1 )
      {
        v40 = v39 - 1;
        v51[1] = v40;
        if ( !v40 )
          sub_6E5DC(v51);
      }
      return -2;
    }
  }
}
