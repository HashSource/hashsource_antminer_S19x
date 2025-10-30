struct passwd *sub_29B19C()
{
  __uid_t v0; // r0
  struct passwd *result; // r0

  v0 = getuid();
  result = getpwuid(v0);
  if ( result )
    return (struct passwd *)result->pw_dir;
  return result;
}
