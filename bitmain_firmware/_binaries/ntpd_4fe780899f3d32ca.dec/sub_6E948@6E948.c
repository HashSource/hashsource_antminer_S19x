int __fastcall sub_6E948(int a1)
{
  int v2; // r7
  int v3; // r5
  int v4; // r0
  int v5; // r6
  int v6; // r1
  int v7; // r11
  _BOOL4 v8; // r6
  sem_t *v10; // r0
  sem_t *v11; // r0
  sem_t *v12; // r0
  _BYTE buf[32]; // [sp+4h] [bp-28h] BYREF

  while ( read(*(_DWORD *)(a1 + 52), buf, 0x20u) == -1 && *_errno_location() == 4 )
    ;
  sub_6E078(*(sem_t **)(a1 + 4), 0);
  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 44);
  if ( v2 == v3 )
  {
    v7 = 0;
    sem_post(*(sem_t **)(a1 + 4));
  }
  else
  {
    do
    {
      v4 = v3;
      v5 = *(_DWORD *)(a1 + 32);
      ++v3;
      sub_8B8EC(v4, *(_DWORD *)(a1 + 36));
      v7 = *(_DWORD *)(v5 + 4 * v6);
      v8 = v2 != v3;
      *(_DWORD *)(*(_DWORD *)(a1 + 32) + 4 * v6) = 0;
      if ( v7 )
        v8 = 0;
    }
    while ( v8 );
    *(_DWORD *)(a1 + 44) = v3;
    sem_post(*(sem_t **)(a1 + 4));
    if ( v7 == -1 )
    {
      v10 = *(sem_t **)(a1 + 4);
      *(_DWORD *)(a1 + 8) = 0;
      if ( v10 )
        sem_destroy(v10);
      v11 = *(sem_t **)(a1 + 28);
      *(_DWORD *)(a1 + 4) = 0;
      if ( v11 )
        sem_destroy(v11);
      v12 = *(sem_t **)(a1 + 48);
      *(_DWORD *)(a1 + 28) = 0;
      if ( v12 )
        sem_destroy(v12);
      *(_DWORD *)(a1 + 48) = 0;
      v7 = 0;
      addremove_io_fd(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 60), 1);
      close(*(_DWORD *)(a1 + 56));
      close(*(_DWORD *)(a1 + 52));
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 40) = 0;
      *(_DWORD *)(a1 + 44) = 0;
      *(_DWORD *)(a1 + 56) = -1;
      *(_DWORD *)(a1 + 52) = -1;
      *(_DWORD *)a1 = 1;
    }
  }
  return v7;
}
