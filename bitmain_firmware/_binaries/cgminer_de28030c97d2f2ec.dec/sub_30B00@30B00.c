const char *__fastcall sub_30B00(const char *a1, int a2)
{
  if ( sscanf(a1, "%d:%d", a2 + 12, a2 + 8) != 2 )
    return "Invalid time set, should be HH:MM";
  if ( *(int *)(a2 + 12) > 23 || *(int *)(a2 + 8) > 59 || *(int *)(a2 + 12) < 0 || *(int *)(a2 + 8) < 0 )
    return "Invalid time set.";
  *(_BYTE *)a2 = 1;
  return 0;
}
