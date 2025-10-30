const char *__fastcall sub_10DEC(const char *a1)
{
  char *v1; // r3
  char *v4; // [sp+Ch] [bp-8h]

  while ( ((*_ctype_b_loc())[*(unsigned __int8 *)a1] & 0x2000) != 0 )
    ++a1;
  v4 = strchr(a1, 0);
  while ( 1 )
  {
    v1 = v4--;
    if ( v1 <= a1 )
      break;
    if ( ((*_ctype_b_loc())[(unsigned __int8)*v4] & 0x2000) != 0 )
      *v4 = 0;
  }
  return a1;
}
