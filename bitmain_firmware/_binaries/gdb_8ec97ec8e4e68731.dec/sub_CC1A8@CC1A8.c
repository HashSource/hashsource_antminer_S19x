int __fastcall sub_CC1A8(int a1, int a2, unsigned int a3, _DWORD *a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r4
  int v11; // r5
  int v12; // r6
  int v13; // r7
  int v14; // r8
  unsigned int v18; // r7
  int v19; // r6
  int v20; // r0
  int v21; // r0

  if ( *a4 == 1 && a4[1] == 5 )
  {
    *(&a5 - 6) = v10;
    *(&a5 - 5) = v11;
    *(&a5 - 4) = v12;
    *(&a5 - 3) = v13;
    *(&a5 - 2) = v14;
    v18 = *(_DWORD *)(a1 + 52);
    v19 = *(_DWORD *)(*(_DWORD *)(a1 + 48) + 20);
    v20 = sub_16F654(a1);
    v21 = ((int (__fastcall *)(int))loc_16D8FC)(v20) != 0;
    if ( a2 == v19 )
      v21 |= 1u;
    if ( !v21 )
      __asm { POPEQ           {R4-R8,PC} }
    if ( a3 >= v18 )
      __asm { POP             {R4-R8,PC} }
    __asm { POP             {R4-R8,PC} }
  }
  return 0;
}
