int __fastcall sub_257EC(int a1, size_t *a2, char **a3)
{
  _DWORD *v5; // r0
  _DWORD *v6; // r4
  _DWORD *v7; // r0
  const char *v8; // r12
  _DWORD *v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r12
  _DWORD *v16; // r0
  _DWORD *v17; // r9
  const char *v18; // r0
  int v19; // r3
  size_t v20; // r0
  char *v21; // r0
  char *v22; // r11
  signed int v23; // r8
  int v24; // r0
  int v25; // r10
  int v26; // r3
  _DWORD *v27; // r0
  int v28; // r0
  int v29; // r3
  int v30; // r0
  int v31; // r3
  _DWORD v32[513]; // [sp+0h] [bp-804h] BYREF

  v5 = (_DWORD *)sub_75FEC(a1, "power");
  v6 = v5;
  if ( !v5 || *v5 )
  {
    if ( (unsigned int)dword_B308C <= 3 )
      return -1;
    strcpy((char *)v32, "get power failed\n");
    sub_3B6AC(3, v32, 0, *(_DWORD *)"iled\n");
    return -1;
  }
  else
  {
    if ( (unsigned int)dword_B308C > 4 )
    {
      strcpy((char *)v32, "power:\n");
      sub_3B6AC(4, v32, 0, "power:\n");
    }
    v7 = (_DWORD *)sub_75FEC(v6, "type");
    if ( !v7 || *v7 != 2 )
    {
      if ( (unsigned int)dword_B308C > 3 )
      {
        v8 = "get type failed\n";
LABEL_18:
        v11 = *(_DWORD *)v8;
        v12 = *((_DWORD *)v8 + 1);
        v13 = *((_DWORD *)v8 + 2);
        v14 = *((_DWORD *)v8 + 3);
        v15 = *((_DWORD *)v8 + 4);
        v32[0] = v11;
        v32[1] = v12;
        v32[2] = v13;
        v32[3] = v14;
        LOBYTE(v32[4]) = v15;
        sub_3B6AC(3, v32, 0, v14);
        return -1;
      }
      return -1;
    }
    if ( (unsigned int)dword_B308C > 4 )
    {
      v18 = (const char *)sub_777D0(v7);
      snprintf((char *)v32, 0x800u, "type: %s\n", v18);
      sub_3B6AC(4, v32, 0, v19);
    }
    v16 = (_DWORD *)sub_75FEC(v6, "version");
    v17 = v16;
    if ( v16 && *v16 == 1 )
    {
      v20 = sub_76B34(v16);
      *a2 = v20;
      v21 = (char *)calloc(v20, 2u);
      *a3 = v21;
      if ( (int)*a2 > 0 )
      {
        v22 = v21;
        v23 = 0;
        while ( 1 )
        {
          v24 = sub_76B80(v17, v23);
          v25 = 2 * v23++;
          *(_WORD *)&v22[v25] = sub_77C98(v24);
          if ( (unsigned int)dword_B308C > 4 )
          {
            snprintf((char *)v32, 0x800u, "psu version = 0x%x", *(unsigned __int16 *)&(*a3)[v25]);
            sub_3B6AC(4, v32, 0, v26);
          }
          if ( v23 >= (int)*a2 )
            break;
          v22 = *a3;
        }
      }
      v27 = (_DWORD *)sub_75FEC(v6, "i2c_addr");
      if ( v27 && *v27 == 3 )
      {
        if ( (unsigned int)dword_B308C > 4 )
        {
          v28 = sub_77C98(v27);
          snprintf((char *)v32, 0x800u, "i2c_addr: %d\n", v28);
          sub_3B6AC(4, v32, 0, v29);
        }
        v10 = (_DWORD *)sub_75FEC(v6, "gpio");
        if ( !v10 || *v10 != 3 )
        {
          if ( (unsigned int)dword_B308C > 3 )
          {
            v8 = (const char *)&unk_929C8;
            goto LABEL_18;
          }
          return -1;
        }
        if ( (unsigned int)dword_B308C > 4 )
        {
          v30 = sub_77C98(v10);
          snprintf((char *)v32, 0x800u, "gpio: %d\n", v30);
          sub_3B6AC(4, v32, 0, v31);
        }
        return 0;
      }
      else
      {
        if ( (unsigned int)dword_B308C <= 3 )
          return -1;
        strcpy((char *)v32, "get i2c_addr failed\n");
        sub_3B6AC(3, v32, 0, *(_DWORD *)" failed\n");
        return -1;
      }
    }
    else
    {
      if ( (unsigned int)dword_B308C <= 3 )
        return -1;
      strcpy((char *)v32, "get version array failed\n");
      sub_3B6AC(3, v32, 0, *(_DWORD *)"array failed\n");
      return -1;
    }
  }
}
