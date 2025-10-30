__int16 *__fastcall sub_211F8(int a1)
{
  unsigned int v1; // r4
  __int16 v2; // r4
  unsigned int v4; // r11
  int v5; // r6
  unsigned int v6; // r5
  int v7; // r8
  int v8; // r7
  unsigned int v9; // r2
  unsigned int v10; // r3
  char *v11; // r4
  size_t v12; // r0
  int v13; // r2
  char *v14; // r1
  size_t v15; // r0
  int v16; // r5
  size_t v17; // r0
  _DWORD *v18; // r5
  int v19; // r4
  int v20; // r2
  _DWORD *v21; // r5
  int v22; // r2
  const char *v23; // [sp+0h] [bp-D0h]
  const char *v24; // [sp+34h] [bp-9Ch]
  const char *v25; // [sp+34h] [bp-9Ch]
  char v26[8]; // [sp+50h] [bp-80h] BYREF
  char v27[8]; // [sp+58h] [bp-78h] BYREF
  char v28[8]; // [sp+60h] [bp-70h] BYREF
  char v29[8]; // [sp+68h] [bp-68h] BYREF
  char v30[8]; // [sp+70h] [bp-60h] BYREF
  char v31[8]; // [sp+78h] [bp-58h] BYREF
  char v32[8]; // [sp+80h] [bp-50h] BYREF
  char s1[8]; // [sp+88h] [bp-48h] BYREF
  char v34[8]; // [sp+90h] [bp-40h] BYREF
  char v35[8]; // [sp+98h] [bp-38h] BYREF
  char v36[12]; // [sp+A0h] [bp-30h] BYREF
  char v37[12]; // [sp+ACh] [bp-24h] BYREF
  char v38[12]; // [sp+B8h] [bp-18h] BYREF
  _DWORD v39[3]; // [sp+C4h] [bp-Ch] BYREF
  char v40[20]; // [sp+D0h] [bp+0h] BYREF
  char v41[40]; // [sp+E4h] [bp+14h] BYREF

  v1 = *(unsigned __int16 *)(a1 + 98);
  strcpy(s1, "ifstats");
  v2 = __rev16(v1);
  strcpy(v40, "addr_restrictions");
  if ( !v2 )
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
          strcpy(v34, "addr.%u");
          v23 = v35;
          v6 = 0;
          strcpy(v36, "bcast.%u");
          v7 = 0;
          strcpy(v26, "en.%u");
          strcpy(v35, "name.%u");
          strcpy(v37, "flags.%u");
          strcpy(v27, "tl.%u");
          memset(v39, 0, sizeof(v39));
          strcpy(v28, "mc.%u");
          strcpy(v29, "rx.%u");
          v8 = 12;
          strcpy(v30, "tx.%u");
          strcpy(v38, "txerr.%u");
          strcpy(v31, "pc.%u");
          strcpy(v32, "up.%u");
          do
          {
            if ( v7 <= 3 )
            {
              v16 = rand();
              v7 = 27;
              v6 = v16 ^ (rand() << 16);
            }
            else
            {
              v7 -= 4;
            }
            v9 = v6 & 0xF;
            v6 >>= 4;
            while ( 1 )
            {
              v10 = v9 % 0xC;
              v11 = &v41[v9 % 0xC + 36];
              if ( !*((_BYTE *)v39 + v9 % 0xC) )
                break;
              v9 = v10 + 1;
            }
            switch ( v10 )
            {
              case 1u:
                sub_6C054(v41, 32, v36, v4, v23);
                v13 = *(_DWORD *)(v5 + 144) & 0x20;
                if ( v13 )
                {
                  v25 = (const char *)sub_6C47C(v5 + 80);
                  v17 = strlen(v25);
                  v14 = (char *)v25;
                  v13 = v17;
                }
                else
                {
                  v14 = byte_97F7C;
                }
                sub_1F0E4(v41, (int)v14, v13);
                break;
              case 2u:
                sub_6C054(v41, 32, v26, v4, v23);
                sub_1FAA8(v41, *(_DWORD *)(v5 + 180) == 0);
                break;
              case 3u:
                sub_6C054(v41, 32, v23, v4, v23);
                v12 = strlen((const char *)(v5 + 108));
                sub_1F2C0(v41, v5 + 108, v12);
                break;
              case 4u:
                sub_6C054(v41, 32, v37, v4, v23);
                sub_1FA04(v41, *(_DWORD *)(v5 + 144));
                break;
              case 5u:
                sub_6C054(v41, 32, v27, v4, v23);
                sub_1FAA8(v41, *(_DWORD *)(v5 + 148));
                break;
              case 6u:
                sub_6C054(v41, 32, v28, v4, v23);
                sub_1FAA8(v41, *(_DWORD *)(v5 + 156));
                break;
              case 7u:
                sub_6C054(v41, 32, v29, v4, v23);
                sub_1FAA8(v41, *(_DWORD *)(v5 + 164));
                break;
              case 8u:
                sub_6C054(v41, 32, v30, v4, v23);
                sub_1FAA8(v41, *(_DWORD *)(v5 + 168));
                break;
              case 9u:
                sub_6C054(v41, 32, v38, v4, v23);
                sub_1FAA8(v41, *(_DWORD *)(v5 + 172));
                break;
              case 0xAu:
                sub_6C054(v41, 32, v31, v4, v23);
                sub_1FB4C(v41, *(_DWORD *)(v5 + 188));
                break;
              case 0xBu:
                sub_6C054(v41, 32, v32, v4, v23);
                sub_1FB4C(v41, current_time - *(_DWORD *)(v5 + 160));
                break;
              default:
                sub_6C054(v41, 32, v34, v4, v23);
                v24 = (const char *)sub_6C47C(v5 + 24);
                v15 = strlen(v24);
                sub_1F0E4(v41, (int)v24, v15);
                break;
            }
            --v8;
            *(v11 - 68) = 1;
          }
          while ( v8 );
          sub_1FBF0(v4);
        }
LABEL_24:
        ++v4;
      }
      while ( v4 < sys_ifnum );
    }
    return sub_1EBA4(0);
  }
  if ( v2 == 7 )
  {
    if ( memcmp(s1, (const void *)(a1 + 100), 7u) )
      return (__int16 *)sub_1F4D0(5);
    goto LABEL_7;
  }
  if ( v2 != 17 || memcmp(v40, (const void *)(a1 + 100), 0x11u) )
    return (__int16 *)sub_1F4D0(5);
  v18 = (_DWORD *)restrictlist4;
  if ( restrictlist4 )
  {
    v19 = 0;
    do
    {
      v20 = v19++;
      sub_1FD78((int)v18, 0, v20);
      v18 = (_DWORD *)*v18;
    }
    while ( v18 );
  }
  else
  {
    v19 = 0;
  }
  v21 = (_DWORD *)restrictlist6;
  if ( !restrictlist6 )
    return sub_1EBA4(0);
  do
  {
    v22 = v19++;
    sub_1FD78((int)v21, 1, v22);
    v21 = (_DWORD *)*v21;
  }
  while ( v21 );
  return sub_1EBA4(0);
}
