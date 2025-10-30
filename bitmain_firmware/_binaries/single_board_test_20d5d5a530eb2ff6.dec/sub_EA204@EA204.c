_DWORD *__fastcall sub_EA204(_DWORD *result, int a2)
{
  if ( *result == *(_DWORD *)a2 )
    return (_DWORD *)(*(int (**)(void))(a2 + 4))();
  return result;
}
