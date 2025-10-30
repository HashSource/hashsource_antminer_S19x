void __fastcall sub_FB82C(const char *a1, size_t a2, int a3, const char *a4, int a5)
{
  int v9; // r3
  int v10; // r0
  bool v11; // zf

  if ( !strcmp(a1, ".reg") )
  {
    if ( !a4 )
      a4 = "general-purpose";
    v9 = 1;
  }
  else
  {
    v10 = strcmp(a1, ".reg2");
    v11 = a4 == 0;
    if ( !a4 )
      v11 = v10 == 0;
    v9 = 0;
    if ( v11 )
      a4 = "floating-point";
  }
  sub_FB45C(a5, a3, a1, a2, -1, a4, v9);
}
