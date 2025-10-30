int __fastcall sub_2E698(int result)
{
  if ( *(_DWORD *)(result + 32) != 1 )
    return (*(int (**)(void))(*(_DWORD *)(result + 4) + 16))();
  return result;
}
