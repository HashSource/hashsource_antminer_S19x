int sub_182E8()
{
  int v0; // r4
  int v1; // r0
  int v2; // r8
  int v3; // r8
  int v4; // r5
  int v5; // r10
  char *v6; // r9
  char *v7; // r7
  char *v8; // r0
  int v9; // lr
  char *v10; // r12
  char *v11; // r8
  char *v12; // r9
  char *v13; // r1
  char *v14; // r2
  int v15; // r3
  int v16; // r5
  int v17; // r0
  int v18; // r7
  size_t v19; // r0
  int v20; // r5
  void *v21; // r0
  int v22; // r0
  size_t v24; // r0
  void *v25; // r0
  int v26; // r5
  int v27; // r3
  pthread_attr_t v28[56]; // [sp+0h] [bp-800h] BYREF

  sub_16D38();
  v0 = sub_17674();
  v1 = sub_265EC(v0);
  if ( v0 <= v1 )
    v2 = sub_265EC(v1);
  else
    v2 = sub_17674();
  if ( (unsigned int)off_AFC24 > 3 )
  {
    snprintf(v28[0].__size, 0x800u, "max sensor num = %d", v2);
    sub_3AF5C(3, v28, 0, v27);
  }
  v3 = 3 * v2;
  v4 = 32 * v3;
  v5 = 8 * v3;
  v6 = (char *)malloc(0x10u);
  dword_B0EE0 = (int)v6;
  v7 = (char *)malloc(0x40u);
  v8 = (char *)calloc(32 * v3, 1u);
  v9 = 2 * v3;
  v10 = v6 - 4;
  v11 = v8;
  v12 = v6 + 12;
  do
  {
    v13 = v7;
    v14 = v11;
    v15 = 0;
    *((_DWORD *)v10 + 1) = v7;
    for ( v10 += 4; ; v13 = *(char **)v10 )
    {
      *(_DWORD *)&v13[v15] = v14;
      v15 += 4;
      v14 += v9;
      if ( v15 == 16 )
        break;
    }
    v11 += v5;
    v7 += 16;
  }
  while ( v12 != v10 );
  dword_B0F08 = (int)&v8[v4];
  v16 = 0;
  v17 = sub_17674();
  dword_B0EDC = (int)malloc(4 * v17);
  while ( sub_17674() > v16 )
  {
    v18 = dword_B0EDC;
    *(_DWORD *)(v18 + 4 * v16++) = sub_265D0();
    dword_B0F00 = 1;
  }
  v19 = sub_265EC(v16);
  v20 = 0;
  v21 = malloc(v19);
  dword_B0F0C = (int)v21;
  while ( sub_265EC(v21) > v20 )
  {
    v21 = (void *)sub_265FC();
    *(_BYTE *)(dword_B0F0C + v20++) = (_BYTE)v21;
    dword_B0F00 = 0;
  }
  v22 = sub_26DF8(v20);
  if ( v22 )
  {
    v24 = sub_26DF8(v22);
    v25 = malloc(v24);
    v26 = 0;
    dword_B0F10 = (int)v25;
    while ( sub_26DF8(v25) > v26 )
    {
      v25 = (void *)sub_26E08();
      *(_BYTE *)(dword_B0F10 + v26++) = (_BYTE)v25;
    }
    dword_B0F00 = 3;
  }
  pthread_attr_init(v28);
  pthread_attr_setstacksize(v28, 0x100000u);
  byte_B0F04 = 0;
  dword_B0F14 = 1;
  pthread_create(&newthread, v28, (void *(*)(void *))sub_18E00, 0);
  return pthread_detach(newthread);
}
