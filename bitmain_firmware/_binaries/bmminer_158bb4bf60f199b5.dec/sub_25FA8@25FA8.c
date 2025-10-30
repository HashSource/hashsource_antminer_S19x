int sub_25FA8()
{
  _DWORD *v0; // r4
  int v1; // r3
  _DWORD *v2; // r3
  char v4[2052]; // [sp+0h] [bp-804h] BYREF

  v0 = (_DWORD *)dword_241D5C;
  if ( !dword_241D5C )
    _assert_fail("cgpu", "bmminer.c", 0x193u, "bitmain_primary_init");
  v1 = dword_241D64;
  *(_DWORD *)(dword_241D5C + 4) = &unk_138580;
  v0[8] = 0;
  v0[5] = v1;
  v0[37] = 1;
  if ( !v1 )
  {
    strcpy(v4, "Failed to calloc cgpu_info data");
    sub_47AB4(3, v4, 1);
    sub_62EC0(1);
  }
  v2 = (_DWORD *)(v1 + 4096);
  v2[482] = 0;
  v2[483] = 1;
  v2[484] = 2;
  return 0;
}
