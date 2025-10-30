int __fastcall sub_54CB4(int result)
{
  if ( *(_DWORD *)(result + 32) != 1 )
    return (*(int (**)(void))(*(_DWORD *)(result + 4) + 16))();
  return result;
}
