int __fastcall sub_6E870(int a1)
{
  int v2; // r7
  int i; // r0
  int v4; // r1
  int v5; // r5
  int v6; // r6
  int v7; // r1
  int v8; // r6

LABEL_1:
  sub_6E078(*(sem_t **)(a1 + 28), 0);
  sub_6E078(*(sem_t **)(a1 + 4), 0);
  v2 = *(_DWORD *)(a1 + 20);
  for ( i = *(_DWORD *)(a1 + 24); ; i = v5 )
  {
    if ( v2 == i )
    {
      sem_post(*(sem_t **)(a1 + 4));
      goto LABEL_1;
    }
    v4 = *(_DWORD *)(a1 + 16);
    v5 = i + 1;
    v6 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 24) = i + 1;
    sub_8B8EC(i, v4);
    v8 = *(_DWORD *)(v6 + 4 * v7);
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v7) = 0;
    if ( v8 )
      break;
  }
  sem_post(*(sem_t **)(a1 + 4));
  if ( v8 == -1 )
  {
    sub_6E6E8(a1, -1);
    return 0;
  }
  return v8;
}
