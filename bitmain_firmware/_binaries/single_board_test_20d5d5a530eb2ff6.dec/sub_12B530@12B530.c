int __fastcall sub_12B530(size_t *a1, char *s)
{
  int result; // r0
  int v5[4]; // [sp+0h] [bp-10h] BYREF

  v5[1] = 23;
  v5[0] = strlen(s);
  v5[2] = (int)s;
  v5[3] = 0;
  result = sub_12B528(v5);
  if ( result )
  {
    result = 1;
    if ( a1 )
      return sub_AE140(a1, v5) != 0;
  }
  return result;
}
