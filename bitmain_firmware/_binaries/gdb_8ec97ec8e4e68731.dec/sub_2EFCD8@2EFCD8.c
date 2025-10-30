int __fastcall sub_2EFCD8(int a1, int a2)
{
  int v2; // r2
  int v4; // r3
  int v5; // r6
  int v6; // r4
  int i; // r5
  int v8; // r7
  char *v9; // r9
  int v11; // r8
  const char *v12; // r11
  int v13; // r0
  int v14; // r6
  int v15; // [sp+8h] [bp-Ch]
  int v16; // [sp+Ch] [bp-8h]

  v2 = *(_DWORD *)(a1 + 160);
  v4 = *(_DWORD *)(*(_DWORD *)(a2 + 48) + 160);
  v5 = 0;
  v6 = v2;
  for ( i = v4; ; i += 852 )
  {
    v8 = *(_DWORD *)(v6 + 984);
    if ( !v8 )
      break;
    v9 = *(char **)(v6 + 988);
    if ( *v9 != 103 || v9[1] != 110 || v9[2] != 117 || v9[3] )
    {
      sub_2A6A5C(
        "error: %B: Object has vendor-specific contents that must be processed by the '%s' toolchain",
        a1,
        *(_DWORD *)(v6 + 988));
      return 0;
    }
    v11 = *(_DWORD *)(i + 984);
    if ( v8 != v11 )
    {
      v12 = *(const char **)(v4 + 852 * v5 + 988);
      goto LABEL_14;
    }
    v12 = *(const char **)(i + 988);
    v15 = v2;
    v16 = v4;
    v13 = strcmp(*(const char **)(v6 + 988), v12);
    v2 = v15;
    v4 = v16;
    if ( v13 )
      goto LABEL_14;
LABEL_7:
    v6 += 852;
    if ( v5 == 1 )
      return 1;
    v5 = 1;
  }
  v11 = *(_DWORD *)(i + 984);
  if ( !v11 )
    goto LABEL_7;
  v14 = 852 * v5;
  v9 = *(char **)(v2 + v14 + 988);
  v12 = *(const char **)(v4 + v14 + 988);
  if ( !v9 )
    v9 = "";
LABEL_14:
  if ( !v12 )
    v12 = "";
  sub_2A6A5C("error: %B: Object tag '%d, %s' is incompatible with tag '%d, %s'", a1, v8, v9, v11, v12);
  return 0;
}
