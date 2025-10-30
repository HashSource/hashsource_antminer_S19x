int __fastcall sub_248740(int a1, int *a2)
{
  int v4; // r1
  int v5; // r4
  int v7; // t1
  char v8[28]; // [sp+4h] [bp-4Ch] BYREF
  int v9; // [sp+20h] [bp-30h]

  sub_2665F0(v8);
  v4 = *(unsigned __int8 *)(a1 + 1);
  if ( v4 != 115 )
    sub_946E0("Undefined collection format \"%c\".", v4);
  if ( !off_489B5C() )
    sub_946E0("Target does not support \"/s\" option for string tracing.");
  v5 = a1 + 2;
  *a2 = v9;
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 2) - 48 > 9 )
    return sub_9360C(a1 + 2);
  *a2 = strtol((const char *)(a1 + 2), 0, 10);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 2) - 48 > 9 )
    return sub_9360C(a1 + 2);
  do
    v7 = *(unsigned __int8 *)++v5;
  while ( (unsigned int)(v7 - 48) <= 9 );
  return sub_9360C(v5);
}
