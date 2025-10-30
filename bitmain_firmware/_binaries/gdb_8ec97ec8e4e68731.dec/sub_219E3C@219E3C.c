void __fastcall sub_219E3C(int a1, int a2)
{
  _DWORD *v3; // r0
  void *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r3

  v3 = *(_DWORD **)a1;
  if ( v3 )
  {
    if ( v3[3] == a2 )
      return;
    free(v3);
    v5 = *(void **)(a1 + 4);
    if ( !v5 )
    {
LABEL_5:
      if ( !a2 )
      {
        *(_DWORD *)a1 = 0;
        *(_DWORD *)(a1 + 4) = 0;
        return;
      }
      goto LABEL_9;
    }
LABEL_4:
    free(v5);
    goto LABEL_5;
  }
  if ( !a2 )
    return;
  v5 = *(void **)(a1 + 4);
  if ( v5 )
    goto LABEL_4;
LABEL_9:
  *(_DWORD *)a1 = sub_93094(1u, 16 * (a2 + 1));
  v6 = sub_93094(1u, 16 * (a2 + 1));
  v7 = *(_DWORD **)a1;
  *(_DWORD *)(a1 + 4) = v6;
  v7[3] = a2;
  v6[3] = a2;
}
