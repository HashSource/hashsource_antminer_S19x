int __fastcall sub_3DD78(char *a1, int a2)
{
  bool v2; // zf

  v2 = a2 == 0;
  if ( a2 )
    v2 = a1 == 0;
  if ( v2 )
    return 255;
  else
    return sub_3D820(a1, a2);
}
