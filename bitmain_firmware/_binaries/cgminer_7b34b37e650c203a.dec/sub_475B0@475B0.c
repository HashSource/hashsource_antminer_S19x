int __fastcall sub_475B0(const char *a1, int a2, int a3)
{
  int v6; // r0
  FILE *v7; // r7
  int v8; // r6
  int *v10; // r0
  char *v11; // r0

  sub_497D4(a3, a1);
  if ( a1 )
  {
    v6 = fopen64(a1, "rb");
    v7 = (FILE *)v6;
    if ( v6 )
    {
      v8 = sub_473F4(v6, a2, a3);
      fclose(v7);
    }
    else
    {
      v10 = _errno_location();
      v8 = 0;
      v11 = strerror(*v10);
      sub_45F98(a3, 0, 3, "unable to open %s: %s", a1, v11);
    }
  }
  else
  {
    v8 = 0;
    sub_45F98(a3, 0, 4, "wrong arguments");
  }
  return v8;
}
