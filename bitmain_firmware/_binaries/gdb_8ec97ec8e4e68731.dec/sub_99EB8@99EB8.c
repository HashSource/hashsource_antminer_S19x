_DWORD *__fastcall sub_99EB8(unsigned int *a1, int a2, int a3, int a4)
{
  unsigned int v5; // r12
  unsigned int v6; // r4
  unsigned int v7; // r5
  bool v8; // cc
  _DWORD *result; // r0
  int v10; // r4
  __int64 v11; // r0

  if ( !a1 )
  {
    if ( !a2 )
      return 0;
    if ( a2 >= 0 )
    {
      if ( (unsigned int)a2 < 4 )
        v10 = 4;
      else
        v10 = a2;
      result = sub_93050(0, a3 + v10 * a4);
      result[1] = v10;
      goto LABEL_24;
    }
    v6 = 0;
    goto LABEL_13;
  }
  v5 = a1[1];
  v6 = *a1;
  if ( v5 - *a1 >= abs32(a2) )
  {
    v11 = sub_94700(
            (int)"common/vec.c",
            51,
            "%s: Assertion `%s' failed.",
            "unsigned int calculate_allocation(const vec_prefix*, int)",
            "alloc - num < (unsigned)(reserve < 0 ? -reserve : reserve)");
    return (_DWORD *)sub_99FE0(v11, HIDWORD(v11));
  }
  if ( a2 < 0 )
  {
LABEL_13:
    v6 -= a2;
    goto LABEL_14;
  }
  v7 = v6 + a2;
  if ( !v5 )
  {
    if ( v7 > 4 )
    {
LABEL_11:
      result = sub_93050(a1, a3 + v7 * a4);
      result[1] = v7;
      return result;
    }
    result = sub_93050(a1, a3 + 4 * a4);
    result[1] = 4;
    return result;
  }
  v8 = v5 > 0xF;
  if ( v5 <= 0xF )
    v6 = 2 * v5;
  else
    v5 *= 3;
  if ( v8 )
    v6 = v5 >> 1;
  if ( v6 < v7 )
    goto LABEL_11;
LABEL_14:
  if ( !v6 )
    return 0;
  result = sub_93050(a1, a3 + v6 * a4);
  result[1] = v6;
  if ( !a1 )
LABEL_24:
    *result = 0;
  return result;
}
