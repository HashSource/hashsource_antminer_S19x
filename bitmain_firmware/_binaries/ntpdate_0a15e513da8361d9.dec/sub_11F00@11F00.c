int __fastcall sub_11F00(int a1, _WORD *a2, _WORD *a3)
{
  bool v3; // zf

  v3 = a2 == 0;
  if ( a2 )
    v3 = a3 == 0;
  if ( v3 )
    sub_10C38();
  *a2 = 1024;
  *a3 = -1;
  return 0;
}
