int __fastcall sub_2422D4(int a1)
{
  int (*v1)(void); // r3

  v1 = *(int (**)(void))(*(_DWORD *)a1 + 20);
  if ( v1 )
    return v1();
  else
    return 1;
}
