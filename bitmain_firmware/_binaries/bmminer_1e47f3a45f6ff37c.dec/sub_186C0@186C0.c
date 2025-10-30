int sub_186C0()
{
  int v0; // r4
  int v1; // r0
  int v2; // r11
  char *v3; // r9
  char *v4; // r8
  char *v5; // r7
  char *v6; // r12
  char *v7; // r9
  char *v8; // r0
  char *v9; // r8
  char *v10; // r1
  char *v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r5
  int v15; // r7
  size_t v16; // r0
  int v17; // r5
  void *v18; // r0
  int v19; // r7
  int v20; // r0
  size_t v22; // r0
  int v23; // r5
  void *v24; // r0
  int v25; // r7
  int v26; // r3
  pthread_attr_t v27[57]; // [sp+0h] [bp-804h] BYREF

  sub_17048();
  v0 = sub_179C4();
  v1 = sub_26AF4(v0);
  if ( v0 <= v1 )
    v2 = sub_26AF4(v1);
  else
    v2 = sub_179C4();
  if ( (unsigned int)dword_B308C > 3 )
  {
    snprintf(v27[0].__size, 0x800u, "max sensor num = %d", v2);
    sub_3B6AC(3, v27, 0, v26);
  }
  v3 = (char *)malloc(0x10u);
  dword_B3C50 = (int)v3;
  v4 = (char *)malloc(0x40u);
  dword_B3C78 = (int)v4;
  v5 = (char *)malloc(96 * v2);
  memset(v5, 0, 96 * v2);
  v6 = v3 - 4;
  v7 = v3 + 12;
  v8 = v4;
  v9 = v5;
  do
  {
    v10 = v8;
    v11 = v9;
    v12 = 0;
    *((_DWORD *)v6 + 1) = v8;
    for ( v6 += 4; ; v10 = *(char **)v6 )
    {
      *(_DWORD *)&v10[v12] = v11;
      v12 += 4;
      v11 += 6 * v2;
      if ( v12 == 16 )
        break;
    }
    v9 += 24 * v2;
    v8 += 16;
  }
  while ( v6 != v7 );
  dword_B3C7C = (int)&v5[96 * v2];
  v13 = sub_179C4();
  v14 = 0;
  dword_B3C4C = (int)malloc(4 * v13);
  while ( v14 < sub_179C4() )
  {
    v15 = dword_B3C4C;
    *(_DWORD *)(v15 + 4 * v14) = sub_26AD4(v14);
    ++v14;
    dword_B3C70 = 1;
  }
  v16 = sub_26AF4(v14);
  v17 = 0;
  v18 = malloc(v16);
  dword_B3C80 = (int)v18;
  while ( v17 < sub_26AF4(v18) )
  {
    v19 = dword_B3C80;
    v18 = (void *)sub_26B04(v17);
    *(_BYTE *)(v19 + v17++) = (_BYTE)v18;
    dword_B3C70 = 0;
  }
  v20 = sub_27348(v17);
  if ( v20 )
  {
    v22 = sub_27348(v20);
    v23 = 0;
    v24 = malloc(v22);
    dword_B3C84 = (int)v24;
    while ( v23 < sub_27348(v24) )
    {
      v25 = dword_B3C84;
      v24 = (void *)sub_27358(v23);
      *(_BYTE *)(v25 + v23++) = (_BYTE)v24;
    }
    dword_B3C70 = 3;
  }
  pthread_attr_init(v27);
  pthread_attr_setstacksize(v27, 0x100000u);
  byte_B3C74 = 0;
  dword_B3C88 = 1;
  pthread_create(&newthread, v27, (void *(*)(void *))sub_19250, 0);
  return pthread_detach(newthread);
}
