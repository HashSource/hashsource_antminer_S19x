int __fastcall sub_B2B28(int a1, __int64 **a2, int a3)
{
  __int64 *v3; // r3
  __int64 v4; // r2
  const char *v5; // r1

  v3 = *a2;
  if ( (*(_DWORD *)(a3 + 20) & 2) != 0 )
  {
    v4 = *v3;
    v5 = "%jd\n";
  }
  else
  {
    v4 = *v3;
    v5 = "%ju\n";
  }
  return sub_B550C(a1, v5, v4);
}
