char *__fastcall sub_EB100(char *a1)
{
  char **v1; // r5
  char *v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r3

  v1 = sub_EB03C(a1, 0);
  v2 = sub_EAC84((int)v1);
  ASN1_OBJECT_free(v1, v3, v4, v5);
  return v2;
}
