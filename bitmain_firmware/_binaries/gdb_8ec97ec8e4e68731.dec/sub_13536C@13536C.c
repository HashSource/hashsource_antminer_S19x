int __fastcall sub_13536C(int a1, int *a2, int a3, int a4, int a5)
{
  int v8; // r0
  int v9; // r4
  int v10; // r6
  int v11; // r0
  int v12; // r5
  int v13; // r0
  int v14; // r3

  v8 = ((int (__fastcall *)(int))loc_176828)(a3);
  v9 = *(_DWORD *)(v8 + 24);
  v10 = v8;
  v11 = *(_DWORD *)(v9 + 20);
  if ( **(_BYTE **)(v11 + 24) == 2 )
  {
    v12 = v10;
    do
    {
      v13 = ((int (*)(void))loc_176828)();
      v14 = *(_DWORD *)(v12 + 24);
      *(_DWORD *)(v9 + 20) = v13;
      v12 = *(_DWORD *)(v14 + 20);
      v9 = *(_DWORD *)(v12 + 24);
      v11 = *(_DWORD *)(v9 + 20);
    }
    while ( **(_BYTE **)(v11 + 24) == 2 );
  }
  *(_DWORD *)(v9 + 20) = ((int (__fastcall *)(int, int, int, _DWORD))loc_170478)(
                           *(_DWORD *)(v11 + 16) & 1 | a4,
                           (*(_DWORD *)(v11 + 16) >> 1) & 1 | a5,
                           v11,
                           0);
  return sub_134FA4(a1, v10, a2);
}
