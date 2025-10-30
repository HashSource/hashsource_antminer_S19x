int __fastcall sub_1797A8(int a1, char *a2, int a3)
{
  int v6; // r0
  int v7; // r0
  int result; // r0
  int v9; // r0
  char *v10; // [sp+4h] [bp-24h] BYREF
  int v11; // [sp+8h] [bp-20h]

  if ( !a3 )
    return 0;
  if ( !a1 )
    return j_j_secure_getenv(a3);
  if ( !a2 )
    goto LABEL_12;
  v6 = *(_DWORD *)(a1 + 8);
  v10 = a2;
  v11 = a3;
  v7 = sub_DFA98(v6, (int)&v10);
  if ( v7 )
    return *(_DWORD *)(v7 + 8);
  if ( *a2 != 69 || a2[1] != 78 || a2[2] != 86 || a2[3] || (result = j_j_secure_getenv(a3)) == 0 )
  {
LABEL_12:
    v9 = *(_DWORD *)(a1 + 8);
    v11 = a3;
    v10 = "default";
    v7 = sub_DFA98(v9, (int)&v10);
    if ( !v7 )
      return 0;
    return *(_DWORD *)(v7 + 8);
  }
  return result;
}
