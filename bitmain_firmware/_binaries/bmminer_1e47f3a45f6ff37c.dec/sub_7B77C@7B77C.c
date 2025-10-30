int __fastcall sub_7B77C(int a1)
{
  pthread_mutex_t *v2; // r8
  int v3; // r9
  size_t v4; // r0
  int v5; // r5
  in_addr_t v6; // r0
  int v7; // r0
  int v8; // r5
  ssize_t v9; // r0
  int v10; // r3
  int result; // r0
  int v12; // [sp+10h] [bp-47Ch] BYREF
  int v13; // [sp+14h] [bp-478h] BYREF
  struct sockaddr addr; // [sp+18h] [bp-474h] BYREF
  int v15; // [sp+28h] [bp-464h] BYREF
  int v16; // [sp+2Ch] [bp-460h]
  int v17; // [sp+30h] [bp-45Ch]
  int v18; // [sp+34h] [bp-458h]
  int v19; // [sp+38h] [bp-454h]
  int v20; // [sp+3Ch] [bp-450h]
  int v21; // [sp+40h] [bp-44Ch]
  int v22; // [sp+44h] [bp-448h]
  int v23; // [sp+48h] [bp-444h] BYREF
  int v24; // [sp+4Ch] [bp-440h]
  int v25; // [sp+50h] [bp-43Ch]
  int v26; // [sp+54h] [bp-438h]
  int v27; // [sp+58h] [bp-434h]
  int v28; // [sp+5Ch] [bp-430h]
  int v29; // [sp+60h] [bp-42Ch]
  int v30; // [sp+64h] [bp-428h]
  int v31; // [sp+68h] [bp-424h] BYREF
  int v32; // [sp+6Ch] [bp-420h]
  int v33; // [sp+70h] [bp-41Ch]
  int v34; // [sp+74h] [bp-418h]
  int v35; // [sp+78h] [bp-414h]
  int v36; // [sp+7Ch] [bp-410h]
  int v37; // [sp+80h] [bp-40Ch]
  int v38; // [sp+84h] [bp-408h]
  _DWORD dest[32]; // [sp+88h] [bp-404h] BYREF
  _DWORD v40[32]; // [sp+108h] [bp-384h] BYREF
  char buf[4]; // [sp+188h] [bp-304h] BYREF
  _BYTE s[252]; // [sp+18Ch] [bp-300h] BYREF
  _DWORD v43[129]; // [sp+288h] [bp-204h] BYREF

  if ( !dword_5BF608 )
    return -1;
  v2 = (pthread_mutex_t *)malloc(0x24u);
  pthread_mutex_init(v2, 0);
  v3 = dword_5BF624;
  *(_DWORD *)buf = 0;
  memset(s, 0, sizeof(s));
  sprintf(buf, "%x regist %s", 63, (const char *)a1);
  v4 = strlen(buf);
  v5 = dword_5B7200[0];
  send(v3, buf, v4 + 1, 0);
  memset(dest, 0, sizeof(dest));
  while ( v5 == dword_5B7200[0] )
    usleep(0x3E8u);
  memcpy(dest, &dword_5B7200[32 * v5 + 1], sizeof(dest));
  v21 = 0;
  v22 = 0;
  v29 = 0;
  v37 = 0;
  v30 = 0;
  v38 = 0;
  v12 = 0;
  v13 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v31 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  _isoc99_sscanf(dest, "%x%d%s%s%s", &v13, &v12, &v15, &v23, &v31);
  if ( !v12 )
    return -4;
  memset(addr.sa_data, 0, sizeof(addr.sa_data));
  addr.sa_family = 2;
  v6 = inet_addr("127.0.0.1");
  addr.sa_data[0] = BYTE1(v12);
  addr.sa_data[1] = v12;
  *(_DWORD *)&addr.sa_data[2] = v6;
  v7 = socket(2, 1, 0);
  v8 = v7;
  if ( v7 < 0 )
  {
    perror("socket err:");
    return -4;
  }
  else if ( connect(v7, &addr, 0x10u) < 0 )
  {
    perror("connect err:");
    return -3;
  }
  else
  {
    memset(v43, 0, 512);
    v9 = recv(v8, v43, 0x200u, 0);
    if ( v9 > 0 )
      *((_BYTE *)v43 + v9) = 0;
    memset(&v40[1], 0, 0x7Cu);
    v40[0] = &unk_214B4F;
    send(v8, v40, 4u, 0);
    v10 = v12;
    result = 0;
    v2[1].__owner = v8;
    *(_DWORD *)(a1 + 128) = v2;
    v2[1].__lock = v10;
  }
  return result;
}
