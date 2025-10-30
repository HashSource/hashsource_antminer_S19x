void *__fastcall sub_1E1694(void **a1, signed int *a2, char *s)
{
  signed int v6; // r0
  signed int v7; // r4
  void *result; // r0
  _BYTE *v9; // r2
  signed int v10; // r3
  bool v11; // zf

  v6 = strlen(s);
  if ( *a2 < v6 )
    sub_946E0("Packet too long for target.");
  v7 = v6;
  result = memcpy(*a1, s, v6);
  v9 = *a1;
  v10 = *a2 - v7;
  v11 = *a2 == v7;
  *a1 = (char *)*a1 + v7;
  *a2 = v10;
  if ( !v11 )
    v9[v7] = 0;
  return result;
}
