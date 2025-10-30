char *__fastcall sub_3245D0(const char *a1)
{
  char *v2; // r0
  char v4[4096]; // [sp+0h] [bp-1000h] BYREF

  v2 = realpath(a1, v4);
  if ( !v2 )
    v2 = (char *)a1;
  return _strdup(v2);
}
