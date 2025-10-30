int __fastcall sub_2ABDF0(int a1)
{
  int (*v2)(void); // r3
  int result; // r0

  v2 = *(int (**)(void))(*(_DWORD *)(a1 + 8) + 8);
  if ( v2 )
    result = v2();
  else
    result = 0;
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
