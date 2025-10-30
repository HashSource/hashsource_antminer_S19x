int __fastcall sub_154980(int a1, int a2, const char *a3)
{
  const char *v3; // r5
  char *v6; // r0
  const char *v7; // r4
  __int64 v9; // r0

  v3 = a3;
  if ( a3 )
  {
    while ( 1 )
    {
      v6 = strchr(v3, 10);
      if ( !v6 )
        break;
      v7 = v6 + 1;
      sub_25682C(a1, v3, v6 + 1 - v3);
      v3 = v7;
      if ( !v7 )
        goto LABEL_4;
    }
    sub_25A6BC(v3, a1);
  }
LABEL_4:
  sub_25A418(a1, (const char *)&word_356638);
  if ( a2 == -2 )
    return sub_B7874();
  if ( a2 == -1 )
    return sub_B7894();
  v9 = sub_94700((int)"exceptions.c", 104, "Bad switch.");
  return sub_154A1C(v9, HIDWORD(v9));
}
