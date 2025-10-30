void __fastcall sub_3CA78(unsigned int *a1, char *s, int a3, _BYTE *a4)
{
  char *v6; // r5

  if ( *a4 )
  {
    if ( !a3 )
    {
      *a4 = 0;
      goto LABEL_5;
    }
    sub_3C770(a1, "{");
    *a4 = 0;
    v6 = (char *)sub_3C89C(s, 1);
  }
  else
  {
    if ( !a3 )
    {
LABEL_5:
      v6 = (char *)sub_3C89C(s, a3);
      sub_3C770(a1, "CMD=");
      sub_3C770(a1, v6);
      sub_3C770(a1, "|");
      if ( s == v6 )
        return;
      goto LABEL_6;
    }
    sub_3C770(a1, ",");
    v6 = (char *)sub_3C89C(s, 1);
  }
  sub_3C770(a1, "\"");
  sub_3C770(a1, v6);
  sub_3C770(a1, "\":[");
  if ( s != v6 )
LABEL_6:
    free(v6);
}
