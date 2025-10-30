int __fastcall sub_54F58(const char *a1, const char *a2, int a3, int a4, void *src, int a6, size_t n)
{
  int v7; // r12
  int v10; // r0
  int v11; // r5
  int v12; // r4
  char v13; // r3
  int v15; // r0
  const char *v16; // r0
  int v17; // r0
  const char *v18; // r0
  int v19; // r0
  const char *v20; // r0
  int v21; // [sp+14h] [bp-4h] BYREF

  v7 = *(unsigned __int8 *)a2;
  if ( v7 != 119 )
  {
    if ( v7 != 97 )
      sub_946E0("bfd_openw_or_error: unknown mode %s.", a2);
    sub_946E0("bfd_openw does not work with append.", a2, a3, a4);
  }
  v10 = sub_162E84(&v21, a1, a3);
  v11 = v21;
  if ( !v21 )
  {
    v19 = sub_2A6910(v10);
    v20 = (const char *)sub_2A6920(v19);
    sub_946E0("Failed to open %s: %s.", a1, v20);
  }
  if ( !sub_2AA874(v21, 1) )
  {
    v17 = sub_2A6910(0);
    v18 = (const char *)sub_2A6920(v17);
    sub_946E0("bfd_openw_or_error: %s.", v18);
  }
  v12 = sub_2ADBE0(v11, ".newsec");
  sub_2ADDBC(v11, v12, n);
  v13 = *(_BYTE *)(v12 + 24);
  *(_DWORD *)(v12 + 64) = 0;
  *(_DWORD *)(v12 + 32) = a4;
  *(_DWORD *)(v12 + 28) = a4;
  *(_BYTE *)(v12 + 24) = v13 | 1;
  sub_2ADCD8(v11, v12, 259);
  *(_DWORD *)(v12 + 120) = 0;
  if ( !sub_2ADDE8(v11, v12, src, 0, 0, 0, n) )
  {
    v15 = sub_2A6910(0);
    v16 = (const char *)sub_2A6920(v15);
    sub_946B0("writing dump file '%s' (%s)", a1, v16);
  }
  return ((int (__fastcall *)(int))loc_1625A8)(v11);
}
