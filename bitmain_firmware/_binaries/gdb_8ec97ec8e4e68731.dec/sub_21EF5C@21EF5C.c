int *__fastcall sub_21EF5C(int a1, int a2)
{
  int *result; // r0
  unsigned int v3; // [sp+Ch] [bp-8h] BYREF

  if ( !sub_1B122C(a2, a1, (int *)&v3) )
    return 0;
  result = sub_C3460(v3);
  if ( !result
    || *((_DWORD *)off_46DBB8 + 4 * (*((unsigned __int8 *)result + 32) >> 3)) != 10
    || *(_DWORD *)result[2] != v3 )
  {
    return 0;
  }
  return result;
}
