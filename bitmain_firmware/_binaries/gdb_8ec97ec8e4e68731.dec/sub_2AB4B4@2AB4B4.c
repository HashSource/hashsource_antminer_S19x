void *__fastcall sub_2AB4B4(void *a1, int a2)
{
  void *v3; // r0
  int v4; // r3
  void *v5; // r4

  v3 = sub_2AB3FC(a1, a2);
  v4 = (int)a1;
  v5 = v3;
  if ( a1 )
    v4 = 1;
  if ( v3 )
    v4 = 0;
  if ( v4 )
    free(a1);
  return v5;
}
