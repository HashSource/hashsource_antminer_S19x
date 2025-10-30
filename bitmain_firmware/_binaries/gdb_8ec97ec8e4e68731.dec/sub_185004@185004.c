void __fastcall sub_185004(int a1)
{
  int v1; // r4
  int v2; // r0
  int v3; // r6
  const char *v4; // r0
  int v5; // r0
  int v6; // r6
  const char *v7; // r7
  const char *v8; // r8
  _BOOL4 v9; // r0
  int v10; // r6
  const char *v11; // r0
  void *ptr; // [sp+8h] [bp-18h] BYREF
  char v13; // [sp+10h] [bp-10h] BYREF

  v1 = a1;
  if ( dword_487930 )
  {
    v3 = *(_DWORD *)sub_242FC8(a1);
    v4 = (const char *)sub_23095C(*(_DWORD *)(v1 + 8), *(_DWORD *)(v1 + 12), *(_DWORD *)(v1 + 16));
    a1 = sub_2594B0(v3, "infrun: clear_proceed_status_thread (%s)\n", v4);
  }
  if ( *(_DWORD *)(v1 + 168) )
  {
    if ( *(_DWORD *)(v1 + 148) == 4 )
    {
      if ( dword_487930 )
      {
        v10 = *(_DWORD *)sub_242FC8(a1);
        v11 = (const char *)sub_23095C(*(_DWORD *)(v1 + 8), *(_DWORD *)(v1 + 12), *(_DWORD *)(v1 + 16));
        sub_2594B0(v10, "infrun: clear_proceed_status: pending event of %s was a finished step. Discarding.\n", v11);
      }
      *(_DWORD *)(v1 + 168) = 0;
      *(_DWORD *)(v1 + 148) = 0;
    }
    else if ( dword_487930 )
    {
      v5 = sub_277578(&ptr, v1 + 152);
      v6 = *(_DWORD *)sub_242FC8(v5);
      v7 = (const char *)sub_23095C(*(_DWORD *)(v1 + 8), *(_DWORD *)(v1 + 12), *(_DWORD *)(v1 + 16));
      v8 = (const char *)ptr;
      v9 = sub_184CAC((_DWORD *)v1);
      sub_2594B0(
        v6,
        "infrun: clear_proceed_status_thread: thread %s has pending wait status %s (currently_stepping=%d).\n",
        v7,
        v8,
        v9);
      if ( ptr != &v13 )
        sub_339E64(ptr);
    }
  }
  v2 = *(_DWORD *)(v1 + 204);
  if ( !*(_BYTE *)(dword_487948 + *(_DWORD *)(v1 + 144)) )
    *(_DWORD *)(v1 + 144) = *(unsigned __int8 *)(dword_487948 + *(_DWORD *)(v1 + 144));
  sub_24220C(v2);
  *(_DWORD *)(v1 + 204) = 0;
  *(_DWORD *)(v1 + 116) = 0;
  *(_DWORD *)(v1 + 60) = 0;
  *(_DWORD *)(v1 + 64) = 0;
  *(_DWORD *)(v1 + 72) = 0;
  *(_DWORD *)(v1 + 76) = 0;
  *(_DWORD *)(v1 + 80) = 0;
  *(_DWORD *)(v1 + 84) = 0;
  *(_DWORD *)(v1 + 88) = 0;
  *(_DWORD *)(v1 + 92) = 0;
  *(_DWORD *)(v1 + 96) = 0;
  *(_DWORD *)(v1 + 100) = 0;
  *(_DWORD *)(v1 + 104) = 0;
  *(_DWORD *)(v1 + 108) = 0;
  *(_DWORD *)(v1 + 112) = 0;
  *(_DWORD *)(v1 + 68) = 0;
  *(_DWORD *)(v1 + 224) = 0;
  *(_DWORD *)(v1 + 132) = 0;
  *(_DWORD *)(v1 + 120) = 0;
  *(_DWORD *)(v1 + 140) = 0;
  *(_DWORD *)(v1 + 128) = 2;
  sub_CE054((_DWORD **)(v1 + 136));
}
