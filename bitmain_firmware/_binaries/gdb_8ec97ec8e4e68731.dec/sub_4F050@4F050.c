void __fastcall sub_4F050(const char *a1)
{
  const char *v1; // r0
  char *v2; // r5
  const char *v3; // r4
  int *v4; // r0
  const char *v5; // r0

  if ( a1 )
    sub_946E0("The \"pwd\" command does not take an argument: %s", a1);
  v1 = (const char *)sub_336420();
  v2 = (char *)v1;
  if ( !v1 )
  {
    v4 = _errno_location();
    v5 = (const char *)sub_6FF98(*v4);
    sub_946E0("Error finding name of working directory: %s", v5);
  }
  v3 = (const char *)dword_48A4F8;
  if ( !strcmp(v1, (const char *)dword_48A4F8) )
    sub_259858("Working directory %s.\n", v3);
  else
    sub_259858("Working directory %s\n (canonically %s).\n", v3, v2);
  free(v2);
}
