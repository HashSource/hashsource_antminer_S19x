void *__fastcall sub_93050(void *a1, size_t a2)
{
  size_t v2; // r4
  void *result; // r0

  if ( a2 )
    v2 = a2;
  else
    v2 = 1;
  if ( !a1 )
    goto LABEL_7;
  for ( result = realloc(a1, v2); !result; result = malloc(v2) )
  {
    sub_258C1C(v2);
LABEL_7:
    ;
  }
  return result;
}
