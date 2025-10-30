int __fastcall sub_1616A8(int a1)
{
  void *v2; // r9
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void *v6; // r7
  int v7; // r0
  int v8; // r4
  char v9; // r3
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  const char *v14; // r0
  int v15; // r0
  int v17; // r0
  int v18; // r0
  int v19; // r0
  const char *v20; // r0
  size_t n[5]; // [sp+10h] [bp-14h] BYREF

  sub_2328F4();
  v2 = sub_92E28();
  memset(n, 0, 16);
  v3 = sub_16F654(v2);
  v4 = ((int (__fastcall *)(int))loc_16B28C)(v3);
  if ( v4 )
  {
    v17 = sub_16F654(v4);
    v5 = ((int (__fastcall *)(int, int, size_t *))loc_16B2D8)(v17, a1, n);
  }
  else
  {
    v5 = off_489B14();
  }
  v6 = (void *)v5;
  if ( !v5 || !n[0] )
    sub_946E0("Target does not support core file generation.");
  v7 = sub_2ADB48(a1, "note0", 265);
  v8 = v7;
  if ( !v7 )
  {
    v19 = sub_2A6910(0);
    v20 = (const char *)sub_2A6920(v19);
    sub_946E0("Failed to create 'note' section for corefile: %s", v20);
  }
  v9 = *(_BYTE *)(v7 + 24);
  *(_DWORD *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 28) = 0;
  *(_DWORD *)(v7 + 64) = 0;
  *(_BYTE *)(v7 + 24) = v9 | 1;
  v10 = sub_2ADDBC(a1, v7, n[0]);
  v11 = sub_16F654(v10);
  v12 = ((int (__fastcall *)(int))loc_16B3A0)(v11);
  if ( !v12
    || (v18 = sub_16F654(v12),
        ((int (__fastcall *)(int, int (__fastcall *)(unsigned int, int *, int, int, int, int, int), int))loc_16B3EC)(
          v18,
          sub_16123C,
          a1)) )
  {
    if ( off_489B10() )
      sub_946E0("gcore: failed to get corefile memory sections from target.");
  }
  sub_2ADCFC(a1, sub_161510, 0);
  sub_2ADCFC(a1, sub_1610FC, 0);
  if ( !sub_2ADDE8(a1, v8, v6, 0, 0, 0, n[0]) )
  {
    v13 = sub_2A6910(0);
    v14 = (const char *)sub_2A6920(v13);
    sub_946B0("writing note section (%s)", v14);
  }
  free(v6);
  v15 = sub_92E40((int)v2);
  return sub_232904(v15);
}
