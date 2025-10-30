char *__fastcall sub_56AE4(char *result, int a2, _BYTE *a3, signed int a4, int a5, int a6)
{
  int v6; // r7
  unsigned int *v7; // r4
  signed int v10[2]; // [sp+14h] [bp-8h] BYREF

  v6 = (unsigned __int8)result & 3;
  if ( ((unsigned __int8)result & 3) != 0 )
    result = 0;
  v10[0] = a4;
  if ( !v6 )
  {
    v7 = (unsigned int *)result;
    sub_56A98(result, a6);
    sub_50B68(v7, a2);
    if ( sub_48D9C(v10[0]) > a5 )
      return sub_548C0(v7, a2, a3, v10, a5, a6, 1);
    else
      return sub_548C0(v7, a2, a3, v10, a5, a6, v6);
  }
  return result;
}
