int __fastcall sub_230F6C(const char *a1, int a2)
{
  int result; // r0
  int (*v5)(void); // r3
  int v6; // r0
  _DWORD *v7; // r0

  if ( dword_489AD8 <= 1 )
  {
    result = sub_22451C(0);
    if ( result )
      goto LABEL_5;
  }
  else
  {
    for ( result = dword_4899A0; result; result = *(_DWORD *)result )
    {
LABEL_5:
      v5 = *(int (**)(void))(result + 496);
      if ( v5 )
      {
        v6 = v5();
        if ( dword_489C84 )
        {
          v7 = (_DWORD *)sub_242FC8(v6);
          sub_2594B0(*v7, "target_info_proc (\"%s\", %d)\n", a1, a2);
        }
        return 1;
      }
    }
  }
  return result;
}
