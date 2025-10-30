char *sub_1E29EC(int a1, int a2, ...)
{
  char *v3; // r4
  int v4; // r0
  size_t v5; // r6
  int v6; // r3
  const char *v7; // r2
  int v9; // r3
  const char *v10; // r2
  va_list varg_r2; // [sp+18h] [bp+18h] BYREF

  va_start(varg_r2, a2);
  v3 = (char *)a1;
  v4 = sub_16F654(a1);
  ((void (__fastcall *)(int))loc_1E2770)(v4);
  v5 = a2 - (_DWORD)v3;
  if ( ((int (__fastcall *)(int))loc_1E2198)(72) == 1 )
  {
    v9 = ps_getpid_0((int)varg_r2);
    if ( v9 >= 0 )
      LOWORD(v10) = 22340;
    else
      LOWORD(v10) = 22332;
    if ( v9 < 0 )
      v9 = -v9;
    HIWORD(v10) = 61;
    v3 += sub_93170(v3, a2 - (_DWORD)v3, v10, v9);
    v5 = a2 - (_DWORD)v3;
  }
  v6 = sub_98F68((int)varg_r2);
  if ( v6 >= 0 )
    LOWORD(v7) = 27940;
  else
    LOWORD(v7) = 22348;
  if ( v6 < 0 )
    v6 = -v6;
  HIWORD(v7) = 61;
  return &v3[sub_93170(v3, v5, v7, v6)];
}
