int __fastcall sub_141058(_DWORD *a1, int a2)
{
  int result; // r0
  int *v5; // r2
  int v6; // r5
  int v7; // r4
  int v8; // r1
  int v9; // r2

  result = (int)CRYPTO_malloc((void *)0x18);
  if ( result )
  {
    *(_DWORD *)(result + 8) = 0;
    *(_DWORD *)result = 2048;
    *(_DWORD *)(result + 4) = 224;
    *(_DWORD *)(result + 20) = 0;
    a1[5] = result;
    v5 = *(int **)(a2 + 20);
    a1[9] = 2;
    a1[8] = result + 12;
    v6 = *v5;
    v7 = v5[1];
    v8 = v5[2];
    v9 = v5[5];
    *(_DWORD *)result = v6;
    *(_DWORD *)(result + 4) = v7;
    *(_DWORD *)(result + 8) = v8;
    *(_DWORD *)(result + 20) = v9;
    return 1;
  }
  return result;
}
