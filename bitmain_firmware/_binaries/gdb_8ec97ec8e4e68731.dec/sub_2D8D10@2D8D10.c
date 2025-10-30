int __fastcall sub_2D8D10(int a1, char *a2, int a3, int a4, __int64 a5)
{
  int v8; // r2
  int v9; // r3
  size_t v10; // r5
  char *v11; // r0
  const char *v12; // r8
  int v13; // r2
  char s[100]; // [sp+4h] [bp-64h] BYREF

  v8 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344);
  v9 = *(_DWORD *)(v8 + 8);
  if ( !v9 )
    v9 = *(_DWORD *)(v8 + 4);
  sprintf(s, "%s/%d", a2, v9);
  v10 = strlen(s) + 1;
  v11 = (char *)sub_2ACBF4(a1, v10);
  v12 = v11;
  if ( !v11 )
    return 0;
  memcpy(v11, s, v10);
  v13 = sub_2ADB48(a1, v12, (const char *)0x100);
  if ( !v13 )
    return 0;
  *(_DWORD *)(v13 + 36) = a3;
  *(_DWORD *)(v13 + 64) = 2;
  *(_QWORD *)(v13 + 80) = a5;
  return sub_2CC9E0(a1, a2, v13);
}
