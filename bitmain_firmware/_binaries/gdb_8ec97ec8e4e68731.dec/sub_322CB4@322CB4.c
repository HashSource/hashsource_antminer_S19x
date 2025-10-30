bool __fastcall sub_322CB4(int a1, int a2)
{
  char *v3; // r5
  char *v4; // r4
  int v5; // r6

  v3 = (char *)sub_3245D0(a1);
  v4 = (char *)sub_3245D0(a2);
  v5 = strcmp(v3, v4);
  free(v3);
  free(v4);
  return v5 == 0;
}
