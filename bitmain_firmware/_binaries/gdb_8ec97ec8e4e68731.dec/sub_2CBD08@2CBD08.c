int __fastcall sub_2CBD08(int a1, int a2)
{
  size_t v3; // r4
  char *v5; // r0
  const char *v6; // r6
  _DWORD *v7; // r3
  int v8; // r12
  int v9; // r1

  v3 = *(_DWORD *)a2;
  v5 = (char *)sub_2ACBF4(a1, *(_DWORD *)a2);
  v6 = v5;
  if ( !v5 )
    return 0;
  memcpy(v5, *(const void **)(a2 + 12), v3);
  v6[v3 - 1] = 0;
  v7 = (_DWORD *)sub_2ADB48(a1, v6, (const char *)0x100);
  if ( !v7 )
    return 0;
  v8 = *(_DWORD *)(a2 + 4);
  v9 = *(_DWORD *)(a2 + 20);
  v7[21] = 0;
  v7[9] = v8;
  v7[20] = v9;
  v7[16] = 1;
  return 1;
}
