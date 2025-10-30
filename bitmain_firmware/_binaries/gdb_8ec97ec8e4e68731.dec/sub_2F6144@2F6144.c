unsigned __int8 *__fastcall sub_2F6144(unsigned __int8 *result, unsigned __int8 *a2, int *a3)
{
  unsigned __int8 *v3; // r3
  int v5; // r1

  if ( result >= a2 )
  {
    v5 = 0;
LABEL_7:
    *a3 = v5;
    return 0;
  }
  v3 = result + 1;
  if ( *result )
  {
    while ( a2 != v3 )
    {
      if ( !*v3++ )
        goto LABEL_8;
    }
    v5 = a2 - result;
    goto LABEL_7;
  }
LABEL_8:
  *a3 = v3 - result;
  return result;
}
