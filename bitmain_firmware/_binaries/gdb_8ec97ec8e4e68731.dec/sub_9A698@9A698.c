bool __fastcall sub_9A698(const char *a1, const char *a2)
{
  signed int v4; // r6
  signed int v5; // r0

  if ( !a1 )
    return 0;
  v4 = strlen(a1);
  v5 = strlen(a2);
  return v4 >= v5 && strcmp(&a1[v4 - v5], a2) == 0;
}
