void __fastcall sub_E1378(int a1)
{
  _DWORD *v1; // r5
  int v2; // r7
  int v3; // r6
  int v4; // r4
  void *v5; // r0
  int v6; // r2
  int v7; // r4
  const char *v8; // r6
  const char *v9; // r0

  v1 = (_DWORD *)a1;
  if ( dword_487D4C )
  {
    v7 = *(_DWORD *)sub_242FC8(a1);
    v8 = (const char *)sub_240128(v1);
    v9 = (const char *)sub_23095C(v1[2], v1[3], v1[4]);
    a1 = sub_2594B0(v7, "[btrace] clear thread %s (%s)\n", v8, v9);
  }
  sub_15D778(a1);
  v2 = v1[69];
  v3 = v1[70];
  if ( v2 != v3 )
  {
    v4 = v1[69];
    do
    {
      v5 = *(void **)(v4 + 20);
      v4 += 52;
      if ( v5 )
        sub_339E64(v5);
    }
    while ( v3 != v4 );
  }
  v6 = v1[64];
  v1[70] = v2;
  v1[73] = 0;
  if ( v6 == 1 )
  {
    v1[79] = 0;
    v1[80] = 0;
  }
  sub_91DC8(v1 + 64);
  sub_E05A0(v1 + 63);
}
