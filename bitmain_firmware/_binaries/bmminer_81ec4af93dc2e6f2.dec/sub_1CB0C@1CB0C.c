int __fastcall sub_1CB0C(int a1, unsigned __int16 *a2)
{
  int v4; // r9
  unsigned int v5; // r0
  unsigned int v6; // r5
  int v7; // r7
  unsigned int v8; // r8
  unsigned __int16 *v9; // r11
  int v10; // r4
  char v11; // r0
  char *v12; // r1
  bool v13; // zf
  char v14; // r3
  unsigned int v15; // t1
  int v16; // r4
  int v18; // r3
  const char *v19; // r2
  int v20; // r3
  int v21; // r3
  int v22; // r1
  int v23; // r3
  int v24; // [sp+0h] [bp-994h]
  int v25; // [sp+4h] [bp-990h]
  int v26; // [sp+8h] [bp-98Ch] BYREF
  _BYTE v27[4]; // [sp+Ch] [bp-988h] BYREF
  _BYTE s[128]; // [sp+10h] [bp-984h] BYREF
  char v29[256]; // [sp+90h] [bp-904h] BYREF
  char v30[2052]; // [sp+190h] [bp-804h] BYREF

  memset(s, 0, sizeof(s));
  memset(v29, 0, sizeof(v29));
  v26 = 128;
  if ( !dword_B0F4C || !*(_BYTE *)(dword_B0F4C + 28) )
  {
    if ( (unsigned int)off_AFC24 > 4 )
    {
      snprintf(v30, 0x800u, "eeprom is not init, chain = %d\n", a1);
      sub_3AF5C(4, v30, 0, v18);
      return -1;
    }
    return -1;
  }
  if ( a2 )
  {
    memset(s, 0, sizeof(s));
    v4 = *(_DWORD *)(dword_B0F4C + 4 * a1);
    (*(void (__fastcall **)(int, _DWORD))(v4 + 248))(v4, *a2);
    (*(void (__fastcall **)(int, _DWORD))(v4 + 256))(v4, a2[1]);
    (*(void (__fastcall **)(int, _DWORD))(v4 + 264))(v4, *((unsigned __int8 *)a2 + 4));
    v5 = *((_DWORD *)a2 + 2);
    v6 = a2[1];
    if ( v5 < v6 )
    {
LABEL_13:
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v19 = "freq value[%d] less than freq base[%d] for chain %d.\n";
        v20 = v5;
        v25 = a1;
        v24 = v6;
        goto LABEL_22;
      }
    }
    else
    {
      v7 = *((unsigned __int8 *)a2 + 4);
      v8 = v6 + 16 * v7;
      if ( v5 < v8 )
      {
        v9 = a2 + 4;
        v10 = 0;
        while ( 1 )
        {
          v11 = sub_8C218(v5 - v6, v7);
          v12 = &v30[(v10 >> 1) + 2048];
          v13 = (v10 & 1) == 0;
          v14 = 16 * v11;
          ++v10;
          if ( v13 )
            v14 = v11 & 0xF;
          *(v12 - 2432) |= v14;
          if ( v10 == 256 )
            break;
          v15 = *((_DWORD *)v9 + 1);
          v9 += 2;
          v5 = v15;
          if ( v15 < v6 )
            goto LABEL_13;
          if ( v5 >= v8 )
            goto LABEL_19;
        }
        (*(void (__fastcall **)(int, _BYTE *, int *))(v4 + 272))(v4, s, &v26);
        v22 = *((unsigned __int8 *)a2 + 1032);
        if ( *((_BYTE *)a2 + 1032) )
          v22 = 1;
        (*(void (__fastcall **)(int, int))(v4 + 280))(v4, v22);
        v26 = 256;
        (*(void (__fastcall **)(int, char *, int *, _BYTE *))(v4 + 20))(v4, v29, &v26, v27);
        v16 = sub_5A3FC(a1, v27[0], v29, v26);
        if ( v16 )
        {
          if ( (unsigned int)off_AFC24 > 3 )
          {
            snprintf(v30, 0x800u, "Write sweep result fail for chain %d.\n", a1);
            sub_3AF5C(3, v30, 0, v23);
          }
          return v16;
        }
        return 0;
      }
LABEL_19:
      if ( (unsigned int)off_AFC24 > 3 )
      {
        v19 = "freq value[%d] greater than freq max[%d] for chain %d.\n";
        v20 = v5;
        v25 = a1;
        v24 = v6 + 16 * v7;
LABEL_22:
        v16 = -1;
        snprintf(v30, 0x800u, v19, v20, v24, v25, v26);
        sub_3AF5C(3, v30, 0, v21);
        return v16;
      }
    }
    return -1;
  }
  return 0;
}
