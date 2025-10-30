int __fastcall sub_BE1EC(int a1, _DWORD *a2, const char *a3, const char *a4, const char *a5)
{
  _DWORD *v9; // r7
  __int64 v10; // r0
  int v11; // r7
  int result; // r0

  v9 = a2 + 1;
  while ( sub_194300(a2[1]) )
  {
    sub_BE0D4(a1, a2);
    sub_BD75C(a2, v9);
  }
  v10 = sub_171258(a2[1]);
  v11 = v10;
  if ( (unsigned int)**(unsigned __int8 **)(v10 + 24) - 3 > 1 )
    sub_946E0("The left operand of `%s' is not a %s.", a4, a5);
  if ( *a2 != 1 )
    sub_946E0("Structure does not live in memory.", HIDWORD(v10));
  result = sub_BDB2C(a1, (int)a2, a3, 0, v10);
  if ( !result )
    sub_946E0(
      "Couldn't find member named `%s' in struct/union/class `%s'",
      a3,
      *(const char **)(*(_DWORD *)(v11 + 24) + 12));
  return result;
}
