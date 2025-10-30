int __fastcall sub_1917E4(int a1)
{
  int (*v1)(void); // r2

  v1 = *(int (**)(void))(*(_DWORD *)a1 + 36);
  if ( v1 == sub_62B28 )
    return 0;
  else
    return v1();
}
