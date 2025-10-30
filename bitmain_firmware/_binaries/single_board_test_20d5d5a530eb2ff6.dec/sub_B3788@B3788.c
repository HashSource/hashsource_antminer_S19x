int __fastcall sub_B3788(const char *a1, void *dest, size_t *a3)
{
  int v4; // r3
  const void *v6; // r4
  size_t v7; // r7

  v4 = *(unsigned __int16 *)a1;
  switch ( v4 )
  {
    case 2:
      v6 = a1 + 4;
      v7 = 4;
      break;
    case 10:
      v6 = a1 + 8;
      v7 = 16;
      break;
    case 1:
      v6 = a1 + 2;
      v7 = strlen(a1 + 2);
      break;
    default:
      return 0;
  }
  if ( dest )
    memcpy(dest, v6, v7);
  if ( a3 )
    *a3 = v7;
  return 1;
}
