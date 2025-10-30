int __fastcall sub_6E6E8(int a1, int a2)
{
  int v4; // r5
  unsigned int v5; // r6
  int v6; // r9
  int v7; // r1
  int v8; // r9
  sem_t *v9; // r0
  int v10; // r1
  unsigned int v12; // r9
  unsigned int v13; // r3
  int v14; // r2
  int v15; // [sp+0h] [bp-Ch]

  sub_6E078(*(sem_t **)(a1 + 4), 0);
  v4 = *(_DWORD *)(a1 + 40);
  v5 = v4 - *(_DWORD *)(a1 + 44);
  if ( v5 >= *(_DWORD *)(a1 + 36) )
  {
    v12 = *(_DWORD *)(a1 + 36) + 4;
    *(_DWORD *)(a1 + 32) = sub_63BA4(*(void **)(a1 + 32), 4 * v12, 0, 0);
    v13 = *(_DWORD *)(a1 + 36);
    if ( v12 > v13 )
    {
      v14 = 4 * v13;
      do
      {
        ++v13;
        *(_DWORD *)(*(_DWORD *)(a1 + 32) + v14) = 0;
        v14 += 4;
      }
      while ( v12 != v13 );
    }
    v4 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = v12;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 40) = v4;
  }
  v6 = *(_DWORD *)(a1 + 32);
  sub_8B8EC(v4, *(_DWORD *)(a1 + 36));
  if ( *(_DWORD *)(v6 + 4 * v7) )
    sub_6ECC0("work_thread.c", 255, 2, "((void *)0) == c->responses[c->head_response % c->responses_alloc]", v15);
  v8 = *(_DWORD *)(a1 + 32);
  sub_8B8EC(v4, *(_DWORD *)(a1 + 36));
  v9 = *(sem_t **)(a1 + 4);
  *(_DWORD *)(v8 + 4 * v10) = a2;
  *(_DWORD *)(a1 + 40) = v4 + 1;
  sem_post(v9);
  if ( !v5 && write(*(_DWORD *)(a1 + 56), byte_97F7C, 1u) != 1 )
    sub_64E00(&byte_4, "async resolver: %s", "failed to notify main thread!");
  return 0;
}
