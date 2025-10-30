int __fastcall sub_D9AE4(int result)
{
  int v1; // r3
  int (*v2)(void); // r3

  if ( result )
  {
    v1 = *(_DWORD *)(result + 12);
    if ( v1 && (v2 = *(int (**)(void))(v1 + 56)) != 0 )
      return v2();
    else
      return -2;
  }
  return result;
}
