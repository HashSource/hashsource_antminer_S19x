int __fastcall sub_BD304(_BYTE *a1)
{
  int result; // r0
  int v2; // r3

  if ( *(_DWORD *)a1 )
    return 0;
  if ( a1[40] != 4 )
    return *(_DWORD *)a1;
  v2 = (unsigned __int8)a1[41];
  if ( v2 == 1 )
    return 668;
  result = 794;
  if ( v2 != 3 )
    return 0;
  return result;
}
