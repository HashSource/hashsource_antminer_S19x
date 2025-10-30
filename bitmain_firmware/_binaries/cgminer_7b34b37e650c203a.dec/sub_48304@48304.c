int __fastcall sub_48304(_DWORD *a1, char *a2)
{
  bool v2; // zf

  v2 = a1 == 0;
  if ( a1 )
    v2 = a2 == 0;
  if ( v2 || *a1 )
    return -1;
  else
    return sub_45B70(a1 + 2, a2);
}
