int __fastcall sub_6F494(int a1, size_t *a2, const void *a3)
{
  size_t v5; // r1
  size_t v7; // r9
  _DWORD *v8; // r0
  size_t v9; // r3
  const void *v10; // r1
  size_t v11; // lr
  size_t v12; // r7
  int v13; // r5
  size_t v14; // r12
  int v16; // r11
  int v17; // r10
  int v18; // r5
  sem_t *v19; // r10

  if ( !a2 )
    sub_6FC54("work_thread.c", 302, 0, "hdr != ((void *)0)");
  if ( !a3 )
    sub_6FC54("work_thread.c", 303, 0, "data != ((void *)0)");
  v5 = *a2;
  if ( *a2 <= 0x18 )
    return 1;
  v7 = v5 - 24;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( !dword_108250 )
    {
      v19 = &stru_108254;
      if ( sem_init(&stru_108254, 0, 1u) )
        v19 = 0;
      dword_108250 = (int)v19;
    }
    v16 = a1 + 76;
    v17 = a1 + 92;
    v18 = a1 + 108;
    if ( sem_init((sem_t *)(a1 + 76), 0, 1u) )
      v16 = 0;
    *(_DWORD *)(a1 + 4) = v16;
    if ( sem_init((sem_t *)(a1 + 92), 0, 0) )
      v17 = 0;
    *(_DWORD *)(a1 + 28) = v17;
    if ( sem_init((sem_t *)(a1 + 108), 0, 0) )
      v18 = 0;
    *(_DWORD *)(a1 + 48) = v18;
    sub_6ED48((pthread_t *)a1);
    v5 = *a2;
  }
  v8 = sub_64B04(0, v5, 0, 0);
  v9 = a2[1];
  v10 = a3;
  v11 = a2[3];
  v12 = a2[2];
  v13 = (int)v8;
  *v8 = *a2;
  v8[1] = v9;
  v8[2] = v12;
  v8[3] = v11;
  v14 = a2[4];
  v8[5] = a2[5];
  v8[4] = v14;
  memcpy(v8 + 6, v10, v7);
  return sub_6F0D8(a1, v13);
}
