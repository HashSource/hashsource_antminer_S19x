int __fastcall sub_139A4(int *a1)
{
  int v1; // r3
  int v2; // r1
  int result; // r0

  v1 = a1[1];
  if ( !v1 )
    return 0;
  v2 = *a1;
  a1[1] = v1 - 1;
  result = *(unsigned __int8 *)(v2 + v1 - 1);
  *(_BYTE *)(v2 + v1 - 1) = 0;
  return result;
}
