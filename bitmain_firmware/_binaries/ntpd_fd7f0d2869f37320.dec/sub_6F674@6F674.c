int __fastcall sub_6F674(int a1, int a2)
{
  int v4; // r5
  unsigned int v5; // r6
  int v6; // r9
  int v7; // r1
  int v8; // r9
  int v9; // r1
  unsigned int v11; // r9
  unsigned int v12; // r3
  int v13; // r2
  int v14; // [sp+0h] [bp-Ch]

  sub_6F028(*(sem_t **)(a1 + 4), 0);
  v4 = *(_DWORD *)(a1 + 40);
  v5 = v4 - *(_DWORD *)(a1 + 44);
  if ( v5 >= *(_DWORD *)(a1 + 36) )
  {
    v11 = *(_DWORD *)(a1 + 36) + 4;
    *(_DWORD *)(a1 + 32) = sub_64B04(*(void **)(a1 + 32), 4 * v11, 0, 0);
    v12 = *(_DWORD *)(a1 + 36);
    if ( v11 > v12 )
    {
      v13 = 4 * v12;
      do
      {
        ++v12;
        *(_DWORD *)(*(_DWORD *)(a1 + 32) + v13) = 0;
        v13 += 4;
      }
      while ( v11 != v12 );
    }
    v4 = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 36) = v11;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 40) = v4;
  }
  v6 = *(_DWORD *)(a1 + 32);
  sub_8CE3C(v4, *(_DWORD *)(a1 + 36));
  if ( *(_DWORD *)(v6 + 4 * v7) )
    sub_6FC54("work_thread.c", 255, 2, "((void *)0) == c->responses[c->head_response % c->responses_alloc]", v14);
  v8 = *(_DWORD *)(a1 + 32);
  sub_8CE3C(v4, *(_DWORD *)(a1 + 36));
  *(_DWORD *)(v8 + 4 * v9) = a2;
  *(_DWORD *)(a1 + 40) = v4 + 1;
  sem_post(*(sem_t **)(a1 + 4));
  if ( !v5 && write(*(_DWORD *)(a1 + 56), byte_99528, 1u) != 1 )
    sub_65D40(byte_4, "async resolver: %s", "failed to notify main thread!");
  return 0;
}
