int *__fastcall sub_5A654(int a1, int a2)
{
  int *v2; // r3
  void *ptr; // [sp+Ch] [bp-10h] BYREF
  int v8; // [sp+10h] [bp-Ch]
  int *i; // [sp+14h] [bp-8h]

  i = 0;
  for ( i = *(int **)a1; (int *)(a1 + 4) != i; i = v2 )
  {
    v8 = 0;
    sub_5B020(i[4], &ptr);
    v8 = (*(int (__fastcall **)(int, void *))(a1 + 36))(a2, ptr);
    free(ptr);
    if ( !v8 )
      break;
    if ( v8 >= 0 )
      v2 = (int *)i[1];
    else
      v2 = (int *)*i;
  }
  if ( (int *)(a1 + 4) == i )
    return 0;
  else
    return sub_5A48C((int *)a1, i);
}
