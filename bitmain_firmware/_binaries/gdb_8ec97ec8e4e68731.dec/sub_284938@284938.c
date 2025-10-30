int __fastcall sub_284938(int a1)
{
  int v2; // r4

  fwrite("--More--", 1u, 8u, (FILE *)dword_48AAB0);
  fflush((FILE *)dword_48AAB0);
  v2 = sub_284894(1);
  sub_290850(v2);
  if ( !v2 )
    return -1;
  if ( v2 == 2 )
    return a1 - 1;
  return 0;
}
