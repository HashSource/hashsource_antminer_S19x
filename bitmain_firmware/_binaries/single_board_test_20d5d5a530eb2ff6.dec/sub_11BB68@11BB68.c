int __fastcall sub_11BB68(int result, int a2)
{
  int (__fastcall *v2)(_DWORD); // r3

  if ( a2 )
  {
    v2 = *(int (__fastcall **)(_DWORD))(*(_DWORD *)(result + 20) + 12);
    if ( v2 )
      return v2(*(_DWORD *)(result + 24));
  }
  return result;
}
