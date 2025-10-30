int __fastcall sub_C5E80(_DWORD *a1, int a2)
{
  void (*v4)(void); // r3
  int (__fastcall *v5)(_DWORD *); // r3

  v4 = *(void (**)(void))(*a1 + 12);
  if ( v4 )
    v4();
  sub_CDDF8(a1[1]);
  v5 = *(int (__fastcall **)(_DWORD *))(a2 + 8);
  *a1 = a2;
  a1[1] = 0;
  if ( v5 )
    return v5(a1);
  else
    return 1;
}
