int __fastcall sub_1FDD7C(const char *a1)
{
  char *v2; // r0
  const char **v3; // r5

  if ( *a1 == 124 )
  {
    v3 = sub_1FD680("pipe");
    sub_9360C(a1 + 1);
  }
  else
  {
    if ( strchr(a1, 58) )
      LOWORD(v2) = -6132;
    else
      LOWORD(v2) = -6536;
    HIWORD(v2) = 52;
    v3 = sub_1FD680(v2);
  }
  if ( v3 )
    return sub_1FD8B0((int)v3);
  else
    return 0;
}
