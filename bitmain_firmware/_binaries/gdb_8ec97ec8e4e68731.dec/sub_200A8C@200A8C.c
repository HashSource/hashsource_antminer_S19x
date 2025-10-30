int __fastcall sub_200A8C(int a1, int a2)
{
  int v4; // r8
  void *v5; // r7
  int v6; // r0
  const char *v7; // r0
  int v8; // r0
  int *v9; // r3
  bool v10; // zf
  void *v11; // r5
  int v12; // r0
  int v13; // r2

  if ( *(_BYTE *)(a1 + 1040) || !*(_DWORD *)(a1 + 1036) )
    return 0;
  v4 = *(_DWORD *)(sub_183688() + 160);
  v5 = sub_92E28();
  v6 = *(_DWORD *)(dword_487D2C + 36);
  *(_DWORD *)(a1 + 1044) = v6;
  if ( v6 )
  {
    while ( 1 )
    {
      v7 = (const char *)sub_1B87A8(v6);
      v8 = j_strcmp(v7, (const char *)(a1 + 520));
      v9 = *(int **)(a1 + 1044);
      if ( !v8 && v9[2] == *(_DWORD *)(a1 + 1056) )
        break;
      v6 = *v9;
      v10 = *v9 == 0;
      *(_DWORD *)(a1 + 1044) = *v9;
      if ( v10 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v11 = (void *)sub_211E70(*(_DWORD *)(a1 + 1048), *(_DWORD *)(a1 + 1052));
    v12 = sub_213894(*(_DWORD *)(a1 + 1036), a1 + 520, a2 | v4, v11, 2, 0);
    v13 = *(_DWORD *)(a1 + 1056);
    *(_DWORD *)(a1 + 1044) = v12;
    *(_DWORD *)(v12 + 8) = v13;
    sub_211F8C(v11);
  }
  *(_BYTE *)(a1 + 1040) = 1;
  sub_92E40((int)v5);
  return 1;
}
