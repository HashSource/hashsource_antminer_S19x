int __fastcall sub_6E128(int a1, int a2)
{
  int v4; // r5
  int v5; // r8
  int v6; // r1
  int v7; // r9
  sem_t *v8; // r0
  int v9; // r1
  unsigned int v11; // r8
  unsigned int v12; // r3
  int v13; // r2
  int v14; // [sp+0h] [bp-Ch]

  sub_6E078(*(sem_t **)(a1 + 4), 0);
  v4 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)(v4 - *(_DWORD *)(a1 + 24)) >= *(_DWORD *)(a1 + 16) )
  {
    v11 = *(_DWORD *)(a1 + 16) + 16;
    *(_DWORD *)(a1 + 12) = sub_63BA4(*(void **)(a1 + 12), 4 * v11, 0, 0);
    v12 = *(_DWORD *)(a1 + 16);
    if ( v11 > v12 )
    {
      v13 = 4 * v12;
      do
      {
        ++v12;
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + v13) = 0;
        v13 += 4;
      }
      while ( v11 != v12 );
    }
    v4 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v11;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 20) = v4;
  }
  v5 = *(_DWORD *)(a1 + 12);
  sub_8B8EC(v4, *(_DWORD *)(a1 + 16));
  if ( *(_DWORD *)(v5 + 4 * v6) )
    sub_6ECC0("work_thread.c", 219, 2, "((void *)0) == c->workitems[c->head_workitem % c->workitems_alloc]", v14);
  v7 = *(_DWORD *)(a1 + 12);
  sub_8B8EC(v4, *(_DWORD *)(a1 + 16));
  v8 = *(sem_t **)(a1 + 4);
  *(_DWORD *)(v7 + 4 * v9) = a2;
  *(_DWORD *)(a1 + 20) = v4 + 1;
  sem_post(v8);
  sem_post(*(sem_t **)(a1 + 28));
  return 0;
}
