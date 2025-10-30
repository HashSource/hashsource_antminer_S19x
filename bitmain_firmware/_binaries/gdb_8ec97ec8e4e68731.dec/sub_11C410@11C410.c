int __fastcall sub_11C410(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3

  v2 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v3 = *(_DWORD *)(*(_DWORD *)a2 + 4);
  if ( v2 > v3 )
    return v2 >= v3;
  else
    return -(v2 < v3);
}
