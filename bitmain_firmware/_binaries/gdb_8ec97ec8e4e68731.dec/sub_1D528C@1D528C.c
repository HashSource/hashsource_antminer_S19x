int __fastcall sub_1D528C(int a1)
{
  int result; // r0
  int v3[3]; // [sp+4h] [bp-Ch] BYREF

  if ( dword_487D68 )
    return (*(int (**)(void))(*(_DWORD *)a1 + 68))();
  ((void (__fastcall *)(int *))loc_1DD598)(v3);
  result = sub_1D5110(a1, v3[0], v3[1], v3[2]);
  if ( !result )
    return (*(int (**)(void))(*(_DWORD *)a1 + 68))();
  return result;
}
