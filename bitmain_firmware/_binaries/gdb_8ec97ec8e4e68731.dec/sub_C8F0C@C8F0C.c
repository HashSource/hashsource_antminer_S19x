int __fastcall sub_C8F0C(int a1, unsigned __int8 *a2, int a3, unsigned __int8 *a4)
{
  int result; // r0
  unsigned __int8 *v8; // r1
  const char *v9; // r0
  const char *v10; // r3
  unsigned __int8 *v11; // [sp+4h] [bp-4h] BYREF

  v11 = a2;
  result = sub_5AB7C(&v11, a3, a3, a4);
  if ( result < 0 )
  {
    v8 = v11;
    v9 = "Negative breakpoint number '%.*s'";
    v10 = "Negative breakpoint location number '%.*s'";
    goto LABEL_7;
  }
  if ( !result )
  {
    v9 = "Bad breakpoint number '%.*s'";
    v10 = "Bad breakpoint location number '%.*s'";
    v8 = v11;
LABEL_7:
    if ( a1 )
      v9 = v10;
    sub_946E0(v9, v8 - a2, a2, v10);
  }
  if ( a4 )
    *(_DWORD *)a4 = v11;
  return result;
}
