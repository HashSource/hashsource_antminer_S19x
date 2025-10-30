int __fastcall sub_17F6F0(char *a1)
{
  int v2; // r0
  const char *v3; // r5
  int result; // r0
  int v5; // r0
  int *v6; // r4
  int v7; // t1

  if ( a1 )
  {
    v2 = sub_183688(a1);
    v3 = sub_93828((const char ***)(v2 + 60), a1);
    if ( v3 )
    {
      sub_259B34(a1);
      sub_259B34(" = ");
      sub_259B34(v3);
      return sub_259B34(&word_356638);
    }
    else
    {
      sub_259B34("Environment variable \"");
      sub_259B34(a1);
      return sub_259B34("\" not defined.\n");
    }
  }
  else
  {
    v5 = sub_183688(0);
    v6 = (int *)sub_93894(v5 + 60);
    result = *v6;
    if ( *v6 )
    {
      do
      {
        sub_259B34(result);
        sub_259B34(&word_356638);
        v7 = v6[1];
        ++v6;
        result = v7;
      }
      while ( v7 );
    }
  }
  return result;
}
