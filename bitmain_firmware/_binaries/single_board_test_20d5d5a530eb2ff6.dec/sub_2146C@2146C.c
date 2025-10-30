int __fastcall sub_2146C(const char *a1, const char *a2, const char *a3)
{
  int result; // r0

  sub_6FBF4(a1);
  result = sub_1F650(0, (const char *)(dword_223680 + 32));
  if ( a1 )
    result = sub_1F650(1, a1);
  if ( a2 )
    result = sub_1F650(2, a2);
  if ( a3 )
    return sub_1F650(3, a3);
  return result;
}
