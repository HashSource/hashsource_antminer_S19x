int __fastcall sub_6F0D8(int a1, int a2)
{
  int v4; // r5
  int v5; // r8
  int v6; // r1
  int v7; // r9
  int v8; // r1
  unsigned int v10; // r8
  unsigned int v11; // r3
  int v12; // r2
  int v13; // [sp+0h] [bp-Ch]

  sub_6F028(*(sem_t **)(a1 + 4), 0);
  v4 = *(_DWORD *)(a1 + 20);
  if ( (unsigned int)(v4 - *(_DWORD *)(a1 + 24)) >= *(_DWORD *)(a1 + 16) )
  {
    v10 = *(_DWORD *)(a1 + 16) + 16;
    *(_DWORD *)(a1 + 12) = sub_64B04(*(void **)(a1 + 12), 4 * v10, 0, 0);
    v11 = *(_DWORD *)(a1 + 16);
    if ( v10 > v11 )
    {
      v12 = 4 * v11;
      do
      {
        ++v11;
        *(_DWORD *)(*(_DWORD *)(a1 + 12) + v12) = 0;
        v12 += 4;
      }
      while ( v10 != v11 );
    }
    v4 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 16) = v10;
    *(_DWORD *)(a1 + 24) = 0;
    *(_DWORD *)(a1 + 20) = v4;
  }
  v5 = *(_DWORD *)(a1 + 12);
  sub_8CE3C(v4, *(_DWORD *)(a1 + 16));
  if ( *(_DWORD *)(v5 + 4 * v6) )
    sub_6FC54("work_thread.c", 219, 2, "((void *)0) == c->workitems[c->head_workitem % c->workitems_alloc]", v13);
  v7 = *(_DWORD *)(a1 + 12);
  sub_8CE3C(v4, *(_DWORD *)(a1 + 16));
  *(_DWORD *)(v7 + 4 * v8) = a2;
  *(_DWORD *)(a1 + 20) = v4 + 1;
  sem_post(*(sem_t **)(a1 + 4));
  sem_post(*(sem_t **)(a1 + 28));
  return 0;
}
