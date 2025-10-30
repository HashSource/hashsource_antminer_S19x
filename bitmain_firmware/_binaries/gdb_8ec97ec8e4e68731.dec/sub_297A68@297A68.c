int __fastcall sub_297A68(int a1)
{
  const char *v1; // r0

  if ( a1 && (v1 = *(const char **)(a1 + 4)) != 0 && *(unsigned __int8 *)v1 == (unsigned __int8)byte_48BB34 )
    return strtol(v1 + 1, 0, 10);
  else
    return 0;
}
