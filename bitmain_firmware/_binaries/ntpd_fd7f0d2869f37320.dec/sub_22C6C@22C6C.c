void *__fastcall sub_22C6C(int a1)
{
  unsigned int v1; // r8
  int v2; // r12
  unsigned int v4; // r11
  int v5; // r6
  unsigned int v6; // r7
  int v7; // r9
  int v8; // r8
  unsigned int v9; // r1
  unsigned int i; // r3
  char *v11; // r4
  size_t v12; // r0
  int v13; // r2
  char *v14; // r1
  size_t v15; // r0
  int v16; // r7
  size_t v17; // r0
  _DWORD *v18; // r5
  int v19; // r4
  _DWORD *v20; // r5
  const char *v21; // [sp+0h] [bp-D8h]
  const char *v22; // [sp+8h] [bp-D0h]
  const char *v23; // [sp+8h] [bp-D0h]
  char v24[8]; // [sp+58h] [bp-80h] BYREF
  char v25[8]; // [sp+60h] [bp-78h] BYREF
  char v26[8]; // [sp+68h] [bp-70h] BYREF
  char v27[8]; // [sp+70h] [bp-68h] BYREF
  char v28[8]; // [sp+78h] [bp-60h] BYREF
  char v29[8]; // [sp+80h] [bp-58h] BYREF
  char v30[8]; // [sp+88h] [bp-50h] BYREF
  char s1[8]; // [sp+90h] [bp-48h] BYREF
  char v32[8]; // [sp+98h] [bp-40h] BYREF
  char v33[8]; // [sp+A0h] [bp-38h] BYREF
  char v34[12]; // [sp+A8h] [bp-30h] BYREF
  char v35[12]; // [sp+B4h] [bp-24h] BYREF
  char v36[12]; // [sp+C0h] [bp-18h] BYREF
  _DWORD v37[3]; // [sp+CCh] [bp-Ch] BYREF
  char v38[20]; // [sp+D8h] [bp+0h] BYREF
  char v39[40]; // [sp+ECh] [bp+14h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 98);
  strcpy(s1, "ifstats");
  v2 = (unsigned __int16)((v1 >> 8) | ((_WORD)v1 << 8));
  strcpy(v38, "addr_restrictions");
  if ( !(v1 << 8) )
  {
LABEL_7:
    if ( sys_ifnum )
    {
      v4 = 0;
      do
      {
        v5 = ep_list;
        if ( ep_list )
        {
          while ( *(_DWORD *)(v5 + 20) != v4 )
          {
            v5 = *(_DWORD *)v5;
            if ( !v5 )
              goto LABEL_24;
          }
          v21 = v33;
          strcpy(v32, "addr.%u");
          strcpy(v34, "bcast.%u");
          v6 = 0;
          v7 = 0;
          strcpy(v24, "en.%u");
          strcpy(v33, "name.%u");
          memset(v37, 0, sizeof(v37));
          strcpy(v35, "flags.%u");
          strcpy(v25, "tl.%u");
          v8 = 12;
          strcpy(v26, "mc.%u");
          strcpy(v27, "rx.%u");
          strcpy(v28, "tx.%u");
          strcpy(v36, "txerr.%u");
          strcpy(v29, "pc.%u");
          strcpy(v30, "up.%u");
          do
          {
            if ( v7 <= 3 )
            {
              v7 = 27;
              v16 = rand();
              v6 = v16 ^ (rand() << 16);
            }
            else
            {
              v7 -= 4;
            }
            v9 = v6 & 0xF;
            v6 >>= 4;
            for ( i = v9 % 0xC; ; i = (i + 1) % 0xC )
            {
              v11 = &v39[i + 36];
              if ( !*((_BYTE *)v37 + i) )
                break;
            }
            switch ( i )
            {
              case 1u:
                sub_6D00C(v39, 32, v34, v4, v21);
                v13 = *(_DWORD *)(v5 + 144) & 0x20;
                if ( v13 )
                {
                  v23 = (const char *)sub_6D454(v5 + 80);
                  v17 = strlen(v23);
                  v14 = (char *)v23;
                  v13 = v17;
                }
                else
                {
                  v14 = byte_99528;
                }
                sub_1F350(v39, (int)v14, v13);
                break;
              case 2u:
                sub_6D00C(v39, 32, v24, v4, v21);
                sub_1FD0C(v39, *(_DWORD *)(v5 + 180) == 0);
                break;
              case 3u:
                sub_6D00C(v39, 32, v21, v4, v21);
                v12 = strlen((const char *)(v5 + 108));
                sub_1F528(v39, v5 + 108, v12);
                break;
              case 4u:
                sub_6D00C(v39, 32, v35, v4, v21);
                sub_1FC68(v39, *(_DWORD *)(v5 + 144));
                break;
              case 5u:
                sub_6D00C(v39, 32, v25, v4, v21);
                sub_1FD0C(v39, *(_DWORD *)(v5 + 148));
                break;
              case 6u:
                sub_6D00C(v39, 32, v26, v4, v21);
                sub_1FD0C(v39, *(_DWORD *)(v5 + 156));
                break;
              case 7u:
                sub_6D00C(v39, 32, v27, v4, v21);
                sub_1FD0C(v39, *(_DWORD *)(v5 + 164));
                break;
              case 8u:
                sub_6D00C(v39, 32, v28, v4, v21);
                sub_1FD0C(v39, *(_DWORD *)(v5 + 168));
                break;
              case 9u:
                sub_6D00C(v39, 32, v36, v4, v21);
                sub_1FD0C(v39, *(_DWORD *)(v5 + 172));
                break;
              case 0xAu:
                sub_6D00C(v39, 32, v29, v4, v21);
                sub_1FDB0(v39, *(_DWORD *)(v5 + 188));
                break;
              case 0xBu:
                sub_6D00C(v39, 32, v30, v4, v21);
                sub_1FDB0(v39, current_time - *(_DWORD *)(v5 + 160));
                break;
              default:
                sub_6D00C(v39, 32, v32, v4, v21);
                v22 = (const char *)sub_6D454(v5 + 24);
                v15 = strlen(v22);
                sub_1F350(v39, (int)v22, v15);
                break;
            }
            --v8;
            *(v11 - 68) = 1;
          }
          while ( v8 );
          sub_1FE54(v4);
        }
LABEL_24:
        ++v4;
      }
      while ( v4 < sys_ifnum );
    }
    return sub_1EDD4(0);
  }
  if ( v2 == 7 )
  {
    if ( memcmp(s1, (const void *)(a1 + 100), 7u) )
      return (void *)sub_1F734(5);
    goto LABEL_7;
  }
  if ( v2 != 17 || memcmp(v38, (const void *)(a1 + 100), 0x11u) )
    return (void *)sub_1F734(5);
  v18 = (_DWORD *)restrictlist4;
  if ( restrictlist4 )
  {
    v19 = 0;
    do
    {
      ++v19;
      sub_1FFE4();
      v18 = (_DWORD *)*v18;
    }
    while ( v18 );
  }
  else
  {
    v19 = 0;
  }
  v20 = (_DWORD *)restrictlist6;
  if ( !restrictlist6 )
    return sub_1EDD4(0);
  do
  {
    ++v19;
    sub_1FFE4();
    v20 = (_DWORD *)*v20;
  }
  while ( v20 );
  return sub_1EDD4(0);
}
