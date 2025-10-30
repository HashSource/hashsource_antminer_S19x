int __fastcall sub_482AC(int result)
{
  if ( *(_DWORD *)(result + 32) != 1 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)(result + 4) + 16))(result);
  return result;
}
