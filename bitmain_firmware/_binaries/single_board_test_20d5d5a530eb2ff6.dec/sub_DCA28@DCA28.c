bool __fastcall sub_DCA28(int a1, int a2, _DWORD *a3)
{
  int v7; // [sp+4h] [bp-4h] BYREF
  _BYTE v8[68]; // [sp+8h] [bp+0h] BYREF

  if ( !*(_DWORD *)a1 )
    return 0;
  if ( sub_D16E4(*(int **)(a1 + 4), (int)v8, &v7)
    && sub_D17B4(*(int **)(a1 + 4), *(int **)(a1 + 12))
    && sub_D16D8(*(_DWORD *)(a1 + 4), (int)v8, v7) )
  {
    return sub_D16E4(*(int **)(a1 + 4), a2, a3) != 0;
  }
  return 0;
}
