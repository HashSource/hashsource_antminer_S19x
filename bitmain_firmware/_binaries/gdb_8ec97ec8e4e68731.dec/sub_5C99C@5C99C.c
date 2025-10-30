void __fastcall sub_5C99C(int a1, const char **a2, int a3)
{
  int v3; // r4
  _BOOL4 v4; // r3
  _BOOL4 v5; // r2

  v4 = a3 > 1;
  if ( a3 )
    v5 = a3 > 1;
  else
    v5 = 1;
  if ( v5 )
    sub_946E0("-environment-cd: Usage DIRECTORY", a2, v5, v4, v3);
  sub_5C898("cd", *a2);
}
