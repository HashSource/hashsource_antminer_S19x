int __fastcall sub_71D94(int *a1)
{
  int v1; // r2
  unsigned __int8 v4; // [sp+Fh] [bp-5h]

  if ( !a1[1] )
    return 0;
  v1 = *a1;
  --a1[1];
  v4 = *(_BYTE *)(v1 + a1[1]);
  *(_BYTE *)(*a1 + a1[1]) = 0;
  return v4;
}
