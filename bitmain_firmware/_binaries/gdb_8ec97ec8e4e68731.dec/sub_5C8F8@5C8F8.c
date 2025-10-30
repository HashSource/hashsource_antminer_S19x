void __fastcall sub_5C8F8(int a1, int a2, int a3)
{
  _DWORD *v4; // r0
  bool v5; // cc
  int v6; // r4
  void *v7; // r5
  int *v8; // r0
  const char *v9; // r0

  v4 = (_DWORD *)sub_242FDC(a1);
  v5 = a3 <= 0;
  v6 = *v4;
  if ( !v5 )
    sub_946E0("-environment-pwd: No arguments allowed");
  if ( sub_69098(*v4) <= 1 )
  {
    sub_5C898("pwd", 0);
  }
  else
  {
    v7 = (void *)sub_336420(0);
    if ( !v7 )
    {
      v8 = _errno_location();
      v9 = (const char *)sub_6FF98(*v8);
      sub_946E0("-environment-pwd: error finding name of working directory: %s", v9);
    }
    sub_2575E8(v6, "cwd", v7);
    free(v7);
  }
}
