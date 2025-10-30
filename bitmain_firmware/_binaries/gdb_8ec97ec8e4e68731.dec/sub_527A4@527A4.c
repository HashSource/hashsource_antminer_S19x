int __fastcall sub_527A4(int a1, int a2, int a3)
{
  void *v5; // r5
  int v6; // r1
  int v7; // r0
  int v8; // r7
  void *v9; // r6
  FILE *v11; // r8
  void *v12; // r0
  int *v13; // r8
  int v14; // r0
  int v15; // r7
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  v5 = (void *)sub_29B910(a2);
  if ( a3 )
    v6 = 7;
  else
    v6 = 5;
  v7 = ((int (__fastcall *)(int, int, void *, _DWORD, void **))loc_203AE4)(dword_4893F4, v6, v5, 0, &ptr);
  v8 = v7;
  v9 = ptr;
  if ( v7 == -1 )
  {
LABEL_5:
    if ( v9 )
      free(v9);
    goto LABEL_7;
  }
  v11 = fdopen(v7, "r");
  if ( !v11 )
  {
    v13 = _errno_location();
    v14 = v8;
    v15 = *v13;
    close(v14);
    *v13 = v15;
    goto LABEL_5;
  }
  if ( *(_BYTE *)(a1 + 8) )
  {
    v12 = *(void **)(a1 + 4);
    *(_BYTE *)(a1 + 8) = 0;
    if ( v12 )
      free(v12);
    if ( *(_DWORD *)a1 )
      fclose(*(FILE **)a1);
  }
  *(_DWORD *)a1 = v11;
  *(_DWORD *)(a1 + 4) = v9;
  *(_BYTE *)(a1 + 8) = 1;
LABEL_7:
  if ( v5 )
    free(v5);
  return a1;
}
