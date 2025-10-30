int __fastcall sub_2E3078(int a1, int a2, int a3)
{
  int v3; // r4
  int v5; // r0
  int v8; // r9
  const char **v9; // r5
  int v10; // r8
  const char *v11; // r10
  int v12; // r3
  const char *v13; // r2
  int v14; // r0
  void (__fastcall *v15)(int, _DWORD *, const char *); // r3
  _DWORD v16[2]; // [sp+0h] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v3 + 40) != 1 )
    return 0;
  v5 = *(_DWORD *)(v3 + 56);
  v8 = *(_DWORD *)(*(_DWORD *)(v5 + 4) + 444);
  v9 = sub_2AD864(v5, ".dynamic");
  if ( !v9 )
    sub_2A6BBC("elflink.c", 3370);
  v10 = (int)&v9[9][*(unsigned __int8 *)(*(_DWORD *)(v8 + 392) + 6)];
  v11 = (const char *)sub_2AB3FC((void *)v9[27], v10);
  if ( !v11 )
    return 0;
  v12 = *(_DWORD *)(v8 + 392);
  v13 = v9[9];
  v14 = *(_DWORD *)(v3 + 56);
  v16[0] = a2;
  v15 = *(void (__fastcall **)(int, _DWORD *, const char *))(v12 + 52);
  v16[1] = a3;
  v15(v14, v16, &v13[(_DWORD)v11]);
  v9[9] = (const char *)v10;
  v9[27] = v11;
  return 1;
}
