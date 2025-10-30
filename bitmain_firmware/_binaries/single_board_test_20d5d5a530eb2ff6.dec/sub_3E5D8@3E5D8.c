int __fastcall sub_3E5D8(int a1)
{
  void (__fastcall *v2)(int, int); // r3
  char v4[2]; // [sp+4h] [bp-B8h] BYREF
  char v5; // [sp+6h] [bp-B6h]
  unsigned int v6; // [sp+8h] [bp-B4h] BYREF
  char v7[4]; // [sp+Ch] [bp-B0h] BYREF
  int v8; // [sp+10h] [bp-ACh]
  char v9; // [sp+14h] [bp-A8h]
  char v10[4]; // [sp+18h] [bp-A4h] BYREF
  int v11; // [sp+1Ch] [bp-A0h]
  int v12; // [sp+20h] [bp-9Ch]
  int v13; // [sp+24h] [bp-98h]
  char v14[4]; // [sp+28h] [bp-94h] BYREF
  int v15; // [sp+2Ch] [bp-90h]
  int v16; // [sp+30h] [bp-8Ch]
  int v17; // [sp+34h] [bp-88h]
  char v18[4]; // [sp+38h] [bp-84h] BYREF
  int v19; // [sp+3Ch] [bp-80h]
  int v20; // [sp+40h] [bp-7Ch]
  int v21; // [sp+44h] [bp-78h]
  char s[32]; // [sp+48h] [bp-74h] BYREF
  char v23[32]; // [sp+68h] [bp-54h] BYREF
  char v24[48]; // [sp+88h] [bp-34h] BYREF

  v2 = *(void (__fastcall **)(int, int))(a1 + 32);
  v6 = 0;
  v2(a1, 1);
  (*(void (__fastcall **)(int, int))(a1 + 40))(a1, 1);
  if ( !byte_6E3138 )
    return -1;
  memset(s, 0, sizeof(s));
  v6 = 0x20u;
  snprintf(s, 0x20u, "%s", &byte_6E3138);
  (*(void (__fastcall **)(int, char *, unsigned int *))(a1 + 48))(a1, s, &v6);
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : board_sn:%s\n", "create_v5", &byte_6E3138);
  snprintf(&byte_6362CC[256], 0x100u, "board_sn:%s", &byte_6E3138);
  sub_3CC5C((int)&byte_6362CC[256], v24);
  *(_DWORD *)v10 = 0;
  v6 = 16;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  snprintf(v10, 0x10u, "%s", byte_6E30CC);
  (*(void (__fastcall **)(int, char *, unsigned int *))(a1 + 56))(a1, v10, &v6);
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : chip_die:%s\n", "create_v5", byte_6E30CC);
  snprintf(&byte_6362CC[512], 0x100u, "chip_die:%s", byte_6E30CC);
  sub_3CC5C((int)&byte_6362CC[512], v24);
  v6 = 16;
  *(_DWORD *)v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  snprintf(v14, 0x10u, "%s", &byte_6E30CC[16]);
  (*(void (__fastcall **)(int, char *, unsigned int *))(a1 + 64))(a1, v14, &v6);
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : chip_marking:%s\n", "create_v5", &byte_6E30CC[16]);
  snprintf(&byte_6362CC[768], 0x100u, "chip_marking:%s", &byte_6E30CC[16]);
  sub_3CC5C((int)&byte_6362CC[768], v24);
  v6 = 16;
  *(_DWORD *)v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  snprintf(v18, 0x10u, "%s", &byte_6E30CC[32]);
  (*(void (__fastcall **)(int, char *, unsigned int *))(a1 + 72))(a1, v18, &v6);
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : chip_ftversion:%s\n", "create_v5", &byte_6E30CC[32]);
  snprintf(&byte_6362CC[1024], 0x100u, "chip_ftversion:%s", &byte_6E30CC[32]);
  sub_3CC5C((int)&byte_6362CC[1024], v24);
  v6 = 3;
  *(_WORD *)v4 = 0;
  v5 = 0;
  snprintf(v4, 3u, "%s", &byte_6E30CC[96]);
  (*(void (__fastcall **)(int, char *, unsigned int *))(a1 + 80))(a1, v4, &v6);
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : chip_tech:%s\n", "create_v5", &byte_6E30CC[96]);
  snprintf(&byte_6362CC[1280], 0x100u, "chip_tech:%s", &byte_6E30CC[96]);
  sub_3CC5C((int)&byte_6362CC[1280], v24);
  (*(void (__fastcall **)(int, _DWORD))(a1 + 88))(a1, (unsigned __int8)dword_6E3158);
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : create_v5 set chip_bin %d\n", "create_v5", dword_6E3158);
  snprintf(&byte_6362CC[1536], 0x100u, "create_v5 set chip_bin %d", dword_6E3158);
  sub_3CC5C((int)&byte_6362CC[1536], v24);
  (*(void (__fastcall **)(int, _DWORD))(a1 + 96))(a1, 0);
  (*(void (__fastcall **)(int, _DWORD))(a1 + 112))(a1, 0);
  (*(void (__fastcall **)(int, int))(a1 + 128))(a1, 320);
  (*(void (__fastcall **)(int, unsigned int))(a1 + 136))(a1, 0x20u);
  (*(void (__fastcall **)(int, int))(a1 + 144))(a1, 1);
  (*(void (__fastcall **)(int, int))(a1 + 152))(a1, 1);
  (*(void (__fastcall **)(int, int))(a1 + 160))(a1, 1);
  (*(void (__fastcall **)(int, int))(a1 + 168))(a1, 1);
  v6 = 9;
  *(_DWORD *)v7 = 0;
  v8 = 0;
  v9 = 0;
  snprintf(v7, 9u, "%s", &byte_6E30CC[99]);
  (*(void (__fastcall **)(int, char *, unsigned int *))(a1 + 176))(a1, v7, &v6);
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : board_name:%s\n", "create_v5", &byte_6E30CC[99]);
  snprintf(&byte_6362CC[1792], 0x100u, "board_name:%s", &byte_6E30CC[99]);
  sub_3CC5C((int)&byte_6362CC[1792], v24);
  v6 = 0x20u;
  memset(v23, 0, sizeof(v23));
  snprintf(v23, 0x20u, "%s", byte_6E30AC);
  (*(void (__fastcall **)(int, char *, unsigned int *))(a1 + 184))(a1, v23, &v6);
  sub_1E938(v24, 0x30u);
  printf("%s ", v24);
  printf("%s : factory_job:%s\n", "create_v5", byte_6E30AC);
  snprintf(&byte_6362CC[2048], 0x100u, "factory_job:%s", byte_6E30AC);
  sub_3CC5C((int)&byte_6362CC[2048], v24);
  (*(void (__fastcall **)(int, int))(a1 + 192))(a1, 1290);
  (*(void (__fastcall **)(int, int))(a1 + 200))(a1, 435);
  (*(void (__fastcall **)(int, int))(a1 + 208))(a1, 9983);
  (*(void (__fastcall **)(int, int))(a1 + 216))(a1, 42);
  (*(void (__fastcall **)(int, int))(a1 + 224))(a1, 55);
  (*(void (__fastcall **)(int, int))(a1 + 232))(a1, 1);
  (*(void (__fastcall **)(int, int))(a1 + 240))(a1, 1);
  return 0;
}
