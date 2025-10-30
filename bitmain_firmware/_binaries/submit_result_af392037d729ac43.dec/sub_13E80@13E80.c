int __fastcall sub_13E80(_DWORD *a1)
{
  _DWORD *v1; // r0

  if ( !a1 || *a1 )
    return 0;
  v1 = a1 + 2;
  if ( (_DWORD *)v1[6] == v1 + 5 )
    return 0;
  else
    return v1[6];
}
