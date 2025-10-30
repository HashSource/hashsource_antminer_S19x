int __fastcall sub_1B00F0(int result, int a2, int a3)
{
  int v3; // r3
  int v4; // r2
  int v5; // r4
  int v6; // r3
  char *v7; // r5
  size_t v8; // r0

  v3 = *(_DWORD *)(*(_DWORD *)a3 + 4);
  if ( *(_DWORD *)(v3 - 24) == 4 && *(_DWORD *)(v3 - 4) == -1 )
  {
    sub_273CF8(result, "Flash block size is not set");
    v5 = v4;
    v7 = *(char **)(sub_273FA0(v6, "name") + 4);
    v8 = strlen(v7);
    return sub_33BC54(v5 + 4, 0, *(_DWORD *)(v5 + 8), v7, v8);
  }
  return result;
}
