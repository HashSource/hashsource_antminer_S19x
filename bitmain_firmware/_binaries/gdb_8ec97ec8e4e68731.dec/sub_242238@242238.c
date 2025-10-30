int __fastcall sub_242238(int result)
{
  int (*v1)(void); // r3

  v1 = *(int (**)(void))(*(_DWORD *)result + 4);
  if ( v1 )
    return v1();
  return result;
}
