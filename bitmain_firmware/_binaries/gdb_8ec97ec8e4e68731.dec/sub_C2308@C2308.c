int __fastcall sub_C2308(_DWORD *a1)
{
  if ( a1[2] )
    return sub_22099C(a1[2]);
  while ( a1[3] )
    a1 = (_DWORD *)a1[3];
  return *(_DWORD *)(a1[6] + 4);
}
