void *__fastcall sub_202D4(size_t a1, size_t a2, const char *a3, const char *a4, int a5)
{
  size_t size; // [sp+18h] [bp-814h] BYREF
  size_t nmemb; // [sp+1Ch] [bp-810h]
  char v10[8]; // [sp+24h] [bp-808h] BYREF
  void *v11; // [sp+824h] [bp-8h]

  nmemb = a1;
  size = a2;
  sub_1FB98(&size);
  v11 = calloc(nmemb, size);
  if ( !v11 )
  {
    snprintf(v10, 0x800u, "Failed to calloc memb %d size %d from %s %s:%d", nmemb, size, a3, a4, a5);
    sub_1E4EC(3, v10, 1);
    sub_4BFB0(1);
  }
  return v11;
}
