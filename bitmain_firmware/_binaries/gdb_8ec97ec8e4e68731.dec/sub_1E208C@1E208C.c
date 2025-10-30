void __fastcall sub_1E208C(const char **a1, const char *a2, const char *a3, int a4)
{
  char *v8; // r6
  char *v9; // r5
  char *v10; // r11
  char *v11; // r4

  *a1 = a2;
  a1[1] = a3;
  v8 = sub_93140("Set use of remote protocol `%s' (%s) packet", a2, a3);
  v9 = sub_93140("Show current use of remote protocol `%s' (%s) packet", a2, a3);
  v10 = sub_93140("%s-packet", a3);
  sub_53550(v10, 10, (int)(a1 + 2), v8, v9, 0, 0, (int)&loc_1E3538, (int **)&dword_488C88, (int **)&dword_488C8C);
  if ( v8 )
    free(v8);
  if ( v9 )
    free(v9);
  if ( a4 )
  {
    v11 = sub_93140("%s-packet", a2);
    sub_54724((int)v11, (unsigned __int8 *)v10, 10, 0, &dword_488C88);
    sub_54724((int)v11, (unsigned __int8 *)v10, 10, 0, &dword_488C8C);
  }
}
