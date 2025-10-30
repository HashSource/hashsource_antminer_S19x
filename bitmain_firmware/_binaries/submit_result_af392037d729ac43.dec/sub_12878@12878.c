int __fastcall sub_12878(_DWORD *a1)
{
  unsigned int v1; // r3
  unsigned int v2; // r1
  int v3; // r3

  v1 = a1[2];
  if ( v1 >= a1[1] )
    return -1;
  v2 = v1 + 1;
  v3 = *(unsigned __int8 *)(*a1 + v1);
  a1[2] = v2;
  return v3;
}
