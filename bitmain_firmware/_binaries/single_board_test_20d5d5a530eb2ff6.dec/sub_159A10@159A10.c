int __fastcall sub_159A10(int a1, int a2)
{
  _BYTE *v4; // r0
  _BYTE *v5; // r4
  int v6; // r5
  int v7; // r0
  int *v8; // r0
  _DWORD *v9; // r0
  const void *v10; // r0
  int v11; // r3
  void *v12; // r0

  v4 = sub_E0740((void *)0x20);
  v5 = v4;
  if ( v4 )
  {
    v4[12] = -1;
    v4[13] = 1;
    *(_DWORD *)(a1 + 20) = v4;
    v6 = *(_DWORD *)(a2 + 20);
    if ( !*(_DWORD *)v6 || (v7 = sub_C6784(*(int ***)v6), (*(_DWORD *)v5 = v7) != 0) )
    {
      v8 = *(int **)(v6 + 8);
      *((_DWORD *)v5 + 1) = *(_DWORD *)(v6 + 4);
      if ( !v8 || (v9 = sub_C562C(v8), (*((_DWORD *)v5 + 2) = v9) != 0) )
      {
        v5[13] = *(_BYTE *)(v6 + 13);
        v10 = *(const void **)(v6 + 20);
        v11 = *(_DWORD *)(v6 + 28);
        *((_DWORD *)v5 + 4) = *(_DWORD *)(v6 + 16);
        *((_DWORD *)v5 + 7) = v11;
        if ( !v10 )
        {
          *((_DWORD *)v5 + 5) = 0;
          goto LABEL_8;
        }
        v12 = sub_E9E68(v10, *(void **)(v6 + 24));
        *((_DWORD *)v5 + 5) = v12;
        if ( v12 )
        {
LABEL_8:
          *((_DWORD *)v5 + 6) = *(_DWORD *)(v6 + 24);
          return 1;
        }
      }
    }
    return 0;
  }
  else
  {
    sub_D0048(16, 282, 65, (int)"crypto/ec/ec_pmeth.c", 46);
    return 0;
  }
}
