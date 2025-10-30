int __fastcall sub_74B18(const char *a1, int a2, int a3)
{
  int *v4; // r0
  char *v5; // r0
  int v10; // [sp+18h] [bp-Ch]
  FILE *stream; // [sp+1Ch] [bp-8h]

  sub_78408(a3, a1);
  if ( a1 )
  {
    stream = fopen(a1, "rb");
    if ( stream )
    {
      v10 = sub_74910((int)stream, a2, a3);
      fclose(stream);
      return v10;
    }
    else
    {
      v4 = _errno_location();
      v5 = strerror(*v4);
      sub_727DC(a3, 0, 3, "unable to open %s: %s", a1, v5);
      return 0;
    }
  }
  else
  {
    sub_727DC(a3, 0, 4, "wrong arguments");
    return 0;
  }
}
