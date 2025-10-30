int __fastcall sub_6BE90(_DWORD *a1)
{
  int v1; // r2
  int v2; // r3
  bool v3; // zf

  v1 = a1[1];
  v2 = *(unsigned __int8 *)(*a1 + v1);
  v3 = v2 == 0;
  if ( *(_BYTE *)(*a1 + v1) )
    ++v1;
  else
    v2 = -1;
  if ( !v3 )
    a1[1] = v1;
  return v2;
}
