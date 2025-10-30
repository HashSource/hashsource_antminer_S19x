char *__fastcall sub_9D20C(const char *a1)
{
  int v2; // r0
  char *result; // r0

  v2 = sub_20F388(0);
  result = sub_9D190(a1, v2, (char *)1);
  if ( !result || *((_DWORD *)off_46DBB8 + 4 * ((unsigned __int8)result[32] >> 3)) != 8 )
    return sub_9D190(a1, 0, (char *)2);
  return result;
}
