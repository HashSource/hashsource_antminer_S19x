int __fastcall sub_16BDF4(_DWORD *a1)
{
  int (__fastcall *v1)(_DWORD); // r3

  v1 = *(int (__fastcall **)(_DWORD))(*a1 + 12);
  if ( v1 )
    return v1(a1[1]);
  else
    return 0;
}
