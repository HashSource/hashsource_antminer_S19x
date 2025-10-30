int __fastcall sub_12860(_DWORD *a1)
{
  int v1; // r2
  int result; // r0

  v1 = a1[1];
  result = *(unsigned __int8 *)(*a1 + v1);
  if ( !result )
    return -1;
  a1[1] = v1 + 1;
  return result;
}
