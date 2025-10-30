void *__fastcall sub_1F934(size_t a1, const char *a2, const char *a3, int a4)
{
  size_t size[2]; // [sp+1Ch] [bp-810h] BYREF
  char v9[8]; // [sp+24h] [bp-808h] BYREF
  void *v10; // [sp+824h] [bp-8h]

  size[0] = a1;
  sub_1F290(size);
  v10 = malloc(size[0]);
  if ( !v10 )
  {
    snprintf(v9, 0x800u, "Failed to malloc size %d from %s %s:%d", size[0], a2, a3, a4);
    sub_1DB6C(3, v9, 1);
    sub_4B2A0(1);
  }
  return v10;
}
