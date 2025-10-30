int __fastcall sub_F507C(const char *a1, char *a2, char *a3)
{
  size_t v4; // r4
  size_t v6; // r8
  char *v7; // r7

  if ( a3 == a2 )
    return 0;
  if ( a3 <= a2 )
  {
    v4 = a2 - a3;
    v6 = strlen(a1);
    v7 = (char *)sub_93028(v4 + 1 + v6);
    memcpy(v7, a3, v4);
    memcpy(&v7[v4], a1, v6 + 1);
    return (int)v7;
  }
  return sub_327254(&a1[a3 - a2]);
}
