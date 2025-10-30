int __fastcall sub_134EE0(_DWORD *a1, int a2, int a3)
{
  void (__fastcall *v4)(int, int, _DWORD); // r6

  if ( !a1 )
    return 1;
  if ( *a1 == 1 )
  {
    v4 = (void (__fastcall *)(int, int, _DWORD))a1[2];
    if ( v4 )
    {
      v4(a2, a3, a1[1]);
      return 1;
    }
    else
    {
      return *a1;
    }
  }
  else if ( *a1 == 2 )
  {
    return ((int (__fastcall *)(int, int, _DWORD *))a1[2])(a2, a3, a1);
  }
  else
  {
    return 0;
  }
}
