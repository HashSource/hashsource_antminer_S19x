int __fastcall sub_6E544(int a1, size_t *a2, const void *a3)
{
  size_t v5; // r1
  size_t v7; // r9
  _DWORD *v8; // r0
  const void *v9; // r1
  size_t v10; // r3
  int v11; // r5
  size_t v12; // r7
  size_t v13; // lr
  size_t v14; // r12

  if ( !a2 )
    sub_6ECC0("work_thread.c", 302, 0, "hdr != ((void *)0)");
  if ( !a3 )
    sub_6ECC0("work_thread.c", 303, 0, "data != ((void *)0)");
  v5 = *a2;
  if ( *a2 <= 0x18 )
    return 1;
  v7 = v5 - 24;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    if ( !dword_10722C )
      dword_10722C = (int)sub_6E26C(&stru_107230, 1u);
    *(_DWORD *)(a1 + 4) = sub_6E26C((sem_t *)(a1 + 76), 1u);
    *(_DWORD *)(a1 + 28) = sub_6E26C((sem_t *)(a1 + 92), 0);
    *(_DWORD *)(a1 + 48) = sub_6E26C((sem_t *)(a1 + 108), 0);
    sub_6DD94((pthread_t *)a1);
    v5 = *a2;
  }
  v8 = sub_63BA4(0, v5, 0, 0);
  v9 = a3;
  v10 = a2[1];
  v11 = (int)v8;
  v12 = a2[2];
  v13 = a2[3];
  *v8 = *a2;
  v8[1] = v10;
  v8[2] = v12;
  v8[3] = v13;
  v14 = a2[4];
  v8[5] = a2[5];
  v8[4] = v14;
  memcpy(v8 + 6, v9, v7);
  return sub_6E128(a1, v11);
}
