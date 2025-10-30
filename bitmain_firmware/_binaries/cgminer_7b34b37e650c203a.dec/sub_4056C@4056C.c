int __fastcall sub_4056C(int a1, size_t *a2)
{
  int v2; // r3
  size_t v3; // r0
  bool v4; // zf
  int v5; // r4

  v2 = *(unsigned __int8 *)(a1 + *a2);
  v3 = a1 + *a2;
  v4 = (v2 & 0xDF) == 0;
  if ( (v2 & 0xDF) != 0 )
    v4 = v2 == 61;
  if ( v4 )
    return 0;
  v5 = v3 + 2;
  *a2 = strcspn((const char *)(v3 + 2), "|= ");
  return v5;
}
