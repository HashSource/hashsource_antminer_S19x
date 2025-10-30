int sub_374D4()
{
  _DWORD *v0; // r4
  int v1; // r3
  _DWORD *v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = (_DWORD *)dword_5BAF94;
  if ( !dword_5BAF94 )
    _assert_fail("cgpu", "bmminer.c", 0x801u, "bitmain_primary_init");
  v1 = dword_5BD0A0;
  *(_DWORD *)(dword_5BAF94 + 32) = 0;
  v0[1] = &unk_B4078;
  v0[5] = v1;
  v0[37] = 1;
  if ( !v1 )
  {
    strcpy(v4, "Failed to calloc cgpu_info data");
    sub_3AF5C(3, v4, 1, *(_DWORD *)"ata");
    v1 = v0[5];
  }
  v2 = (_DWORD *)(v1 + 4096);
  v2[867] = 0;
  v2[868] = 1;
  v2[869] = 2;
  v2[870] = 3;
  return 1;
}
