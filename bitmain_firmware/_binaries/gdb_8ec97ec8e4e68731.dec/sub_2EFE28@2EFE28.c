int __fastcall sub_2EFE28(int a1, int a2, int a3)
{
  int v3; // r12
  int v4; // r4
  int v5; // r5
  int v6; // r6
  const char *v8; // r0
  const char *v9; // r1
  bool v10; // zf

  v3 = a2;
  v4 = *(_DWORD *)(a2 + 160) + 596 + 12 * a3;
  v5 = *(_DWORD *)(a1 + 160) + 596 + 12 * a3;
  if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)(v4 + 8) )
  {
    if ( !*(_DWORD *)(v5 + 4) && !*(_DWORD *)(v5 + 8) )
      return 1;
    v3 = a1;
  }
  v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)(*(_DWORD *)(v3 + 4) + 444) + 428))(v3, a3);
  if ( *(_DWORD *)(v5 + 4) != *(_DWORD *)(v4 + 4) )
    goto LABEL_3;
  v8 = *(const char **)(v5 + 8);
  v9 = *(const char **)(v4 + 8);
  if ( (v8 == 0) != (v9 == 0) )
    goto LABEL_3;
  v10 = v8 == 0;
  if ( v8 )
    v10 = v9 == 0;
  if ( !v10 && strcmp(v8, v9) )
  {
LABEL_3:
    *(_DWORD *)(v4 + 4) = 0;
    *(_DWORD *)(v4 + 8) = 0;
  }
  return v6;
}
