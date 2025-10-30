int __fastcall sub_2CCA44(int a1, _DWORD *a2, int *a3, int a4, char *a5)
{
  size_t v9; // r0
  char *v10; // r0
  const char *v11; // r5
  int v12; // r0
  _DWORD *v13; // r2
  int v14; // r3
  int v15; // r0
  int v16; // r1
  char s[100]; // [sp+4h] [bp-64h] BYREF

  sprintf(s, "%s/%ld", a5, a4);
  v9 = strlen(s);
  v10 = (char *)sub_2ACBF4(a1, v9 + 1);
  v11 = v10;
  if ( !v10 )
    return 0;
  strcpy(v10, s);
  v12 = sub_2ADB48(a1, v11, (const char *)0x100);
  v13 = (_DWORD *)v12;
  if ( !v12 )
    return 0;
  v14 = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 2344);
  *(_DWORD *)(v12 + 36) = *a2;
  v15 = *a3;
  v16 = *(_DWORD *)(v14 + 8);
  v13[21] = 0;
  v13[20] = v15;
  v13[16] = 2;
  if ( a4 == v16 )
    return sub_2CC9E0(a1, a5, (int)v13);
  else
    return 1;
}
