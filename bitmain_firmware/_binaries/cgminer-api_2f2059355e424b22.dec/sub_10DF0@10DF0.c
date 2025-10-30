const char *__fastcall sub_10DF0(const char *a1)
{
  const char *v1; // r3
  const char *v4; // [sp+Ch] [bp-8h]

  while ( ((*_ctype_b_loc())[*(unsigned __int8 *)a1] & 0x2000) != 0 )
    ++a1;
  v4 = &a1[strlen(a1)];
  while ( 1 )
  {
    v1 = v4--;
    if ( a1 >= v1 )
      break;
    if ( ((*_ctype_b_loc())[*(unsigned __int8 *)v4] & 0x2000) != 0 )
      *v4 = 0;
  }
  return a1;
}
