int __fastcall sub_43FA4(int a1)
{
  pthread_mutex_t *v2; // r8
  int v3; // r9
  int v4; // r5
  size_t v5; // r0
  int v6; // r0
  int v7; // r5
  ssize_t v8; // r0
  unsigned int v9; // r3
  int result; // r0
  unsigned int v11; // [sp+10h] [bp-47Ch] BYREF
  int v12; // [sp+14h] [bp-478h] BYREF
  struct sockaddr addr; // [sp+18h] [bp-474h] BYREF
  int v14; // [sp+28h] [bp-464h] BYREF
  int v15; // [sp+2Ch] [bp-460h]
  int v16; // [sp+30h] [bp-45Ch]
  int v17; // [sp+34h] [bp-458h]
  int v18; // [sp+38h] [bp-454h]
  int v19; // [sp+3Ch] [bp-450h]
  int v20; // [sp+40h] [bp-44Ch]
  int v21; // [sp+44h] [bp-448h]
  int v22; // [sp+48h] [bp-444h] BYREF
  int v23; // [sp+4Ch] [bp-440h]
  int v24; // [sp+50h] [bp-43Ch]
  int v25; // [sp+54h] [bp-438h]
  int v26; // [sp+58h] [bp-434h]
  int v27; // [sp+5Ch] [bp-430h]
  int v28; // [sp+60h] [bp-42Ch]
  int v29; // [sp+64h] [bp-428h]
  int v30; // [sp+68h] [bp-424h] BYREF
  int v31; // [sp+6Ch] [bp-420h]
  int v32; // [sp+70h] [bp-41Ch]
  int v33; // [sp+74h] [bp-418h]
  int v34; // [sp+78h] [bp-414h]
  int v35; // [sp+7Ch] [bp-410h]
  int v36; // [sp+80h] [bp-40Ch]
  int v37; // [sp+84h] [bp-408h]
  _DWORD dest[32]; // [sp+88h] [bp-404h] BYREF
  _DWORD v39[32]; // [sp+108h] [bp-384h] BYREF
  char buf[4]; // [sp+188h] [bp-304h] BYREF
  _BYTE s[252]; // [sp+18Ch] [bp-300h] BYREF
  _DWORD v42[129]; // [sp+288h] [bp-204h] BYREF

  if ( !dword_6ACE8 )
    return -1;
  v2 = (pthread_mutex_t *)malloc(0x24u);
  pthread_mutex_init(v2, 0);
  v3 = dword_6AD04;
  *(_DWORD *)buf = 0;
  memset(s, 0, sizeof(s));
  sprintf(buf, "%x regist %s", 63, (const char *)a1);
  v4 = dword_6ACE0;
  v5 = strlen(buf);
  send(v3, buf, v5 + 1, 0);
  memset(dest, 0, sizeof(dest));
  while ( dword_6ACE0 == v4 )
    usleep(0x3E8u);
  memcpy(dest, (char *)&unk_6AD08 + 128 * v4, sizeof(dest));
  v11 = 0;
  v12 = 0;
  v14 = 0;
  v15 = 0;
  v22 = 0;
  v23 = 0;
  v30 = 0;
  v31 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v32 = 0;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  _isoc99_sscanf(dest, "%x%d%s%s%s", &v12, &v11, &v14, &v22, &v30);
  if ( !v11 )
    return -4;
  addr.sa_family = 2;
  memset(addr.sa_data, 0, sizeof(addr.sa_data));
  *(_DWORD *)&addr.sa_data[2] = inet_addr("127.0.0.1");
  *(_WORD *)addr.sa_data = __rev16(v11);
  v6 = socket(2, 1, 0);
  v7 = v6;
  if ( v6 < 0 )
  {
    perror("socket err:");
    return -4;
  }
  else if ( connect(v6, &addr, 0x10u) < 0 )
  {
    perror("connect err:");
    return -3;
  }
  else
  {
    memset(v42, 0, 512);
    v8 = recv(v7, v42, 0x200u, 0);
    if ( v8 > 0 )
      *((_BYTE *)v42 + v8) = 0;
    memset(&v39[1], 0, 0x7Cu);
    v39[0] = 2181967;
    send(v7, v39, 4u, 0);
    v9 = v11;
    result = 0;
    v2[1].__owner = v7;
    *(_DWORD *)(a1 + 128) = v2;
    v2[1].__lock = v9;
  }
  return result;
}
