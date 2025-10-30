int sub_1C4898()
{
  int *v0; // lr
  int v1; // r2
  int result; // r0
  int v3; // r12
  int i; // r3
  int v5; // r2
  int v6; // t1

  v0 = &dword_487C98;
  v1 = 0;
  result = 0;
  v3 = dword_487C9C;
  for ( i = dword_487C98 + 4 * dword_487C9C; v3; v1 = 1 )
  {
    v6 = *(_DWORD *)(i - 4);
    i -= 4;
    v5 = v6;
    --v3;
    if ( v6 != 6 )
    {
      if ( v5 == 7 )
      {
        result |= 2u;
        continue;
      }
      if ( v5 == -1 )
        goto LABEL_11;
      v0[1] = v3;
      result = sub_94700(
                 (int)"parse.c",
                 1572,
                 "%s: %s",
                 "type_instance_flags follow_type_instance_flags()",
                 "unrecognized tp_ value in follow_types");
    }
    result |= 1u;
  }
  if ( v1 )
LABEL_11:
    v0[1] = v3;
  return result;
}
