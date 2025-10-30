int __fastcall sub_157E7C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int *v6; // r12
  int **i; // r4
  int v12; // lr
  int (__fastcall *v13)(int *, int, int, int, int, int, int); // r11
  int result; // r0
  int *v15; // t1

  v6 = &dword_35C954;
  for ( i = &off_3A7718; ; ++i )
  {
    v12 = v6[7];
    if ( v12 )
    {
      v13 = *(int (__fastcall **)(int *, int, int, int, int, int, int))(v12 + 28);
      if ( v13 )
      {
        result = v13(v6, a1, a2, a3, a4, a5, a6);
        if ( result != 3 )
          break;
      }
    }
    v15 = *i;
    v6 = v15;
    if ( !v15 )
      return 3;
  }
  return result;
}
