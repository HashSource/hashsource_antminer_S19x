FILE **__fastcall sub_246F48(int a1, int a2)
{
  int v3; // r0
  FILE **result; // r0
  bool v5; // zf
  const char *v6; // r4
  int *v7; // r0
  char *v8; // r0
  FILE *v9; // [sp+4h] [bp-4h] BYREF

  v3 = sub_29B910(a2);
  *(_DWORD *)(a1 + 8) = v3;
  result = sub_967F0(&v9, v3, "wb");
  v5 = v9 == 0;
  *(_DWORD *)(a1 + 4) = v9;
  if ( v5 )
  {
    v6 = *(const char **)(a1 + 8);
    v7 = _errno_location();
    v8 = sub_6FF98(*v7);
    sub_946E0("Unable to open file '%s' for saving trace data (%s)", v6, v8);
  }
  return result;
}
