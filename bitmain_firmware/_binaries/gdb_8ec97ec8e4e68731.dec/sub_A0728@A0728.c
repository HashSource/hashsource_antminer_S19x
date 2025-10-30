char *__fastcall sub_A0728(const char **a1, int a2)
{
  const char *v3; // r5
  char *v4; // r4
  char *v6; // r0
  char *v7; // r5

  v3 = *a1;
  v4 = (char *)a1;
  if ( !sub_338BD4(*a1, "___XR") )
  {
    v4 = sub_9E628(v3, a2);
    if ( !v4 )
    {
      v6 = sub_9D20C(v3);
      v7 = v6;
      if ( v6 )
      {
        if ( sub_338BD4(*(_DWORD *)v6, "___XR") )
          return v7;
      }
    }
  }
  return v4;
}
