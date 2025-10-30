int sub_37B20()
{
  _DWORD *v0; // r4
  int v1; // r3
  _DWORD *v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = (_DWORD *)dword_5BFE4C;
  if ( !dword_5BFE4C )
    _assert_fail("cgpu", "bmminer.c", 0x801u, "bitmain_primary_init");
  v1 = dword_5C1F58;
  *(_DWORD *)(dword_5BFE4C + 4) = &unk_B6DF0;
  v0[8] = 0;
  v0[5] = v1;
  v0[37] = 1;
  if ( !v1 )
  {
    strcpy(v4, "Failed to calloc cgpu_info data");
    sub_3B6AC(3, v4, 1, *(_DWORD *)"ata");
    v1 = v0[5];
  }
  v2 = (_DWORD *)(v1 + 4096);
  v2[883] = 0;
  v2[884] = 1;
  v2[885] = 2;
  v2[886] = 3;
  return 1;
}
