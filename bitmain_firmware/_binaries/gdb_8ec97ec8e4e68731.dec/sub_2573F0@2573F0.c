int __fastcall sub_2573F0(int a1)
{
  int (*v1)(void); // r2

  v1 = *(int (**)(void))(*(_DWORD *)a1 + 72);
  if ( v1 == sub_F0214 )
    return 0;
  else
    return v1();
}
