int __fastcall sub_EE5C(FILE *s, int a2)
{
  _DWORD *v4; // r4
  int v5; // r5
  int v6; // r0

  v4 = (_DWORD *)cfg_tree_history;
  if ( !cfg_tree_history )
    return 0;
  v5 = 0;
  do
  {
    v6 = sub_D7DC((int)v4, s, a2);
    v4 = (_DWORD *)*v4;
    v5 |= v6;
  }
  while ( v4 );
  return v5;
}
