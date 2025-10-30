FILE *__fastcall sub_346588(FILE **a1, const void **a2)
{
  const char *v4; // r5
  FILE *result; // r0

  v4 = (const char *)*a2;
  if ( sub_344C74(a2, "default") )
  {
    if ( sub_344C74(a2, "/dev/urandom") && sub_344C74(a2, "/dev/random") )
LABEL_7:
      sub_33D280("random_device::random_device(const std::string&)");
  }
  else
  {
    v4 = "/dev/urandom";
  }
  result = fopen(v4, "rb");
  *a1 = result;
  if ( !result )
    goto LABEL_7;
  return result;
}
