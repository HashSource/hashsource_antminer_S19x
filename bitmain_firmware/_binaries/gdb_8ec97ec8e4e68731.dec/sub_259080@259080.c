int sub_259080()
{
  int v0; // r0
  int *v2; // r0
  int v3; // [sp+0h] [bp-8h] BYREF
  int v4; // [sp+4h] [bp-4h] BYREF

  if ( dword_487A50 )
  {
    dword_48A9B4 = -1;
    dword_48A9B8 = -1;
  }
  else
  {
    sub_2944D8();
    sub_293E4C(&v3, &v4);
    dword_48A9B4 = v3;
    dword_48A9B8 = v4;
    if ( v3 <= 0 && tgetnum("li") < 0 || getenv("EMACS") || getenv("INSIDE_EMACS") )
      dword_48A9B4 = -1;
    v2 = (int *)sub_242F8C();
    if ( !sub_256818(*v2) )
      dword_48A9B4 = -1;
  }
  dword_47078C = 0;
  v0 = sub_2582DC();
  return sub_259168(v0);
}
