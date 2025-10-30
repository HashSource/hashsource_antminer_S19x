int __fastcall sub_E05F8(int a1, int a2, int a3, int a4)
{
  const char *v6; // r8
  int *v7; // r7
  int *v8; // r6
  int *v9; // r4
  int result; // r0
  int v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3

  v6 = *(const char **)(sub_273FA0(a4, "vendor") + 4);
  v7 = *(int **)(sub_273FA0(a4, "family") + 4);
  v8 = *(int **)(sub_273FA0(a4, "model") + 4);
  v9 = *(int **)(sub_273FA0(a4, "stepping") + 4);
  result = strcmp(v6, "GenuineIntel");
  v12 = *v7;
  if ( !result )
    v11 = 1;
  v13 = *v8;
  if ( !result )
    *(_DWORD *)(a3 + 4) = v11;
  v14 = *v9;
  *(_WORD *)(a3 + 8) = v12;
  *(_BYTE *)(a3 + 10) = v13;
  *(_BYTE *)(a3 + 11) = v14;
  return result;
}
