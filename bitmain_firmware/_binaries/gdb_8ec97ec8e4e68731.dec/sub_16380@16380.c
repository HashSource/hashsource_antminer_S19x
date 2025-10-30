void sub_16380()
{
  int v0; // r4
  const char *v1; // r0

  v0 = *_errno_location();
  sub_231E3C(2);
  v1 = (const char *)sub_6FF98(v0);
  sub_92F64(12, "%s: %s.", "Remote communication error.  Target disconnected.", v1);
  JUMPOUT(0x163B8);
}
