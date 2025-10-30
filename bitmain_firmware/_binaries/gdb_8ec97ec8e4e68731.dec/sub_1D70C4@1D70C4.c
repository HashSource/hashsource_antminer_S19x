int __fastcall sub_1D70C4(int result)
{
  int v1; // r4

  if ( dword_48794C != 1 )
  {
    v1 = result;
    result = sub_1D5110(result, dword_46BBCC, dword_46BBD0, dword_46BBD4);
    if ( !result )
      return (*(int (**)(void))(*(_DWORD *)v1 + 52))();
  }
  return result;
}
