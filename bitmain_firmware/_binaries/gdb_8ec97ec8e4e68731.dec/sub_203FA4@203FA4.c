int __fastcall sub_203FA4(int a1, _DWORD *a2)
{
  int v3; // r0

  v3 = ((int (__fastcall *)(int, int, int, _DWORD, _DWORD *))loc_203AE4)(dword_4893F4, 7, a1, 0, a2);
  if ( v3 >= 0 )
  {
    close(v3);
    return 1;
  }
  else
  {
    *a2 = 0;
    return 0;
  }
}
