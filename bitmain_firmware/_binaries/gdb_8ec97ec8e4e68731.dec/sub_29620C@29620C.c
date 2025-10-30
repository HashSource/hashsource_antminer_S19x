int __fastcall sub_29620C(size_t a1)
{
  const char *v1; // r4
  int v2; // r5
  size_t v3; // r2
  const char *v5; // r1
  int v6; // r6

  v1 = (const char *)dword_4900C8;
  dword_4900D8 = 0;
  if ( !dword_4900C8 )
  {
    if ( !dword_48AB0C || (v5 = (const char *)dword_48AAD4, v6 = *(unsigned __int8 *)dword_48AAD4, v6 != 35) )
    {
      a1 = sub_294748("#");
      goto LABEL_5;
    }
    v3 = 1;
    v1 = "#";
    v2 = 1;
    goto LABEL_11;
  }
  if ( !dword_48AB0C )
  {
    if ( !*(_BYTE *)dword_4900C8 )
      goto LABEL_5;
LABEL_7:
    a1 = sub_294748(v1);
    goto LABEL_5;
  }
  a1 = strlen((const char *)dword_4900C8);
  v2 = a1;
  v3 = a1;
  if ( a1 )
  {
    v6 = *(unsigned __int8 *)dword_4900C8;
    v5 = (const char *)dword_48AAD4;
    if ( *(unsigned __int8 *)dword_48AAD4 != v6 )
    {
LABEL_12:
      if ( !v6 )
        goto LABEL_5;
      goto LABEL_7;
    }
LABEL_11:
    a1 = strncmp(v1, v5, v3);
    if ( !a1 )
      goto LABEL_4;
    goto LABEL_12;
  }
LABEL_4:
  a1 = sub_294F5C(0, v2);
LABEL_5:
  off_470784(a1);
  sub_295A9C(1);
  return 0;
}
