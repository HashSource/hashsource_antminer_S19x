int __fastcall sub_E4358(const char **a1, int a2, const void *a3)
{
  size_t *v6; // r0

  if ( sub_2AA86C(a1, 1) && (v6 = (size_t *)a1[43]) != 0 )
  {
    if ( *v6 == a2 && !memcmp(v6 + 1, a3, *v6) )
    {
      return 1;
    }
    else
    {
      sub_946B0("File \"%s\" has a different build-id, file skipped", *a1);
      return 0;
    }
  }
  else
  {
    sub_946B0("File \"%s\" has no build-id, file skipped", *a1);
    return 0;
  }
}
