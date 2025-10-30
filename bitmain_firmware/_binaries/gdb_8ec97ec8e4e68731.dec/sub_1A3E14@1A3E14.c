int __fastcall sub_1A3E14(_DWORD *a1, int a2)
{
  _DWORD *v4; // r5
  void *v5; // r7
  int v6; // r6
  int v7; // r2
  int v9; // r0
  int v10; // r2

  v4 = (_DWORD *)*a1;
  v5 = (void *)sub_1A37A0(*(int **)(a2 + 8));
  v6 = sub_1A31BC((int)v5, *(_DWORD *)(a2 + 12), a1[1]);
  if ( v5 )
    free(v5);
  if ( !v4[2] )
    return 0;
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 )
  {
    if ( sub_1A2D60(v4[2], v4[3], v7, *(_DWORD *)(a2 + 12)) < 0 )
    {
      v9 = v4[4];
      if ( !v9 )
        goto LABEL_8;
      v10 = *(_DWORD *)(a2 + 8);
      if ( v10 )
      {
        if ( sub_1A2D60(v9, v4[5], v10, *(_DWORD *)(a2 + 12)) >= 0 )
          goto LABEL_8;
      }
    }
    return 0;
  }
  if ( v4[4] )
    return 0;
LABEL_8:
  (*(void (__fastcall **)(_DWORD, _DWORD, int))(a2 + 4))(*(_DWORD *)a2, v4[1], v6);
  return 0;
}
