int __fastcall sub_2BC31C(int a1, int a2)
{
  _DWORD *v2; // r4
  int v6; // r2
  bool v7; // zf
  int v8; // r3
  int v9; // r7
  _BOOL4 v10; // r0

  v2 = *(_DWORD **)(a2 + 28);
  if ( v2[11] != 4 || !v2[54] && !v2[106] && !sub_2E02C4(a1, a2) || !sub_2E0660(a1, a2) )
    return 0;
  if ( !v2[105] )
  {
    v9 = v2[311];
    v2[311] = a1;
    v10 = sub_2B640C(v2 + 311);
    v2[311] = v9;
    if ( v10 )
    {
      v2[103] = 16;
      v2[104] = 16;
    }
    goto LABEL_13;
  }
  if ( !sub_2CB608(a1, a2, v2 + 113) )
    return 0;
  v7 = (*(_BYTE *)a2 & 1) == 0;
  v2[104] = 24;
  if ( !v7 )
    v6 = 0;
  v8 = *(_DWORD *)(a1 + 160);
  if ( v7 )
    v6 = 16;
  v2[103] = v6;
  if ( v8 )
    *(_BYTE *)(v8 + 4) = 1;
LABEL_13:
  if ( !v2[57] || !v2[58] || !v2[59] || (*(_BYTE *)a2 & 1) == 0 && !v2[60] )
    sub_2A6BF0((int)"elf32-arm.c", 3685, (int)"elf32_arm_create_dynamic_sections");
  return 1;
}
