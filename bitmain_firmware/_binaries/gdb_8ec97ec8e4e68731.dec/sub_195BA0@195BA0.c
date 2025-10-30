char *__fastcall sub_195BA0(const char **a1)
{
  const char *v1; // r3
  const char *v3; // r0

  v1 = a1[1];
  if ( !v1 )
    return (char *)sub_327254(*a1);
  v3 = (const char *)sub_204308(v1);
  return sub_93140("%s:%s", v3, *a1);
}
