int __fastcall sub_C5A6C(_DWORD *a1, int a2)
{
  int (*v4)(void); // r3
  int result; // r0
  int v6; // r0

  v4 = *(int (**)(void))(*a1 + 28);
  if ( !v4 || (result = v4()) != 0 )
  {
    sub_C6490(a1[4]);
    v6 = sub_C69FC(a2, a1[3]);
    a1[4] = v6;
    return v6 != 0;
  }
  return result;
}
