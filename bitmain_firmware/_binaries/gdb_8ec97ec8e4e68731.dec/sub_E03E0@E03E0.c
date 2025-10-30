void __fastcall sub_E03E0(int a1, int *a2)
{
  int v2; // r3
  int v4; // lr
  int v5; // r3
  int v6; // r12
  int v7; // r12
  int v8; // r0
  int v9; // r12
  int v10; // r0

  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 == *(_DWORD *)(a1 + 8) )
  {
    sub_E01F0((_DWORD *)a1, *(char **)(a1 + 4), a2);
  }
  else if ( v2 )
  {
    v4 = *a2;
    v5 = v2 + 16;
    *(_DWORD *)(v5 - 4) = 0;
    *(_DWORD *)(v5 - 12) = 0;
    *(_DWORD *)(v5 - 8) = 0;
    v6 = a2[1];
    *(_DWORD *)(v5 - 16) = v4;
    *(_DWORD *)(v5 - 12) = v6;
    v7 = a2[2];
    a2[1] = 0;
    v8 = *(_DWORD *)(v5 - 8);
    *(_DWORD *)(v5 - 8) = v7;
    v9 = a2[3];
    a2[2] = v8;
    v10 = *(_DWORD *)(v5 - 4);
    *(_DWORD *)(v5 - 4) = v9;
    a2[3] = v10;
    *(_DWORD *)(a1 + 4) = v5;
  }
  else
  {
    *(_DWORD *)(a1 + 4) = 16;
  }
}
