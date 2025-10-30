int __fastcall sub_24B4D0(int a1, int a2, int a3, int a4, char *s, char *a6, char *a7, unsigned int a8)
{
  int v11; // r3
  char *v12; // r8
  size_t v13; // r0
  size_t v14; // r6
  size_t v15; // r2

  if ( strlen(s) + 80 > a8 )
    sub_946E0("Buffer too small for source encoding");
  v12 = sub_989F0(a3, a4, 8, v11);
  v13 = strlen(a6);
  sprintf(a7, "%x:%s:%s:%x:%x:", a1, v12, s, 0, v13);
  v14 = strlen(a7);
  v15 = strlen(a6);
  if ( a8 <= v14 + 2 * v15 )
    sub_946E0("Source string too long for buffer");
  sub_99420((int)a6, &a7[v14], v15);
  return -1;
}
