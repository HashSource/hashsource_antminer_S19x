int __fastcall sub_54C5C(int a1)
{
  int (*v1)(void); // r5
  int *v2; // r4
  int v3; // r6
  int result; // r0

  v1 = *(int (**)(void))(a1 + 16);
  if ( !v1 )
    sub_946E0("Invalid command");
  v2 = *(int **)(a1 + 108);
  if ( !v2 )
    return v1();
  v3 = *v2;
  *v2 = 1;
  result = v1();
  *v2 = v3;
  return result;
}
